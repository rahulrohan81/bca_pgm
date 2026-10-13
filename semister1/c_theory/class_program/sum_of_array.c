#include<stdio.h>
int get_array_sum(int number[]){
int sum;
for(int i=0;i<5;i++){
sum=sum + number[i];

}
return sum;

}





int main(){
    int mynumber[5];
    for (int i=0;i<5;i++){
    printf("enter the %d number",i+1);
    scanf("%d",&mynumber[i]);
    }
  int total=get_array_sum(mynumber);
    printf("the sum is %d",total);
}