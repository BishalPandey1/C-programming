#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%s",ch); 

if(ch >= 'A' && ch <= 'Z'){
    printf(" upper case");
}
else if (ch >= 'a' && ch <='z') {
    printf(" lower case");
}
else{
    printf("they are not english \n");
}
return 0;
}