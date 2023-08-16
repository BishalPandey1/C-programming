#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20] = "Hello";
    char s2[20] = "World";
    strcat(s1, s2);
    printf("Concatenated with strcat(): %s\n", s1);
    strcpy(s1, "Hello");
    int i = strlen(s1); 
    int j = 0;
    while (s2[j] != '\0') 
    {
        s1[i] = s2[j]; 
        i++; 
        j++; 
    }
    s1[i] = '\0';
    printf("Concatenated without strcat(): %s\n", s1);
    return 0;
}
