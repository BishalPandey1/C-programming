#include<stdio.h >
int sum(int a, int b);
 int main() {

    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);

int s = sum(a,b);
printf("sum is :\n ",s);
return 0;
}

int sum(int a, int b){
    return a + b;
}

