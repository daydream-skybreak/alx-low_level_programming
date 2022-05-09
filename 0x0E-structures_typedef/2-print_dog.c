#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints dog attribute
 * @d: structure
 */
void print_dog(struct dog *d)
{
	char *str = d->name != NULL? d->name: "(nil)";
	char *str1 = d->owner != NULL? d->owner: "(nil)";
	int age1 = d->age? d->age: -1;
	
	printf("Name: %s\n", str);
	if (age1 == -1)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %d\n", age1);
	}
	printf("Owner: %s\n", str1);
}
