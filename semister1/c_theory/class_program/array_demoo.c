#include<stdio.h>
int main(){
    int numbers[5];
    int newdata,index;
    for (int i=0;i<4;i++){
        printf("input %d array element:",i+1);
        scanf("%d",&numbers[i]);
    
    }
    printf("enter the new element:");
    scanf("%d", &newdata);
    printf("enter index value:");
    scanf("%d",&index);
    //insertion process to insert 'newdata' and 'index'
    numbers[4]=numbers[3];
    numbers[3]=numbers[2];
    numbers[2]=newdata;

    for (int i=0;i<4;i++)
    printf("%d",numbers[i]);
    scanf
    

return 0;
}