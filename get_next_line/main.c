#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test1.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error opening file\n");
		return (1);
	}

	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}

	close(fd);
	return (0);
}