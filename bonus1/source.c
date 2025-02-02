#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	int		num;
	char	str[40];

	num = atoi(argv[1]);
	
	if ((num < 10)) {
		memcpy(str, argv[2], num * 4);
		if (num == 1464814662){
			execl("/bin/sh", "sh", NULL);
		}
		return (1);
	}
	
	return (0);
}
