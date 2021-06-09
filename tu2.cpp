#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        int value;
        value=n-i+1;
        while(j<=n-i+1)
        {
            cout<<value-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    



}