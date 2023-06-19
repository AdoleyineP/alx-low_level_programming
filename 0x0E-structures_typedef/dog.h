#ifndef DOG_H_
#define DOG_H_

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
 /**
 * struct dog - struct that stores some information of a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Description: struct called "dog" that stores its name, its age
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
