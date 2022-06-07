#include <iostream>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int number,num,count=0,i;
    cin>>number;
    num=number;
    
    while(num!=0){
        num=num/10;
        count++;
    }
    int arr[count];
    
    for(i=0;i<count;i++){
        
        arr[i]=number%10;
        
        number=number/10;
    }
    
    for(i=0;i<count;i++){
       
        if(arr[0]==0){
            for(i=0;arr[i]==0;i++){
                continue;
            }
        }
        cout<<arr[i];
    }
    return 0;
}