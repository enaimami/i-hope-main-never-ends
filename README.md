*This project has been created as part of the 42 curriculum by mdisbuda.*

# get_next_line

## Açıklama

`get_next_line`, her çağrıldığında bir dosya tanımlayıcısından tek satır okuyan bir C fonksiyonudur. Tekrarlı çağrılar sayesinde bir dosyayı tüm içeriği belleğe yüklemeden satır satır okumak mümkün olur. Fonksiyon, satırı sonundaki `\n` karakteriyle birlikte döndürür; dosya sonu `\n` olmadan gelirse o son parça `\n` olmadan döndürülür. Okunacak bir şey kalmadığında veya hata oluştuğunda `NULL` döner.

Bu projenin öğrettiği temel kavram **statik değişkenler**dir — fonksiyon çağrıları arasında değerini koruyan, bir önceki okumada nerede kalındığını hatırlamak için kullanılan değişkenler.

## Kullanım

**Derleme:**

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c
```

`BUFFER_SIZE` bayrağı isteğe bağlıdır. Verilmezse header'da tanımlı varsayılan değer (42) kullanılır.

**Örnek kullanım:**

```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int     fd;
    char    *line;

    fd = open("dosya.txt", O_RDONLY);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return (0);
}
```

**Bilinen kısıtlamalar:**
- Son çağrıdan sonra, `read` henüz EOF'a ulaşmamışken dosya değiştirilirse davranış tanımsızdır.
- İkili (binary) dosyalar okunurken davranış tanımsızdır.
- Tek statik değişken nedeniyle aynı anda birden fazla dosya tanımlayıcısı desteklenmez.

## Algoritma

Uygulama, **stash tabanlı tamponlu okuma** yaklaşımını kullanır.

### Nasıl çalışır

`static char *stash` değişkeni çağrılar arasında yaşar ve döndürülen son satırın ötesinde okunan fazla veriyi saklar.

Her `get_next_line` çağrısı iki adımı takip eder:

**1. Stash'i doldur** (`fill_stash`):
Dosya tanımlayıcısından `BUFFER_SIZE` bayt okunur ve `ft_strjoin` ile `stash`'e eklenir. Bu işlem, `stash`'te newline bulunana ya da EOF'a ulaşılana kadar devam eder. Böylece her çağrıda dosyadan gereğinden fazla okuma yapılmaz.

**2. Satırı çıkar** (`ft_extract_line`):
`stash`'teki ilk `\n` konumu bulunur (yoksa `\0`'a kadar gidilir). O konuma kadar olan kısım döndürülecek satır olarak kopyalanır. Geride kalan kısım bir sonraki çağrı için tekrar `stash`'e yazılır.

### Neden bu yaklaşım

- **Minimum okuma**: newline bulunur bulunmaz okuma durur, projenin "her çağrıda mümkün olduğunca az oku" gereksinimini karşılar.
- **lseek kullanılmaz**: stash, önceki okumadan kalan fazla baytları doğal olarak saklar, geriye sarma gerekmez.
- **Tek statik değişken**: zorunlu kısım için bir `static` işaretçi yeterlidir, durum tamamen fonksiyonun içinde tutulur.

### Ele alınan edge case'ler

- `fd < 0` veya `BUFFER_SIZE <= 0`: hemen `NULL` döner.
- Sonda `\n` olmayan EOF: stash'te kalan içerik son satır olarak döndürülür.
- `read` hatası (örn. fd dışarıdan kapatıldı): stash serbest bırakılır, `NULL` döner.
- Herhangi bir `malloc` hatası: bellek serbest bırakılır, `NULL` döner.

## Kaynaklar

- `man 2 read` — read sistem çağrısının davranışı ve dönüş değerleri
- `man 3 malloc` / `man 3 free` — heap bellek yönetimi
- [C'de statik değişkenler — cppreference](https://en.cppreference.com/w/c/language/storage_duration)
- 42 Norm dokümantasyonu — norminette tarafından zorlanan kodlama stili kuralları

**Yapay zeka kullanımı:**

Bu projede Claude (claude.ai) aşağıdaki görevler için kullanıldı:

- Norminette'in 25 satır sınırını aşan fonksiyonların daha küçük yardımcı fonksiyonlara bölünmesi (`fill_stash`, `ft_strndup`, `get_tail`).
- Yardımcı fonksiyon isimlerinin 42 kurallarına uygun `ft_` ön ekli standart isimlere dönüştürülmesi.
- Evaluation hazırlığı sırasında edge case'lerin tartışılması (fd kapanması, `INT_MAX` buffer boyutu, multi-fd kısıtlaması).

Temel mantık, algoritma tasarımı ve kodun anlaşılması tamamen bana aittir. Yapay zeka, algoritmayı yazmak için değil; stil düzeltmeleri ve edge case tartışmaları için bir araç olarak kullanılmıştır.
