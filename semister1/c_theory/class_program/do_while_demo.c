#include<stdio.h>

int main(){
    int firstnumber,secondnumber,choice;
    while(choice!=5)
    {
    printf("----welcome to my calculator-------\n");
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("enter your choice:");
    scanf("%d",&choice);
        if(choice == 1){
            //addition
            printf("enter  the first number :");
            scanf("%d",&firstnumber);
            printf("enter the second number :");
            scanf("%d",&secondnumber);
            int sum=firstnumber + secondnumber;
            printf("the sum is : %d",sum);
        }
        if(choice == 2){
            //subtraction
            printf("enter  the first number :");
            scanf("%d",&firstnumber);
            printf("enter the second number :");
            scanf("%d",&secondnumber);
            int difference=firstnumber - secondnumber;
            printf("the difference is : %d",difference);
        }
        if(choice == 3){
            //multiplication
            printf("enter  the first number :");        
            scanf("%d",&firstnumber);
            printf("enter the second number :");
            scanf("%d",&secondnumber);
            int multiplication=firstnumber*secondnumber;
            printf("the multiplication is : %d",multiplication);
        }
        if(choice == 4){
            //division
            printf("enter  the first number :");        
            scanf("%d",&firstnumber);
            printf("enter the second number :");
            scanf("%d",&secondnumber);
            int division=firstnumber/secondnumber;
            printf("the division is : %d",division);
        }
        else{
            printf("Exit\n");
        }
       return 0;
    }
}