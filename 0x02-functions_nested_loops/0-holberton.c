/**
 * main - This program will print using _putchar function
 *
 * @c: The character to print
 * Description: prints Holberton using the function
 * Return: 0
 *
 */
int _putchar(char c);
char h[] = "Holberton";
int main(void)
{
int a;
for (a = 0; a <= 8 ; a++)
{
_putchar(h[a]);
}
_putchar('\n');
return (0);
}
