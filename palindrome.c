#include <stdio.h>
#include <string.h>
int main() 
{    
    char org[100],rev[100];
    int n,result=0,q,rem,p,choice;
    printf("enter 1 for integer type n 2 for character type ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("ENTER A NUMBER: ");
        scanf("%d",&n);
        q=n;
        while(q!=0)
        {   rem=q%10;
            result=result*10+rem;
            q=q/10;
        } 
        if(result==n )   printf("PALINDROME");
        else  printf("NO! IT'S NOT PALINDROME");
    }

    else if(choice==2)
    {
        printf("Enter a string ");
        scanf("%s",&org);
        strcpy(rev,org);
        strrev(org);
        if (strcmp(org,rev)==0)
           { printf("PALINDROME");}
        else { printf("NO! IT'S NOT PALINDROME"); }  
    }

    else
    {
        printf("invalid");
    }   
  return 0;   
}