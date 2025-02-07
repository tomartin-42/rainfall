#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **av)
{
	int ret;
	char buff[132]; 
	FILE *file = fopen("/home/user/end/.pass", "r");

	memset(buff, 0, 132);
	if ((!file) || (argc != 2))
		return(-1);
	else
	{
		fread(buff, 1, 66, file);
		buffer[65] = 0;
		buffer[atoi(av[1])] = 0;
		fread(&buff[66], 1, 65, file);
		fclose(file);

		if (strcmp(buff, av[1]) == 0)
			execl("/bin/sh", "sh", NULL);
		else
			puts(&buff[66]);
	}
	return (0);
}
