#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words from
 *
 * Return: The number of words in the string
 */
static size_t count_words(const char *str)
{
size_t count = 0;
int in_word = 0;

while (*str != '\0')
{
if (isspace(*str))
{
in_word = 0;
}
else if (!in_word)
{
in_word = 1;
++count;
}

++str;
}

return count;
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: An array of strings, or NULL if str == NULL or str == "" or if memory allocation fails
 */
char **strtow(char *str)
{
char **words;
size_t nwords, i, len;
const char *p;

if (str == NULL || *str == '\0')
return NULL;

nwords = count_words(str);
words = malloc(sizeof(char *) * (nwords + 1));
if (words == NULL)
return NULL;

for (i = 0, p = str; i < nwords; ++i)
{
while (isspace(*p))
++p;

len = strcspn(p, " \t");
words[i] = malloc(sizeof(char) * (len + 1));
if (words[i] == NULL)
{
/* Free memory allocated so far */
while (i-- > 0)
free(words[i]);

free(words);
return NULL;
}

strncpy(words[i], p, len);
words[i][len] = '\0';
p += len;
}

words[nwords] = NULL;
return words;
}
