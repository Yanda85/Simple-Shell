#include <stdio.h>
#include <unistd.h>

/**
* main - prints process ID of the parent process
* Return: nothing 0
*/

int main(void)
{
  pid_t our_ppid;

our_ppid = getppid();

printf("%u\n", our_ppid);
return (0);
}
