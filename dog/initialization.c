#include "main.h"

// Initialize a dog structure by allocating memory for its name, owner and age
void init_dog(dog *my_dog, char *name1, char *age1, char *owner1)
{
	char *end;

	// handle the case when user press enter without typing a value
	if (name1[0] == '\n')
		my_dog->name = NULL;
	else
	{
		my_dog->name = malloc(sizeof(name1) + 1);
		strcpy(my_dog->name, name1);
	}

	if (owner1[0] == '\n')
		my_dog->name = NULL;
	else
	{
		my_dog->owner = malloc(sizeof(owner1) + 1);
		strcpy(my_dog->owner, owner1);
	}

	
	int i = 0, valid_age = 1;
	
	// Remove newline character if it exists
	age1[strcspn(age1, "\n")] = '\0';

	while (age1[i] != '\0')
	{
		// handle the case when user types a character that is not a digit or a dot(.)
		if ((age1[i] < '0' || age1[i] > '9') && age1[i] != '.')
		{
			valid_age = 0;
			break;
		}
		i++;
	}
	if(age1[0] == '\0')
	{
		valid_age = 0;
	}

	if (valid_age == 0)
	{
		my_dog->age = NULL;	
	}

	else
	{
		my_dog->age = malloc(sizeof(float));
		*(my_dog->age) = strtof(age1, &end);
	}
}
