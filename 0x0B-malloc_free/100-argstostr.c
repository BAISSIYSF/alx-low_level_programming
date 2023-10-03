
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to a new string containing all the arguments
 * concatenated with a newline character, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
int i, j, k = 0, len = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

/* Determine length of concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++; /* For the newline character */
}

/* Allocate memory for the string */
str = malloc((len + 1) * sizeof(char));
if (str == NULL)
return (NULL);

/* Copy arguments to string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
str[k++] = av[i][j];
str[k++] = '\n';
}

str[k] = '\0'; /* Add null terminator */

return (str);
}
