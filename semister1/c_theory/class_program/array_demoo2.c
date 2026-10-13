//declaire a character of array initialize with your name
#include<stdio.h>
int main(){
     char name[13]="nihal";
     char namee[20]="  ";
    printf("enter the frist name:");
    fgets(name,sizeof(name),stdin);
    printf("name = :%s", name);
    printf("[%s]",name);
    printf("[%10s]",name);
    printf("[%-10s]",name);
    printf("[%.3s]",name);
    
    
}
