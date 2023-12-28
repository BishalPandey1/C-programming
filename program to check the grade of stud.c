#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);
    if(marks >= 90){
        printf("you have get A+ \n");
        printf("you are axcelent student \n");
    }
    else if (marks < 90 && marks >= 75 ){
        printf("you have get A \n");
        printf("you are good student \n");
    }
    else if (marks >= 50 && marks <= 74){
    printf("you have get B");
    printf("you are average student \n"); 
    }
    else{
        printf("you are fail \n");
    }
     printf("thank you  \n");
    return 0;
}
