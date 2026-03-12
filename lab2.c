#include<stdio.h>
int Marks(int s1,int s2,int s3)
{
    if(s1==s2&&s2==s3)
    printf("All the subject ,the marks scored are same\n");
    if(s1>s2)
    {
        if(s3>s1)
        {
            if(s3>s2)
            {
                if(s3==s1)
                printf("The marks for subject 1 and subject3 are equal ad hence are the maximum marks scored\n");
            } 
        printf("Subject3 has the maximum marks scored\n");
        }
        else
        printf("Subject1 has the maximum marks score\n");
    }
    else if(s2>=s3)
    {
        if(s2>s3)
        {
            if(s2==s3)
            printf("The marks obtained for subject2 and subject3 are same and are the maximum marks obtained\n");
            else
            printf("Subject2 has the maximum marks obtained\n");
        }
    }
}
void smallest(int m1,int m2,int m3)
{
    if(m1>m2&&m2<m3)
    printf("Subjet2 is the least marks scored\n");
    else if(m3<m1&&m3<m2)
    printf("Subject3 has the least marks scored\n");
    else
    printf("Subject1 has the least marks scored\n");
}
int Average(int x1,int x2,int x3)
{
    float Avg;
    Avg=(x1+x2+x3)/3;
    printf("Average of the marks is %f\n",Avg);
    int V=(Avg>=50)?1:0;
    printf("V=%d",V);
}
int main()
{
    int sub1,sub2,sub3;
    printf("enter marks scored for sub1: ");
    scanf("%d",&sub1);
    printf("enter marks scored for sub2: ");
    scanf("%d",&sub2);
    printf("enter marks scored for sub3: ");
    scanf("%d",&sub3);
    Marks(sub1,sub2,sub3);
    smallest(sub1,sub2,sub3);
    Average(sub1,sub2,sub3);
    return 0;
}    
 
