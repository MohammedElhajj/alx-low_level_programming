#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string
 * @s: the string to be measured
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * _strcopy - copies a source string to a destination string
 * @dest: the destination string
 * @src: the source string
 *
 * Return: A pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0; /* Loop index */

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: A new structure called ndog otherwise NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	/* Allocate space in memory and check */
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	/* Store a copy of name and owner and set the value of the age */
	ndog->name = _strcopy(ndog->name, name);
	ndog->age = age;
	ndog->owner = _strcopy(ndog->owner, owner);

	/* Return the new structure */
	return (ndog);
}























