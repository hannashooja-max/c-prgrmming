#include<stdio.h>
#include<string.h>
int main()
{
   char s1[100]="James";
   char s2[100]="Bond";
   char s[100];
   int i,m,n;
   m=strlen(s1);
   n=strlen(s2);
   printf("%d %d\n",m,n);
  for(i=0;i<m;i++)
  {
      s[i]=s1[i];
  }
  printf("%d\n",i);
  s[i]=' ';
  for(i=0;i<n;i++)
  {
      s[i+1+m]=s2[i];
  }
  printf("%d\n",i);
   printf("merged string is : %s",s);
  
    return 0;
}
