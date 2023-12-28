#include <stdio.h>
int main()
{
    FILE *fp = NULL;
    char buffer[100];
    fp = fopen("test.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening the file.\n");
        return -1;
    }
    printf("The text in the file is:\n");
    while (fgets(buffer, 100, fp) != NULL)
    {
        printf("%s", buffer);
    }
    printf("\n");
    fclose(fp);
    return 0;
}