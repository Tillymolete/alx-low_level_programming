#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: the dogs name
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: the new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
		return (NULL);

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	new_dog_ptr->name = malloc(sizeof(char) * (strlen(name) + 1));

	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}
	new_dog_ptr->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}
	strcpy(new_dog_ptr->name, name);
	new_dog_ptr->age = age;
	strcpy(new_dog_ptr->owner, owner);

	return (new_dog_ptr);
}

/**
 * my_strlen - the string length
 * @str: the measured string
 * Return: the length of the measured string
 */

int my_strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcpy - copies the string from source
 * @src: the source string
 * @dest: the destination of the buffer sorting string
 * Return: the pointer destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
