# libft

42 müfredatı kapsamında geliştirilen `libft`, C standart kütüphanesindeki bazı temel fonksiyonların yeniden implementasyonudur.  
Amaç, bellek yönetimi, pointer mantığı, string işlemleri ve veri yapıları konusunda sağlam bir temel oluşturmaktır.

---

## 📌 Proje Amacı

- Standart C fonksiyonlarının nasıl çalıştığını derinlemesine anlamak
- Bellek yönetimi (malloc/free) pratiği kazanmak
- String ve memory işlemlerinde güvenli kod yazmayı öğrenmek
- Makefile yazımı ve arşiv (static library) oluşturma pratiği yapmak

---

## ⚙️ Derleme

Projeyi derlemek için:

```bash
make
```

Bu komut `libft.a` isimli static library oluşturur.

Temizlemek için:

```bash
make clean
```

Object dosyalarını ve library'yi silmek için:

```bash
make fclean
```

Yeniden derlemek için:

```bash
make re
```

---

## 📚 İçerik

### 🔤 Karakter Kontrol Fonksiyonları

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

### 🧵 String Fonksiyonları

- `ft_strlen`
- `ft_strdup`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strmapi`
- `ft_striteri`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_itoa`
- `ft_atoi`

### 🧠 Memory Fonksiyonları

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

### 📤 File Descriptor Fonksiyonları

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### 📦 Linked List Fonksiyonları

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstadd_back`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

---

## 🛠 Kullanım

Başka bir projede kullanmak için:

```bash
cc main.c libft.a
```

veya include ederek:

```c
#include "libft.h"
```

---

## 🧪 Test

Proje aşağıdaki tester araçları ile doğrulanmıştır:

- Francinette
- libft-war-machine
- Tripouille tester
- libft-unit-test

---

## 👤 Yazar

mdisbuda  
42 Kocaeli

---

## 📄 Lisans

Bu proje 42 eğitim amaçlı hazırlanmıştır.

## AI Kullanımı

Bu projede ai sadece hataları kontrol etmek için ve bu readme'yi yazmak için kullanılmıştır.
