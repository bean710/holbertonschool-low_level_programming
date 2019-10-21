#include "dog.h"
#include <stdlib.h>

/**
 * dup_string - Duplicates a string passed into a newly allocated space in
 * memory
 * @s: Pointer to the first character in the source string
 *
 * Return: Pointer to the first character in the newly allocated and copied
 * string
 */
char *dup_string(char *s)
{
	int len, i;
	char *ret;

	for (len = 0; s[len]; len++)
		;

	ret = malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);

	for (i = 0; s[i]; i++)
		ret[i] = s[i];
	ret[i] = '\0';

	return (ret);
}

/**
 * new_dog - Makes a new dog with the given parameters
 * @name: Pointer to the first character of the string of the name of the dog
 * to be created
 * @age: Age of the dog to be created as a float
 * @owner: Pointer to the first character of the string of the owner of the dog
 * to be created
 *
 * Return: Pointer to the new `dog_t` with all of the given attributes
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *tname, *towner;
	dog_t *ret;

	if (name == NULL || owner == NULL)
		return (NULL);

	ret = malloc(sizeof(dog_t));
	if (ret == NULL)
		return (NULL);
	ret->age = age;

	tname = dup_string(name);
	if (tname == NULL)
		return (NULL);
	ret->name = tname;

	towner = dup_string(owner);
	if (towner == NULL)
		return (NULL);
	ret->owner = towner;

	return (ret);
}
