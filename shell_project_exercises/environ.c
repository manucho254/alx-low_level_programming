#include <unistd.h>
#include <stdio.h>

extern char **environ;

int main(void)
{
	int i = 0;

	/** loop through the environ*/
	while(environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return (0);
}
