#include <stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int x;
    printf("enter a string");
    gets(a);
    printf("enter another string");
    gets(b);
    x=strcmp(a,b);
    printf("%d",x);
    return 0;
}