#include <unistd.h>

/**
 *_putchar - writes the char c to stndrd output
 *
 * Return: Always 1 (Success)
 */
int _putchar(char c)
{
        return (write(1, &c, 1));


}
