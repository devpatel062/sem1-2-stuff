#include <iostream>



using namespace std;

int main() 
{
    int no_of_elements,i,k,count=0;

    cin>>no_of_elements;
    int array[no_of_elements];
    for(i=0;i<no_of_elements;i++)
        cin>>array[i];
    
    for(i=0;i<no_of_elements;i++)
    {
        for(k=2;k<array[i]/k+1;k++)
        {
            if((array[i]%k) == 0)
            {
                count++;
                break;
            }
        }
        if(count==0 && array[i]!=1)
            cout<<array[i]<<" ";
        count=0;
    }
    return 0;
}
    