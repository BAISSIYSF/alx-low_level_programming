#include <stdlib.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with a specific char.
 * @size: The size of the array to create.
 * @c: The char to initialize the array with.
 *
 * Return: If size is 0 or the function fails - NULL.
 * Otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c) {
// Check for a zero-sized array
if (size == 0) {
return NULL;
}

// Allocate memory for the array
char *arr = (char *)malloc(size * sizeof(char));

// Check if the allocation was successful
if (arr == NULL) {
return NULL;
}

// Initialize the array with the specified character
for (unsigned int i = 0; i < size; i++) {
arr[i] = c;
}

return arr;
}
