#include <iostream>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int year,i,j;
    cin>>year;
    if((year%400==0) || (year%4==0&&year%100!=0)){
        
        for(i=0;i<15;i++){
            cout<<year+(4*i)<<" ";
        }
    }
    
    else{
        for(j=1;j<=6;j++){
            
            if(((year+j)%400==0) || ((year+j)%4==0 && (year+j)%100!=0)){
          
                for(i=0;i<15;i++){
            
                    cout<<(year+j)+(4*i)<<" ";
                }
            }
        }
    }
    return 0;
}