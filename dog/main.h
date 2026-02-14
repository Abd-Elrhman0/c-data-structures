#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
// Each dog has a name, owner and age
typedef struct {
	char *name;
	float *age;
	char *owner;
} dog;
void init_dog(dog *my_dog, char *name1, char *age1, char *owner1);
void print_dog(dog *my_dog);
void free_dog(dog *my_dog);
#endif // !ΜΑΙΝ Η

