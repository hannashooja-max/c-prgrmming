#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s[], int n);
void sortByName(struct Student s[], int n);
void sortByRoll(struct Student s[], int n);
void sortByMarks(struct Student s[], int n);

int main() {
    struct Student s[100];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    display(s, n);
    sortByName(s, n);
    sortByRoll(s, n);
    sortByMarks(s, n);

    return 0;
}

void display(struct Student s[], int n) {
    printf("\nRoll Number\tName\t\tMarks\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%-15s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
}

void sortByName(struct Student s[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(s[j].name, s[j + 1].name) > 0) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("\nSorted by Name:\n");
    display(s, n);
}

void sortByRoll(struct Student s[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j].roll > s[j + 1].roll) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("\nSorted by Roll Number:\n");
    display(s, n);
}

void sortByMarks(struct Student s[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j].marks < s[j + 1].marks) { // Descending for Rank
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("\nSorted by Marks (Rank-wise):\n");
    display(s, n);
}
