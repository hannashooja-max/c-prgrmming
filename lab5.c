#include <stdio.h>
#include <string.h>
struct Student 
{
    int roll;
    char name[50];
    float totalMarks; 
};
void readData(struct Student s[20], int n) 
{
    int i;
    for (i = 0; i < n; i++) 
    {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name); 
        printf("Enter Total Marks: ");
        scanf("%f", &s[i].totalMarks);
    }
}
void printList(struct Student s[20], int n) 
{
    int i;
    printf("\nRank\tRoll\tName\t\tTotal Marks\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d\t%d\t%s\t%f\n", i + 1, s[i].roll, s[i].name, s[i].totalMarks);
    }
}
int main() 
{
    int n, i, j;
    struct Student s[20];
    int tempRoll;
    char tempName[50];
    float tempTotal;

    printf("Enter number of students: ");
    scanf("%d", &n);
    readData(s, n);
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - 1; j++) 
        {
            if (s[j].totalMarks < s[j + 1].totalMarks) 
            {
                
                // Swap the Total Marks
                tempTotal = s[j].totalMarks;
                s[j].totalMarks = s[j + 1].totalMarks;
                s[j + 1].totalMarks = tempTotal;

                // Swap the Roll Number
                tempRoll = s[j].roll;
                s[j].roll = s[j + 1].roll;
                s[j + 1].roll = tempRoll;

                // Swap the Name (Must use strcpy for strings!)
                strcpy(tempName, s[j].name);
                strcpy(s[j].name, s[j + 1].name);
                strcpy(s[j + 1].name, tempName);
            }
        }
    }
    printf("\nFINAL RANK LIST\n");
    printList(s, n);
    return 0;
}
