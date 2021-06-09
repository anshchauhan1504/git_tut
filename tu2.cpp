#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        
        int space=1;
        while(space<=n-i)
        {
            cout<<" ";
            space++;
        }
        int j=1;
        
        int x = i+j-1;
        while(j<=i)
        {
            cout<<x;
            j++;
        }
        int k=i-1;
        int a = 2*i-2;
        while(k>=1)
        {
            cout<<a;
            k--;
            a--;
        }
        cout<<endl;
        i++;
    }
    
}
