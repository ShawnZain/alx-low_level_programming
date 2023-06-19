#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a struct of trype struct dog
 * @name: member1
 * @age: member2
 * @owner: member3
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - defining a new type for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
