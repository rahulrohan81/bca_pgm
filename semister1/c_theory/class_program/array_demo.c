//pgm to store and display 5 subject mark
//for student
#include<stdio.h>
int main(){
    int my_mark[5];
    int sub_marks[5]; //declares an array 'sub_mark'
        //with size 5 of 'int' type
        //storing data/array initializzation - array_na,me[index]=data/value
        sub_marks[0]=80;   //stores '80' in an array position whose index is 
        sub_marks[1]=78;
        sub_marks[2]=68;
        sub_marks[3]=58;
        sub_marks[4]=88; //static array initialization
        //fetch first array element from 'sub_mark
    printf("first subject mark : %d\n",sub_marks[0]);///will fetch first array element from 'sub_mark'
    printf("second subject mark: %d\n",sub_marks[1]);
    printf("third subject mark : %d\n",sub_marks[2]);
    printf("fourth subject mark : %d\n",sub_marks[3]);
    printf("fifth subject mark : %d",sub_marks[4]);

        for(int i=0;i<5;i++){
        printf("enter the first subject mark:[int data]");
        scanf("%d",my_mark[0]);
    }

    printf("enter the first subject mark:[int data]");
    scanf("%d",&my_mark[0]);
    printf("enter the second subject mark:[int data]");
    scanf("%d",&my_mark[1]);
    printf("enter the third subject mark:[int data]");
    scanf("%d",&my_mark[2]);
    printf("enter the fourth subject mark:[int data]");
    scanf("%d",&my_mark[3]);
    printf("enter the fifth subject mark:[int data]");
    scanf("%d",&my_mark[4]);
     


    printf("first sub mark : %d\n",sub_marks[0]);
    printf("second sub mark : %d\n",sub_marks[1]);
    printf("third sub mark : %d\n",sub_marks[2]);
    printf("fourth sub mark : %d\n",sub_marks[3]);
    printf("five sub mark : %d",sub_marks[4]);


    
    
}