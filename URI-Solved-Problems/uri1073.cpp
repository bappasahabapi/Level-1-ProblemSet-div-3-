#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   // if(n>5 && n<2000)

        for(int i =2; i<=n;i+=2)
            cout<<i<<"^"<<"2 = "<<i*i<<endl;

}
