#include "unistd.h"

int	main(int argsc, char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i])
		i++;
	write(1, argv[0], i);
	write(1, "\n", 1);
	return (0);
}