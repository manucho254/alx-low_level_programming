#include <stdio.h>

/**
 * main - Entry point function
 * Return: always 0 if success
 */

int main(void)
{
    int x;
    char arr[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int len = 10;

    for (x = 0; x < len; x++)
    {
        arr[x], arr[len-1] = arr[len-1], arr[x];
        len--;
    }

    printf("%s", arr);

    return (0);
}
