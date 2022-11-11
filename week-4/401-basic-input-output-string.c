#include<stdio.h>
int main()
{
    char name[10];
    char name1[15]="bappa saha";
    name1[4]='i';
    char name2[]="This is bappa";
    scanf("%s",name);
    
    printf("My name is: %s",name);
    printf("My name is: %s",name1);
    
    return 0;
}