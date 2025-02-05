#include <string.h>
#include <stdio.h>

int language = 0;

int greetuser(char *buff)
{
  char local_buff[72];

  if (language == 1) {
    strcpy(local_buff, "Hyvää päivää ");
  }
  else if (language == 2) {
    strcpy(local_buff, "Goedemiddag! ");
	}
  else if (language == 0) {
    strcpy(local_buff, "local_buff! ");
  }

  strcat(local_buff, buff);
  return puts(local_buff);
}

int main(int argc, char **argv)
{
	char	buff[72];
	char	*env;

	if (argc != 3)
		return 1;

	memset(buff, 0, 72);
	strncpy(buff, argv[1], 40);
	strncpy(buff, argv[2], 32);
	env = getenv("LANG");
	if (env != 0)
	{
		if (memcmp(env, "fi", 2) == 0)
		{
			lang = 1;
		}
		else if (memcmp(env, "nl", 2) == 0)
		{
			lang = 2;
		}
	}

	greetuser(buff);

	return 0;
}
