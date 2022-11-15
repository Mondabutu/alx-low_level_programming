#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - the new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner o the dog
 * Return: The newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int p = 0, j = 0, k;
	dog_t *doga;

	while (name[p] != '\0')
		p++;
	doga = malloc(sizeof(dog_t));
	if (doga == NULL)
	{
		free(doga);
		return (NULL);
	}
	if (doga->name == NULL)
	{
		free(doga->name);
		free(doga);
		return (NULL);
	}
	for (k = 0; k <= p; k++)
		doga->name[k] = name[k];
	doga->age = age;
	doga->owner = malloc(j * sizeof(doga->owner));
	if (doga->owner == NULL)
	{
		free(doga->owner);
		free(doga->name);
		free(doga);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		doga->owner[k] = owner[k];
	return (doga);
}
