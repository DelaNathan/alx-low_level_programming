#ifndef DOG_H
#define DOG_H
/**
*struct dog - dog credentials
*
*@name: name of dog
*@age: age of dog
*@owner: owner of dog
*
*return 0 success
*/
struct dog
{
char *name;
float age;
char *owner;
};
/* Additional function prototypes */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_doq(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
