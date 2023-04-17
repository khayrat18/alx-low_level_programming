#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * *new_dog - function thta creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: return NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;


	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->age = age;
	dog->name = malloc(strlen(name) + 1 * sizeof(char));
	if (dog->name == NULL)
		return (NULL);
	dog->owner = malloc(strlen(owner) + 1 * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);

		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	return (dog);
}

