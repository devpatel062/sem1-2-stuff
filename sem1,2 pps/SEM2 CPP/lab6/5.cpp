#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Engineer
{
    string name,team_name;
    int salary;
    
    public:
    
    void setname(string n)
    {
        name=n;
    }
    string getname(string n)
    {
        return name;
    }
    void settname(string tn)
    {
        team_name=tn;
    }
    string gettname(string tn)
    {
        return team_name;
    }
    void setsalary(int sl)
    {
        salary=sl;
    }
    int getsalary(int sl)
    {
        return salary;
    }
    void print()
    {
        cout<<name<<" "<<salary<<endl;
    }
    int bonus()
    {
        return salary*25/100;
    }
};
class Manager
{
    string name, team_name;
    int salary;
    
    public:
    
    void setname(string n)
    {
        name=n;
    }
    string getname(string n)
    {
        return name;
    }
    void settname(string tn)
    {
        team_name=tn;
    }
    string gettname(string tn)
    {
        return team_name;
    }
    void setsalary(int sl)
    {
        salary=sl;
    }
    int getsalary(int sl)
    {
        return salary;
    }
    void print()
    {
        cout<<name<<" "<<salary<<endl;
    }
    int bonus()
    {
        return salary*30/100;
    }
};
class TeamLeader
{
    string name, team_name;
    int salary;
    
    public:
    
    void setname(string n)
    {
        name=n;
    }
    string getname(string n)
    {
        return name;
    }
    void settname(string tn)
    {
        team_name=tn;
    }
    string gettname(string tn)
    {
        return team_name;
    }
    void setsalary(int sl)
    {
        salary=sl;
    }
    int getsalary(int sl)
    {
        return salary;
    }
    void print()
    {
        cout<<name<<" "<<salary<<endl;
    }
    int bonus()
    {
        return salary*28/100;
    }
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Manager mg;
    Engineer eg;
    TeamLeader tl;
    int i,num,salary;
    int bonus_eg=0,bonus_tl=0,bonus_mg=0,total=0;
    string s1;
    char decision;
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>decision>>salary;
        getline(cin,s1);
        
        switch(decision)
        {
            case 'E':
                eg.setname(s1);
                eg.setsalary(salary);
                eg.print();
                bonus_eg+=eg.bonus();
                break;
            case 'T':
                tl.setname(s1);
                tl.setsalary(salary);
                tl.print();
                bonus_tl+=tl.bonus();
                break;
            case 'M':
                mg.setname(s1);
                mg.setsalary(salary);
                mg.print();
                bonus_mg+=mg.bonus();
                break;
        }
    }
    total=bonus_mg+bonus_eg+bonus_tl;
    cout<<bonus_eg<<" "<<bonus_tl<<" "<<bonus_mg<<" "<<total;
    return 0;
}
