#include<stdio.h>
struct books
{
    char title[100];
    char author[100];
    int pages;
    float price;
};
int main()
{
    struct books b1;
    printf("enter title for book 1; ");
    scanf("%[^\n]",b1.title);
    printf("enter author for book 1; ");
    scanf(" %[^\n]",b1.author);
    printf("enter pages in the  book 1; ");
    scanf("%d",&b1.pages);
    printf("enter price for book 1; ");
    scanf("%f",&b1.price);
    printf("-----DISPLAYING BOOK1-----\n");
    printf("Title : %s\nAuthor : %s\nPages : %d\nPrice : %f\n",b1.title,b1.author,b1.pages,b1.price);
    
   struct books b2 = {"Three ways to survis a ruined world","TLS123",18650,1200};
    struct books b3 = b1;
    printf("-----DISPLAYING BOOK2-----\n");
    printf("Title : %s\nAuthor : %s\nPages : %d\nPrice : %f\n",b2.title,b2.author,b2.pages,b2.price);
    printf("-----DISPLAYING BOOK3-----\n");
    printf("Title : %s\nAuthor : %s\nPages : %d\nPrice : %f\n",b3.title,b3.author,b3.pages,b3.price);
     return 0;
}
