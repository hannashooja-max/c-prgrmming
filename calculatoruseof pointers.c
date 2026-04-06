#include<stdio.h>
 int main()
 {
    int a,b,sum,diff,pdc,q,*p1,*p2,ch;
    printf("enter the number you wish:");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    printf("---MENU---\n1.Add\n2.Subtract\n3.Multiply\n4.Quotient\n5.Exit");
    printf("enter your choice:");
    scanf("%d",&ch);
    do
    {
    switch(ch)
    {
        case 1:sum=*p1+*p2;
        printf("sum =%d\n",sum);
        break;
        case 2:diff=*p1-*p2;
        printf("diff =%d\n",diff);
        break;
        case 3:pdc=(*p1) * (*p2);
        printf("product =%d\n",pdc);
        break;
        case 4:q=*p1/ (*p2);
        printf("Quotient=%d\n",q);
        break;
        default : printf("invalid choice");
    }
    printf("would you like to try again\nenter your choice:");
    scanf("%d",&ch);
    }
    while(ch!=5);
    printf("Programme terminated\n");
    return 0;
 }
