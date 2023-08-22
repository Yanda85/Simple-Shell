#include <stdio.h>

/**
* main - prints all arguments
* @c: number of arguments in av
* @av: array of strings (arguments)
*/

int main(int ac, char **av)
{
  int index;

for(index = 0; index < ac; index++)
{
(void) ac;
printf("%s\n", av[index]);
}
return (0);
}
