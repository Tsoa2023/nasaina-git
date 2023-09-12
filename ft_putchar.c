#include <unistd.h> // pour utiliser la fonction write

void ft_putchar(char c)
{
	write(1, &c, 1);
}

