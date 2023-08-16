#include<stdio.h>
int main(){
    int number;
    printf("enter the number");
    scanf("%d",&number);
      
      if(number >=0){
        printf("positive number \n");
if (number % 2 == 0) {
    printf("even \n");
}

      }
      else{
        printf("negative number \n");
      }
return 0;
}
