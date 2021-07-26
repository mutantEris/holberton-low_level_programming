#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - makes a dog
 * @d: dog
 * @name: dogs name
 * @age: how old doggy is
 * @owner: dogs best friend
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
