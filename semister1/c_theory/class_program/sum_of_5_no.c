#include<stdio.h>
int main(){
    int number;
    int sum=0;


    printf("enter value number");
    scanf("&d",&number);

if(number>5){
    for(int i=5;i<=number;i++){
        sum = sum + i;
    }
    printf("the sum of number from 5 to %d is %d",number,sum);
}
    else{
    printf("error");
    }
     return 0;
}

    


