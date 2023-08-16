#include <stdio.h>
int main()
{
    
    int i;
    float f;
    double d;
    char c;
    printf("Size of int: %ld bytes\n", sizeof(i));
    printf("Size of float: %ld bytes\n", sizeof(f));
    printf("Size of double: %ld bytes\n", sizeof(d));
    printf("Size of char: %ld bytes\n", sizeof(c));
    return 0;
}