#include<stdio.h>
#include<string.h>
int main()
{
    char username[100],password[100],input[100],firstname[20],last[20],copied[100];
    int l,ch;
    printf("enter password");
    scanf("%s",password);
    printf("enter username");
    scanf(" %[^\n]",username);
    printf("%s\n%s\n",password,username);
    do
    {
        printf("\nMenu\n1.lenght\n2.copy\n3.compare\n4.concatenate\n5.exit\nenter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(strlen(username)<=10)
            printf("the username is no valid ");
            else
            printf("the username is valid");
             break;
            case 2:strcpy(copied,username);
            printf("the user name is successfully copied %s\n",copied);
             break;
            case 3:printf("enter your password");
            scanf("%s",input);
            if(strcmp(input,password)==0)
            printf("the password is correct");
            else
            printf("the password is incorrect");
              break;
            case 4:printf("enter firstname");
            scanf("%s",firstname);
            printf("enter last name");
            scanf("%s",last);
            strcat(firstname,last);
            printf("the full name of user is %s",firstname);
             break;
            default:if(ch!=5)
            printf("\ninvalid choice . pls enter a valid choice");
        }
    }
    while(ch!=5);
    printf("exit");
    return 0;
}
