#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,count=0;
    
    std::cin>>n;
    int temp,amount,index=0,j;
    int denomination[n],coin[n],div[n],use;
    
    for(i=0;i<n;i++)
    {     
              std::cin>>denomination[i];
              std::cin>>coin[i];
    }
    
    std::cin>>amount;
    for(i=0;i<n-1;i++) 
    {
        index=i;
        for(j=i+1;j<n;j++)
        {
          if(denomination[index]<denomination[j])
              index=j;
        }
        temp = denomination[i];
        denomination[i] = denomination[index];
        denomination[index] = temp;
        
        temp=coin[i];
        coin[i] = coin[index];
        coin[index] = temp;
        
    }
    
    for(i=0;i<n;i++)
    {    
        if(amount == 0)
        break;
        
        div[i]=amount/denomination[i];
        
        if(div[i]>coin[i])
            div[i]=coin[i];
        
        use=denomination[i]*div[i];
        amount=amount-use;
    }
    
    if(amount!=0)
        std::cout<<-1;
    
    else
    {
        
        
        for(j=0;j<i;j++)
       {
           if(div[j] == 0)
           {
               count++;
               continue;
           }
        }
        std::cout<<(i-count)<<"\n";
    
       for(j=0;j<i;j++)
       {
           if(div[j] == 0)
           {
               continue;
           }
               
           else
            std::cout<<denomination[j]<<" "<<div[j]<<"\n";
       }
    }
    return 0;
}