#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog_t - typedef of struct dog
 */
typedef struct dog dog_t;
/**
 * struct dog - new struct for dog info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
