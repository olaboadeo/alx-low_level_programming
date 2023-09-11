#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  *ifnull - checks if a variable is null
  *@s: string to be checked
  *
  *Return: string
  */
char *ifnull(char *s)
{
	if (s == NULL)
		s = "(nil)";
	return (s);
}

/**
  *print_dog - prints a struct dog
  *@d: variable d
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", ifnull(d->name));
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", ifnull(d->owner));
}
