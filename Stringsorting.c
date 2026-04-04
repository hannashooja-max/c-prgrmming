#include<stdio.h>
#include<string.h>
int main()
{
    char string[5][100]= {"Tokyo","Paris","Mumbai","Armsterdam","Monaco"};
    int i,j;
    char temp[100];
 
    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-1-i;j++)
        {
            if(strcmp(string[j],string[j+1])>0)
            {
                strcpy(temp, string[j]);
                strcpy(string[j], string[j + 1]);
                strcpy(string[j + 1], temp);
            }
        }
    }
    printf("SORTED STRIN = \n");
    for (i = 0; i < 5; i++) 
    {
        printf("%s\n", string[i]);
    }
    return 0;
}
