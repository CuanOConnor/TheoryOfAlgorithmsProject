#include <stdio.h>

void bin_print(unsigned int i)
{
    // Number of bits in an integer.
    int j = (sizeof(unsigned int) * 8);

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

// standard main signature
int main(int argc, char *argv[]) 
{
    // set i to a literal value.
    unsigned int i = 0x0f0f0f0f; // 241;

    // What we're printing
    printf("Original:\t");
    // print i in binary
    bin_print(i);
    // end line
    printf("\t%x\t%u\n\n",i, i);

    // 32
    int j = sizeof(unsigned int) * 8;

    for (j--; j >= 0; j--)
    {
        // 1 shifted left j times.
        bin_print(1 << j); printf("\n");
        // i.
        bin_print(i); printf("\n");
        // (1 shifted left j times) bitwise logical and i.
        printf("-------------------------------- &\n");
        bin_print(((1 << j) & i)); printf("\n\n");
    }
    
    // Everything is ok
    return 0;
}
