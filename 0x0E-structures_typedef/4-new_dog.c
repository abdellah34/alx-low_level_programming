#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * str_len - calculates the length of a string.
 * @s: the string.
 * Return: the length.
 */
unsigned int str_len(char *s)
{
	unsigned int len = 0;

	while (*s++)
		len++;
	return (len);
}
/**
 * new_dog - creates a new dog.
 * @name: name .
 * @age: age.
 * @owner: Owner.
 * Return: a new dog's infos.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	unsigned int i;
	unsigned int n_len = str_len(name);
	unsigned int o_len = str_len(owner);

	n_dog = (dog_t *)malloc(sizeof(dog_t));
	if (n_dog == NULL)
	{
		return (NULL);
	}
	n_dog->name = (char *)malloc(n_len + 1);

	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = (char *)malloc(o_len + 1);

	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < n_len; i++)
	{
		n_dog->name[i] = name[i];
	}
	n_dog->name[i] = '\0';
	for (i = 0; i < o_len; i++)
	{
		n_dog->owner[i] = owner[i];
	}
	n_dog->owner[i] = '\0';
	n_dog->age = age;
	return (n_dog);
}
