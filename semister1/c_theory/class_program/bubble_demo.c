#include<stdio.h>
int main(){
    int size;
    int n;
    
    printf("enter the size of an array");
    scanf("%d",&size);
    int a[size];

    for(int i=0;i<size;i++){
        printf("enter array element%d:",i+1);
        scanf("%d",&a[i]);
    }
    //bubble sort logic
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            
            if(a[j]>a[j+1]){
            
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
   
     //display element statment
    printf("array element are:"); 
    for(int i=1;i<=size;i++)
    {
        printf("%d\n",a[i]);
    }
        
    


    return 0;
}