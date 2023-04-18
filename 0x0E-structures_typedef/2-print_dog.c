#include "dog.h"
/**
 * print_dog - main function
 * @d: 1st
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (name == NULL)
		{
			*d.name = "nill";
		}
		if (owner == NULL)
		{
			*d.owner = "nill";
		}
	printf("Name: %s\n", *d->name);
	printf("Age: %f\n", *d->age);
	printf("Owner: %s\n", *d->owner);
	}
}
