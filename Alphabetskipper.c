#include <stdio.h>

int main()
{
    char ch = 'a';

    do
    {
        printf("%c ", ch);
        ch++;
        ch++;
        ch++;
        ch++;
    }
    while(ch <= 'z');

    return 0;
}