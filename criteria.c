#include<stdio.h>

int main()
{
    int num, count = 0;

    printf("enter any number: ");
    scanf("%d", &num);

    do{
        printf("%d", num =num/10);
        count++;
    }
    while(num !=0);

    printf("\n total number of digits= %d",count);

    return 0;
}