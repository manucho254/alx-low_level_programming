#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	dog_t my_dog;

	init_dog(&my_dog, "Poppy", 3.5, NULL);
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	printf("My name is %s, and I am %.1f :) - Woof! and i am the owner %s \n", my_dog.name, my_dog.age, my_dog.owner);

	return (0);
}
