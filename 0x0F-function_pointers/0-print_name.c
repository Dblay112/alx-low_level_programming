#include "function_pointers.h"
#include <stdio.h>

/**
  * print_name - Prints a name
  * @name: name to prints
  * @f: Pointer to function
  *
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
