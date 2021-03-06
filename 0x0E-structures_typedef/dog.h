#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure call dog
 * @name: Name of the Dog
 * @age: Age of the dog
 * @owner: Owner of the dog
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

dog_t *new_dog(char *name, float age, char *owner);
int counter(char *s);
char *_strcpy(char *dest, char *src);

void free_dog(dog_t *d);
#endif
