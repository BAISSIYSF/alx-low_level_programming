#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: a pointer to the newly allocated duplicate string, or NULL if an
 * error occurs
 */
char *_strdup(char *str)
{
char *dup;
size_t len;

if (str == NULL)
return (NULL);

len = strlen(str);
dup = malloc(len + 1);
if (dup == NULL)
return (NULL);

memcpy(dup, str, len + 1);
return (dup);
}
