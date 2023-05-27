#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    }


    while (height < 1 || height > 8);


    for (int i = 0; i < height; i++)
    {

        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // Print blocks on the left
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // Print space between the two halves of the pyramid
        printf("  ");

        // Print blocks on the right
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
