#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c);

int main (void)
{
	const char a[] = "abcdefg"
	int x = 63;

	char *b;
	char *c;

	b = ft_strchr(a, x);
	printf("Resultado de mi función FT_STRCHR: %s.\n", b);
	printf("\n");
	c = strchr(a, x);
	printf("Resultado de la función STRCHR: %s.\n", c);
	
	return (0);

}
