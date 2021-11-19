#include <stdio.h>

//reversing a number using while loop

int main()
{
    int num,r;
    int sum=0;
    printf("Enter a value to be reverted:\n");
    scanf("%d",&num);

    while(num != 0){
    r = num % 10;
    sum = sum * 10 + r;
    num = num/10;
    }
    printf("%d",sum);

    return 0;
}
