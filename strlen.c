#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int l;

    printf("Enter the string: ");
    
    scanf("%[^\n]", name);

    l = strlen(name);
    printf("The length of the string is %d\n", l);

    return 0;
}
