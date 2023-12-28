#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
   FILE *fp;
    fp=fopen("bicte.txt","w");
if(fp==NULL)
    {
printf("file cant opened");
exit(1);
    }
    printf("enter a number");
    scanf("%d,&a");
    putw(a,fp);
    fclose(fp);
     return 0;
}