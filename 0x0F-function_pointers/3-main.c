#include "3-calc.h"
/**
 * main - arithmetic operation between to integers
 *
 * @argc: number on arguments
 * @argv: arguments
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error98\n");
		exit(98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (argv[3][0] == '0'))
	{
		printf("Error100\n");
		exit(100);
	}

	if (argv[2][1] == '\0')
	{
		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	}
	else
	{
		printf("Error99\n");
		exit(99);
	}
	return (0);

}
