#include <unistd.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sort;

	i = 0;
	sort = 0;
	length--;
	while (i < length)
	{
		if (sort >= 0 && (*f)(tab[i],tab[i + 1] >= 0)
		{
			if ((*f)(tab[i], tab[i + 1] != 0)
				sort = 1;
		}
		else  if (sort <= 0 && (*f)(tab[i], tab[i + 1] <= 0)
		{
			sort -= 1;
		}
		else
			return (0);
		i++;
	}
	return (1);
}
