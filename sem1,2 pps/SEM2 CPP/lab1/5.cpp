#include <iostream>

#include<cstring>

using namespace std;

int main() {

    int num_of_tc,key,i=-1,j,k;

    cin>>num_of_tc>>key;

    char arr[num_of_tc][10];

    for(i=0;i<num_of_tc;i++)

        cin>>arr[i];

    for(i=0;i<num_of_tc;i++)

    {

        for(j=0;j<(int)strlen(arr[i]);j++)

        {

            

            for(k=0;k<key;k++)

            {

                if(arr[i][j]=='Z' || arr[i][j]=='z')

                    arr[i][j]-=25;

                else if(arr[i][j]=='9')

                    arr[i][j]='0';

                else

                    arr[i][j]++;

            }         

        } 

        cout<<arr[i]<<endl;

    }

    return 0;

}