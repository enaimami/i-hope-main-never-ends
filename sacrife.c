#include <stdio.h>
#include <bsd/string.h> // gerçek memset ile kıyaslamak için

int main(void)
{
	char buffer1[20];
	strlcpy(buffer1, "Hello, World!", 6);
	
	printf("Resulting string: '%s'\n", buffer1); // Beklenen çıktı: 'Hell'
	return 0;
}
