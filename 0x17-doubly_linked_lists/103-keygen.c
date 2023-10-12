#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    unsigned int i, accumulator;
    size_t username_length, adder;
    char *character_set = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
    char key[7] = "      ";

    if (argc != 2)
    {
        printf("Correct usage: ./keygen5 username\n");
        return 1;
    }

    username_length = strlen(argv[1]);
    key[0] = character_set[(username_length ^ 59) & 63];

    for (i = 0, adder = 0; i < username_length; i++)
        adder += argv[1][i];
    key[1] = character_set[(adder ^ 79) & 63];

    for (i = 0, accumulator = 1; i < username_length; i++)
        accumulator *= argv[1][i];
    key[2] = character_set[(accumulator ^ 85) & 63];

    for (accumulator = argv[1][0], i = 0; i < username_length; i++)
    {
        if ((char)accumulator <= argv[1][i])
            accumulator = argv[1][i];
    }
    srand(accumulator ^ 14);
    key[3] = character_set[rand() & 63];

    for (accumulator = 0, i = 0; i < username_length; i++)
        accumulator += argv[1][i] * argv[1][i];
    key[4] = character_set[(accumulator ^ 239) & 63];

    for (accumulator = 0, i = 0; (char)i < argv[1][0]; i++)
        accumulator = rand();
    key[5] = character_set[(accumulator ^ 229) & 63];

    printf("%s\n", key);
    return 0;
}

