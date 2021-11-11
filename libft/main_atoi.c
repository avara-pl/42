#include <stdlib.h>
#include <stdio.h>

int ft_atoi (char *str);

int main (void)
{
	char a[] = " 	-1234";
	int	b;
	int	c;

	b = ft_atoi(a);
	printf("Resultado de mi función FT_ATOI:  %d.\n", b);
	c = atoi(a);
	printf("\n");
	printf("Resultado de la función ATOI:  %d.\n", c);
}
