#include<iostream>
#include<string>

using namespace std;

void calc(string &str,string &str1)
{
    int sl=str.length();
    int s1l=str1.length(),j,i,count=0,save=0;
    
    for(i=0;i<sl-s1l;i++)
    {
        for(j=0;j<s1l;j++)
        {
            if(str1[j]==str[i+j])
            {
                count++;
                if(count==1)
                     save=i+j;
                if(count==s1l)
                    cout<<save<<" ";
            }      
        }count=0;
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string str,str1,temp;
    int num;
    
    getline(cin,str);
    cin>>num>>str1;
    temp=str;
    for(int i=0;i<num;i++)
    {
        str.append(temp);
    }
    calc(str,str1);
    return 0;
}