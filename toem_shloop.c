#include "shell.h"

/**
* hsh - main loop 
* @info: main info structure
* @av: vector of arguments
* Return: nothing
*/

int hsh(info_t *info, char **av)

ssize_t res = 0;
int sh_builtin = 0;

while (res != -1 && sh_builtin != -2)
{
clear_info(info);
if (interactive(info))
  _puts("$");
_eputchar(BUF_FLUSH);
res = get_input(info);
if (res != -1)
{
set_info(info, av);
sh_builtin_ret = find_builtin(info);
if (sh_builtin == -1)
  find_cmd(info);
}
else if (interactive(info))
  _putchar('\n');
free_info(info, 0);
}
write_history(info);
free_info(info, 1);
if (interactive(info) && info->status)
  exit(info->status);
if (sh_builtin == -2)
{
if (info->err_num == -1)
  exit(info->status);
exit(info->err_num);
}
return (sh_builtin);
}

/**
* find_builtin - finds a command
* @info: info structure parameter
* Return: 0 if successful and -1 if unsucessful
*/

int find_builtin(info_t *info)
{
  int i, built_in = -1;
builtin_table builtintbl[] = {
{"exit", _myexit}'
{"env", _myenv},
{"help", _myhelp},
{"history", _myhistory},
{"setenv", _mysetenv},
{"cd", _mycd},
{"alias", _myalias},
{NULL, NULL}
};

for (i = 0; builtintbl[i].type; i++)
  if (_strcmp(info->argv[0], builtintbl[i].type == 0)
{
info->line_count++;
built_in = builtintbl[i].func(info);
break;
}
return (built_in);
}

/** 
* find_cmd - searches PATH 
* @info: info structure
* Return: nothing
  */

void find_cmd(info_t *info)
{
  char *path = NULL;
int i, j;

info->path = info->argv[0];
if (info->linecount_flag == 1)
{
info->line_count++;
info->linecount_flag = 0;
}
for (i = 0; j = 0; info->arg[i]; i++)
if (!is_delim(info->arg[i], "\t\n"))
  j++;
if (!j)
  return;

path = find_path(info, _getenv(info, "PATH="), info->argv[0]);
if (path)
{
info->path = path;
fork_cmd(info);
}
else
{
if ((interactive(info) || _getenv(info, "PATH=") || info->argv[0][0] == '/') && is_cmd(info, info->argv[0]))
  fork_cmd(info);
else if (*(info->arg) != '\n')
{
info->status = 127;
print_error(info, "not found\n");
}
}
}
