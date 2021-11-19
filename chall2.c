#include <stdio.h>

//tldr star pyramid

int main()

{
    int ttl, line, space, symbol;

    printf("Insert a number of lines:\n");
    scanf("%d",&ttl);

    for (line = 1; line <= ttl; line++){
        for(space = 1; space <= (ttl-line);space++){
            printf(" ");
        }
        for (symbol = 1; symbol <= (2*line)-1;symbol++){
            printf("*");
        }

        printf("\n");
    }



    return 0;
}
