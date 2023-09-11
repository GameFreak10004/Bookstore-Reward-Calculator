#include<stdio.h>
int main()
{
    int points,book;
    printf("Enter The Numbers of books Purchased:-");
    scanf("\n%d",&book);
    if(book==1)
    points=5;
    if(book==2)
    points=15;
    if(book==3)
    points=30;
    if(book>=4)
    points=60;
    else
    points=0;
    printf("Reward Points Earned Are :%d",points);
}