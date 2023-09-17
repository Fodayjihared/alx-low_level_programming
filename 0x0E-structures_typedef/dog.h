#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Dog's info
 * @name: Name
 * @age: Age
 * @owner: Owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * dog_t - typedef for struct dog
 * @name: Name
 * @d: dog
 * @age: Age
 * @owner: Owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
