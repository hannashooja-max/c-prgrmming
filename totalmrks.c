#include<stdio.h>
struct Marks
{
    int total;
    int subject[3];
};
struct Marks student[3];
int main()
{
    int i,m,sum=0;
    for(i=0;i<3;i++)
    {
        printf("enter marks student%d\n",i+1);
        for(m=0;m<3;m++)
       {
            printf("enter Marks for subject%d: ",m+1);
            scanf("%d",&student[i].subject[m]);
       }
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        printf(" marks student%d\n",i+1);
        sum=0;
        for(m=0;m<3;m++)
       {
            printf("Marks for subject%d: ",m+1);
            printf("%d\n",student[i].subject[m]);
            sum+=student[i].subject[m];
       }
       printf("Total mark for student%d:%d\n\n",i+1,sum);
    }
    printf("\n");
   for(i=0;i<3;i++)
    {
        student[i].total=0;
        for(m=0;m<3;m++)
       {
            student[i].total+=student[m].subject[i];
       }
       printf("Total of subject%d:%d\n",i+1,student[i].total);
    }
    return 0;
}
