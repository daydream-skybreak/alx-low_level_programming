#ifndef _dog_h_
#define _dog_h_
/**
 * dog - structure named dog
 * @name: name of the dog
 * @age:age of the dog
 * @owner: owner of the dog
 */

typedef struct dog
{
	char *name;
	char *owner;
	int age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif/* _dog_h_ */
