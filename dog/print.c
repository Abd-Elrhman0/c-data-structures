#include "main.h"

// print the dog struct by printing every element in it
void print_dog(dog *my_dog)
{
	if (my_dog->name == NULL)
		printf("\nName: (nil)\n");
	else
		printf("\nName: %s", my_dog->name);

	if (my_dog->age == NULL)
		printf("\nAge: (nil)\n");
	else
		printf("\nAge: %f\n", *(my_dog->age));

	if (my_dog->owner == NULL)
		printf("\nOwner: (nil)\n\n");
	else
		printf("\nOwner: %s\n", my_dog->owner);
}
