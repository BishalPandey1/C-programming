#include<stdio.h>
void main()
{
    int nep,eng,sci,math,com,total;
    float per;
    printf("enter the marks of nepali");
    scanf("%d",&nep);
    printf("enter the marks of english");
    scanf("%d",&eng);
    printf("enter the marks of science");
    scanf("%d",&sci);
    printf("enter the marks of math");
    scanf("%d",&math);
    printf("enter the marks of computer");
    scanf("%d",&com);
    total = nep + eng + sci + math + com;
    printf("The the total marks is =%d\n",total);
    per = total/5;
   printf("the percentage=total\5");
}
