#include<stdio.h>
int main()
{
     for(int i=5; i<=50; i++){
        if(i %2 ==1){
            printf("%d\n",i);
            continue;
        }
        
    }
    return 0;
}