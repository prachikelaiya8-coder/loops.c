#include <stdio.h>

int main()
{
    int num, first, last;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("%d" , last = num % 10);

    while(num >= 10)
    {
        printf("%d",num = num / 10);
    }

    printf("%d",first = num);

    printf("The sum of the first and last digit = %d", first + last);

    return 0;
}