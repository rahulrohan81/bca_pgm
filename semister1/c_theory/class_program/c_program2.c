#include<stdio.h>
int rollno,sum;
float subject1,subject2,subject3,subject4,subject5;
void average,total;
void getsstudentdata(){
    printf("enter rollnumber");
    scanf("%dd",&rollno);
    printf("enter the sum");
    scanf("%d",&sum);
    printf("enter the subject 1");
    scanf("%d",&subject1);
    printf("enter the subject2");
    scanf("%d",&subject2);
    printf("enter the subject3");
    scanf("%d",&subject3);
    printf("enter the subject4");
    scanf("%d",subject4);
    printf("enter the subject5");
    scanf("%d",&subject5);
    print("enter the average");
    scanf("%d",&average);

}

void gettotal(){
sum = subject1+subject2+subject3+subject4+subject5;
}
int main(){
    getstudentdata();
    gettotal();
    gataverage();
    getgpa();
    displaystudentdetails();
}
