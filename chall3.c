#include <stdio.h>

//tldr checking if a number is a prime or not

int main()
{
    int num,i,count = 0;

    printf("Enter a value:");
    scanf("%d",&num);

    for (i=1; i<=num; i++){
        if (num%i == 0){
            count++;
        }

    }
        if (count == 2)
        printf("%d is a prime number.", num);
        else
        printf("%d is not a prime number.",num);

    return 0;

    }


