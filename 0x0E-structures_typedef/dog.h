#ifndef DOG_H
#define DOG_H
/**
 * struct dog - is the 1st
 * @name: 1st
 * @age: 2st
 * @owner: 3st
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
