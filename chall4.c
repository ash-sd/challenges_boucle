#include <stdio.h>

//tldr we need to make a program that calculates the sum of given nums and when pressing 0 the program should be terminated and then calculates the sum of everything and give a max num

int main()
{
    int num = 0;
    int sum = 0;

    for(num=0;num<=100;num+=10){
        printf("%d\n",num);
        sum +=num;
    }
    printf("The sum is:%d",sum);

    return 0;
}
