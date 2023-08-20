#include <unistd.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints a specific message to the standard error.
 * The message is "and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * followed by a new line.
 *
 * Return: Always 1 (error code)
 */
int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, message, 59);
    return (1);
}

