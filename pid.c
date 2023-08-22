#include <stdio.h>
#include <unistd.h>

/**
* main - creates parent procecess ID
* Return: nothing 0
*/

int main(void)
{
  pid_t our_pid;

our_pid = getpid();
printf("%u\n", our_pid);
return (0);
}
