#include "shell.h"

/**
* is_cmd - checks if a file is executable command
* @info: info structure
* @path: path
* Return: 1 if sucessful, 0 if unsuccessful
*/

int is_cmd(info_t *info, char *path)
{
  struct stat st;

(void)info;
if (!path || stat(path, &st))
  return (0);
if (st.st_mode & S_IFREG)
{
return (1);
}
return (0);
}

/**
* dup_chars - convert characters into duplicates
* @start: start i
* @stop: stop i
* @pathstr: string path
* Return: pointer
*/

char *dup_chars(char *pathstr, int start, int stop)
{
  static char buf[1024];
int i = 0, j = 0;

for (j = 0, i = start; i < stop; i++)
  if (pathstr[i] != ':')
    buf[j++] = pathstr[i];
buf[j] = 0;
return (buf);
}

/**
* find_path - searches cmd in PATH
* @cmd: command to search
* @pathstr: string to the path
* @info: info structure
* Return: cmd or NULL
*/

char *find_path(info_t *info, char *pathstr, char *cmd)
{
  int i = 0, curr_pos = 0;
char *path;

if (!pathstr)
  return (NULL);
if ((_strlen(cmd) > 2) && starts_with(cmd, "./"))
{
if (is_cmd(info, cmd))
  return (cmd);
}
while (1)
{
if (!pathstr[i] || pathstr[i] == ':')
{
path = dup_chars(pathstr, curr_pos, i);
if (!*path)
  _strcat(path, cmd);
else
{
    _strcat(path, "/");
_strcat(path, cmd);
}
if (is_cmd(info, path))
  return (path);
if (!pathstr[i])
  break;
curr_pos = i;
}
i++;
}
return (NULL);
}
