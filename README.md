*Bu proje, 42 müfredatının bir parçası olarak mdisbuda tarafından oluşturulmuştur.*

# ft_printf

## Açıklama

`ft_printf`, C standart kütüphanesindeki `printf` fonksiyonunun yeniden yazılmış halidir. Bu projenin amacı; variadic fonksiyonlar, format dizileri ve farklı veri tiplerinin çıktıya dönüştürülmesi konularında derinlemesine pratik kazanmaktır.

Proje, aşağıdaki format belirteçlerini destekler:

| Belirteç | Açıklama |
|----------|----------|
| `%c` | Tek karakter |
| `%s` | Karakter dizisi (string) |
| `%p` | Pointer adresi (hexadecimal, `0x` önekiyle) |
| `%d` | İşaretli ondalık tam sayı |
| `%i` | İşaretli ondalık tam sayı |
| `%u` | İşaretsiz ondalık tam sayı |
| `%x` | İşaretsiz hexadecimal (küçük harf) |
| `%X` | İşaretsiz hexadecimal (büyük harf) |
| `%%` | Yüzde işareti |

---

## Dosya Yapısı

```
ft_printf.c          → Ana fonksiyon ve format ayrıştırıcı
ft_printf_char.c     → Karakter ve string yazdırma (ft_putchar, ft_putstr, ft_putptr)
ft_printf_nbr.c      → Sayı yazdırma (ft_putnbr, ft_putnbr_u)
ft_printf_hex.c      → Hexadecimal yazdırma (ft_putnbr_hex, ft_putnbr_hex_up)
ft_printf.h          → Fonksiyon prototipleri
Makefile             → Derleme kuralları
```

---

## Derleme ve Kullanım

### Kütüphaneyi derlemek

```bash
make
```

Bu komut `libftprintf.a` statik kütüphanesini oluşturur.

### Temizleme

```bash
make clean    # .o dosyalarını siler
make fclean   # .o ve .a dosyalarını siler
make re       # Sıfırdan yeniden derler
```

### Kendi projenizde kullanmak

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Merhaba %s! Sayı: %d, Hex: %x\n", "dünya", 42, 255);
    return (0);
}
```

Derleme:

```bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o program
```

---

## Algoritma ve Veri Yapısı Açıklaması

### Format Ayrıştırma

`ft_printf`, format dizisini karakter karakter dolaşır. `%` karakteriyle karşılaştığında bir sonraki karaktere bakarak hangi dönüşümün yapılacağını belirler ve ilgili fonksiyonu çağırır. Bu yaklaşım, tek geçişli ve öngörülebilir bir kontrol akışı sağlar.

### Variadic Fonksiyonlar

`va_list`, `va_start`, `va_arg`, `va_end` makroları kullanılarak değişken sayıda argüman işlenir. `va_list` pointer olarak iletilir; böylece her `detect_and_write` çağrısı argüman pozisyonunu doğru şekilde ilerletir.

### Sayı Dönüşümleri

Tüm sayı yazdırma fonksiyonları (`ft_putnbr`, `ft_putnbr_u`, `ft_putnbr_hex`, `ft_putnbr_hex_up`) **özyinelemeli (recursive)** olarak çalışır. Sayıyı tabana bölerek en büyük basamaktan başlayıp `ft_putchar` ile tek tek yazar. Bu yaklaşım, ara bellek (buffer) kullanımını tamamen ortadan kaldırır.

`INT_MIN` (-2147483648) özel bir durum olarak ele alınır; çünkü bu değerin işareti değiştirildiğinde `int` sınırı aşılır. Bu yüzden sayı sabit string olarak ikiye bölünüp yazılır.

### Pointer Yazdırma

`ft_putptr`, pointer değerini `unsigned long` olarak alır. NULL pointer için `(nil)`, diğer durumlar için `0x` öneki ile hexadecimal çıktı üretir.

---

## Kaynaklar

- [cppreference — printf](https://en.cppreference.com/w/c/io/fprintf)
- [cppreference — va_arg](https://en.cppreference.com/w/c/variadic)
- [42 Norminette](https://github.com/42School/norminette)
- [IEEE — Variadic Functions in C](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)

### Yapay Zeka Kullanımı

Bu projede yapay zeka (Claude Code) aşağıdaki görevler için kullanılmıştır:

- Norminette hatalarının tespit edilmesi ve giderilmesi
- Kaynak dosyaların tematik olarak yeniden düzenlenmesi (`_char`, `_nbr`, `_hex`)
- README dosyasının yazılması
- Proje hazırlanma süresi olan 5 saat boyunca tek bir claude code kullanıldı yani bu veriler gerçek (kullanıcı isteği ile eklendi)

Algoritma tasarımı ve kodun işlevsel kısımları tamamen öğrenci tarafından geliştirilmiştir.
