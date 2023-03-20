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

typedef struct dog
	{

		char *name;
		float age;
		char *owner;
	};
int _strlen(char *str);
char *strcopy(char *dest, char *src);

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog_ptr->name = malloc (sizeof(char) * (_strlen(name) + 1));

	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}
	strcopy(new_dog_ptr->name, name);
	new_dog_ptr->age = age;
	_strcopy(new_dog_ptr->owner, owner);

	return (new_dog_ptr);

/**
 * _strlen - the string length
 * @str: the measured string
 * Return: the length of the measured string
 */

_strlen(char *str)
{
	int len = 0;
	
	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - copies the string from source
 * @src: the source string
 * @dest: the destination of the buffer sorting string
 * Return: the pointer destination
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;
	
	while ((dest[i] = src[i]) != '\0')
		i++;
	return (dest);
}
}
