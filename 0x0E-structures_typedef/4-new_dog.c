#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  *_strlen - returns the length of a string
  *@s : string to be checked
  *Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 *_strcpy - copies a string
 *@dest: destination string
 *@src: source string
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int a;
	char *p = dest;

	while (src[l] != '\0')
	{
		l++;
	}

	for (a = 0; a <= l; a++)
	{
		dest[a] = src[a];
	}

	return (p);
}

/**
  *new_dog - creates a new dog
  *@name: name of dog
  *@age: age of dog
  *@owner: name of dog owner
  *
  *Return: new dog on success, NULL on failure
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(_strlen(name) + 1);
	ndog->owner = malloc(_strlen(owner) + 1);
	if (ndog->name == NULL || ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}

	_strcpy(ndog->name, name);
	_strcpy(ndog->owner, owner);
	ndog->age = age;
	return (ndog);
}
