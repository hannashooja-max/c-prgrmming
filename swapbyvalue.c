#include<stdio.h>
int swap(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("Values after swapping x=%d,y=%d\n",x,y);
}
int main()
{
    int x,y;
    printf("enter values for x and y: ");
    scanf("%d %d",&x,&y);
    swap(x,y);
    printf("Values of x=%d,y=%d",x,y);
    return 0;
}
