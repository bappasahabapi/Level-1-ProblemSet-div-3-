
#include<stdio.h>
int main()
{
     int i,n,j,counter;
     scanf("%d\n",&n);
     int ar[n];
    
     for(i=0;i<n;i++)
     {
           scanf("%d",&ar[i]);
     } 
     for(i=0;i<n;i++)
     {

          
           counter=0;
           if (ar[i] == 0 || ar[i] == 1)
           {
                 counter = 1;
                 printf("No\n");
           }
           for(j=2;j<ar[i];j++)
           {
                
                 if(ar[i]%j==0)
                 {
                       counter=1;
                       printf("No\n");
                       break;
                 }
           }
           if(counter==0)
           {
                 printf("Yes\n");
           }
     }
   
}