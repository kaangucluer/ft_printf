# ft_printf

va_start: va_list yapısını kullanıma hazırlar ve ilk değişken argümanın konumunu belirler.

va_arg: va_list yapısındaki bir sonraki argümanı alır ve belirli bir tipe dönüştürür.

va_copy: aynı va_list yapısını birden fazla kez kullanmak istediğiniz durumlarda faydalıdır.

va_end: va_list yapısını sonlandırır ve bellekten serbest bırakır.

## Gerekli dönüşümler hakkında kısa açıklamalar:
• %c tek bir karakter yazdırır.
• %s bir karakter dizisi yazdırır.
• %p Void * pointer argümanını hexadecimal biçiminde yazdırır.
• %d 10 tabanında decimal sayı yazdırır.
• %i 10 tabanında tam sayı yazdırır.
• %u 10 tabanında işaretsiz decimal sayı yazdırır.
• %x hexadecimal sayıyı (16 tabanında) küçük harfler ile yazdırır.
• %X hexadecimal sayıyı (16 tabanında) büyük harfler ile yazdırır.
• %% yüzde işareti yazdırır.
