#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int a;
    do
    {
        a = get_int("Height:"); //Here user enter height between 1 to 8
    }

    while (a < 1
           || a > 8); // his condition is true if user enter wright number non or then program repeatedly ask user to re-enter there number

    for (int b = 0; b < a; b++)

    {
        for (int c = a - b; c > 1; c--)
        {
            printf(" ");
        }
        for (int d = 0; d <= b; d++)
        {

            printf("#"); //here to print correct amount of '#'
        }
        printf("\n");
    }
}