#include <stdio.h>
#include <inttypes.h>

#define BYTE uint8_t

void bin_print(BYTE i)
{
    // Number of bits in an integer.
    int j = (sizeof(BYTE) * 8);

    // temp variable
    int k;

    // Loop over the num of bits in i, left to right.
    for(j-- ; j >= 0; j--)
    {
        // pick out the J^th bit of i
        k = ((1 << j) & i) ? 1 : 0;
        // print k
        printf("%d", k);
    }
}

int main(int argc, char *argv[])
{
    BYTE b;
    FILE *f; 
    size_t nobytes;

    f = fopen(argv[1], "r");

    nobytes = fread(&b, 1, 1, f);

    while(nobytes)
    {
        bin_print(b);
        nobytes = fread(&b, 1, 1, f);     
    }// while

    fclose(f);
    printf("\n");

    return 0;
}