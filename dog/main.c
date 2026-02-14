#include "main.h"

// testing my functions
int main(void)
{
	char a[64];
	char b[64];
	char c[64];
	dog *my_dog = malloc((2 * 64) + sizeof(float));

	printf("Enter the dog name: ");
	fgets(a, 64, stdin);
	printf("Enter the dog age: ");
	fgets(b, 64, stdin);
	printf("Enter the dog owner: ");
	fgets(c, 64, stdin);

	init_dog(my_dog, a, b, c);

	print_dog(my_dog);

	free_dog(my_dog);

}
