#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int count=0;
    long int number;
    cin>>number;
    for( ;number!=1; )
    {
        
        if(number%2==0)
        {
            number=number/2;
            count++;
        }
    
        else
        {
            if(number==3 || number%4==1)
            {
                number=number-1;
                count++;
            }
            else
            {
                number=number+1;
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}