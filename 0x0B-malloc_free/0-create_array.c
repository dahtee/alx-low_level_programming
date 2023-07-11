#include "main.h"

/**
 * *create_array - creates new char arrays
 * @c : char to be checked
 * 
 * Return : Null if 0 or fails & a pointer if successful  
 */
char *create_array(unsigned int size, char c);
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	char *p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	
	for (unsigned int i = 0; i < size; i++)
		p[i] = c;

	return (p);

}
