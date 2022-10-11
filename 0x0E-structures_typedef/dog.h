#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - structure for dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

/**
 * init_dog - function that initialize a dog
 * @d: address of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - function that prints a struct dog
 * @d: address of the dog
 */
void print_dog(struct dog *d);
#endif
