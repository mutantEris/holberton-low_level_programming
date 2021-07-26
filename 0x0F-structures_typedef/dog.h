#ifndef DOG_H
#define DOG_H
/**
 * struct dog - good boy
 * @age: dogs age
 * @owner: dogs friend
 * @name: dogs name
 */
struct dog
{
float age;
char *owner;
char *name;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
