#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure name
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
char *name;
float age;
char *owner;
}
;
struct dog *d;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
