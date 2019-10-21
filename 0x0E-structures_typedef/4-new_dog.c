#include "dog.h"
#include <stdlib.h>

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

	return(ret);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	char *tname, *towner;
	dog_t *ret;

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
