#include "unistd.h"

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = ac - 1;
	while (i >= 1)
	{
		j = 0;
		while (av[i][j])
			j++;
		write(1, av[i], j);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}