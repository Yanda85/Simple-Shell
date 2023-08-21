#include <stdio.h>
#include <unistd.h>

/**
* main - creates parent procecess ID
* Return: nothing 0
*/

int main(void)
{
  pid_t pid;

pid = getpid();
printf("%u\n", pid);
return (0);
}
