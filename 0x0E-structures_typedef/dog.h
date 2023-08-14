#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/**
 * struct dog - gives dog's infos
 * @name: its name
 * @age: its age
 * @owner: the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif

