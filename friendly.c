#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Welcome!\nMay I have your name? ");
    string name = GetString();

    printf("It's so nice to meet you %s!\nI hope you have a most wonderful day!\n", name);
}
