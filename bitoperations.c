#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int i = 241;

    printf("Dec: %d\n", i);
    printf("Hex: %x\n", i);

    printf("Size of an i: %ld\n", sizeof(i));
    printf("Size of an int: %ld\n", sizeof(int));
    printf("Size of char: %ld\n", sizeof(char));

    char c = 41;

    printf("c in char is: %c\n", c);
    printf("c in int is: %d\n", c);

    int j = 1000000000;

    printf("j in int is: %d\n", j);
    printf("j in char is: %c\n", j);
    
    for (int i = 0; i < 10; i++)
    {
       printf("1");
    }
    printf("\n");

    return 0;
}
