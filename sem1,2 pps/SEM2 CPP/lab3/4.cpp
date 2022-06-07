#include <iostream>
using namespace std;

int main() {
    int n,no,ans=0,i;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cin>>no;
        ans^=no;
    }
   	cout<<ans;
    return 0;
}