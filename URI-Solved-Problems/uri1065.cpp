#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    for(int i = 0; i<5;i++)
    {
        cin>>n;
        if(n%2==0)
          {
           c++;
          }
    }
    cout<<c<<" valores pares"<<endl;
}
