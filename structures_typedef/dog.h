#ifndef DOG_HEADER
#define DOG_HEADER
/**
 * struct dog - Dog attributes
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
