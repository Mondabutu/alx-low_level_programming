#include "dog.h"

/**
 * init_dog - initialize the variable of type struct dog.
 * @d: The pointer to struct type dog
 * @name: The pointer to char name's dog
 * @age: the age of the dog
 * @owner: The pointer to char owner'sdog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name - name;
		d->age = age;
		d->owner = owner;
	}
}
