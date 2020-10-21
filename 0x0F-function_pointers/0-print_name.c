#include "function_pointers.h"

/**
 * print_name - writes the character c to stdout
 *
 * @name: Dog's name
 * @f: Point function
 *
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
