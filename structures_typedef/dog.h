#ifndef HEADER_FILE_1
#define HEADER_FILE_1
/**
* struct dog - Typedef for struct.
* @name: name of dog.
* @age: Age of dog.
* @owner: Owner of dog
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
