#include <stdio.h>

//tldr we're making a duplication table

int main()
{
    int rep,num;

    printf("Insert a number to be duplicated:");
    scanf("%d",&num);

    for(rep =0;rep <= 10; rep++)
        printf("%d x %d is:%d\n",rep, num, (rep*num));


    return 0;
}
