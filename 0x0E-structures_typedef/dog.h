#ifndef _DOG_
#define _DOG_

/**
 * struct dog - Dog with a few attributes
 * @name: The name of the dog as a pointer to the first character of a string
 * @age: The age of the dog aas a float
 * @owner: The name of the owner of the dog as a pointer to the first character
 * of a string
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *dup_strint(char *s);
void free_dog(dog_t *d);

#endif
