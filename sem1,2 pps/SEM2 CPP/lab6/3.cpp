#include<iostream>
#include<string>
#include <cstring>

using namespace std;

int count(string &str,string &str1)
{
    int sl=str.length();
    int s1l=str1.length(),i,j,count=0,count1=0;
    
    for(i=0;i<sl-s1l;i++)
    {
        for(j=0;j<s1l;j++)
        {
            if(str1[j]==str[i+j])
                count++;
        }
        if(count==s1l)
            count1++;
        count=0;
    }
    
    return count1;
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string str,str1,temp;
    
    int num;
    
    getline(cin,str);
    cin>>num;
    cin>>str1;
    temp=str;
    
    for(int i=0;i<num;i++)
    {
        str.append(temp);
    }
    //cout<<str;
    cout<<count(str,str1);
    return 0;
}