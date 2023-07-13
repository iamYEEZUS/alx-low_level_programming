#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or 98 on error.
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;

    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
    {
        printf("Error\n");
        return 98;
    }

    result = mul(num1, num2);

    printf("%d\n", result);

    return 0;
}

/**
 * is_positive_number - Checks if a string is a positive number.
 * @str: The string to check.
 *
 * Return: 1 if the string is a positive number, 0 otherwise.
 */
int is_positive_number(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] < '0' || str[i] > '9')
            return 0;
    }

    return 1;
}

/**
 * @mul: Multiplies two numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The product of the two numbers.
 */
int mul(int num1, int num2)
{
    return num1 * num2;
}
