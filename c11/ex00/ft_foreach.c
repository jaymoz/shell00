#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*ft)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
