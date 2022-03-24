
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);

int	main(void)
{
	char	b[] = "HOLA MUNDO";
	char	b1[] = "HOLA MUNDO";
	int		c;
	size_t	len;

	c = '$';
	len = 4;
	bzero(b, len);
	printf("Funcion original: %s\n", b);
	ft_bzero(b1, len);
	printf("Mi	 funcion: %s\n", b1);
	memset(b, c, len);
	printf("Funcion original: %s\n", b);
	ft_memset(b1, c, len);
	printf("Mi	 funcion: %s\n", b1);
}
