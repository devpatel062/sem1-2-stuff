#include <iostream>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long number,exp;
    int count=0,j=100,arr[j],arrnum=0,i;
    
    cin>>number;
    
    exp=number;
   
    while(exp!=0){
        exp=exp/10;
        count++;
    }
    
    for(i=0;number>=2;i++){
            
            arr[i]=number%2;
            arrnum++;
            number=number/2;
    
    }
    cout<<number;
    for(i=arrnum-1;i>=0;i--){
        cout<<arr[i];
    }
    return 0;
}