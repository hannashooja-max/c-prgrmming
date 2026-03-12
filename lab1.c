#include<stdio.h>
#include<math.h>
#define PI 3.14159
void diameter(int a1,int a2,int b1,int b2)
{
    float D;
    D=sqrt(pow(a2-a1,2)+pow(b2-b1,2));
    printf("The dianeter of the circle is %f\n",D);
}
void Area(int R)
{
    float A;
    A=PI*pow(R,2);
    printf("Area of circle is %f\n",A);
}
int circumference(int R)
{
    float P;
    P=2*PI*(float)R;
    printf("Perimeter/Circumference of circle is %f\n",P);
}
int main()
{
    int x1,x2,y1,y2,r;
    printf("enter points(x1,y1): ");
    scanf("%d %d",&x1,&y1);
    printf("enter points(x2,y2): ");
    scanf("%d %d",&x2,&y2);
    printf("enter the radius of circle ");
    scanf("%d",&r);
    diameter(x1,x2,y1,y2);
    Area(r);
    circumference(r);
    return 0;
}