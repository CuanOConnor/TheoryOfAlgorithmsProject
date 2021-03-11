#include <stdio.h>
#include <inttypes.h>

#define W 32
#define WORD uint32_t
#define PF PRIX32
#define BYTE uint8_t

union Block
{
    BYTE bytes[64];
    WORD words[16];
};

int main(int argc, char *argv[])
{
    int i; // iterator
    union Block B; // the current block
    uint64_t nobits = 0; // total number of bits read
    FILE *f; // File pointer for reading
    f = fopen(argv[1], "r"); // open file from command line
    size_t nobytes; // num of bytes read

    // try to read bytes
    nobytes = fread(B.bytes, 1, 64, f);
    printf("Read %d bytes.\n", nobytes);
    // update number of bits read
    nobits = nobits + (8*nobytes);
    // print the 16 32-bit words
    for (i = 0; i < 16; i++)
    {
        printf("%08" PF " ", B.words[i]);
        if((i + 1) % 8 == 0)
        {
            printf("\n");
        }
    }// for
    
    while(!feof(f))
    {
        nobytes = fread(&B.bytes, 1, 64, f);  
        printf("Read %d bytes.\n", nobytes);
        nobits = nobits + (8*nobytes);   

        for (i = 0; i < 16; i++)
        {
            printf("%08" PF " ", B.words[i]);
            if((i + 1) % 8 == 0)
            {
                printf("\n");
            }
        }// for
    }// while

    // close file
    fclose(f);
    // print total number of bits read
    printf("Total bits read: %d.\n", nobits);

    return 0;
}