#include "main.h"

// free dynamically allocated members of dog structure
void free_dog(dog *my_dog)
{
    free(my_dog->name);
    free(my_dog->age);
    free(my_dog->owner);
    free(my_dog);
}