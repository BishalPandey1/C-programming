#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("cloz.txt","w");
    if(fp==NULL)
    {
        printf("failed");
        exit(1);
    }
    fprint("%s","sukuna mulripl campus");
    fclose(fp);
}