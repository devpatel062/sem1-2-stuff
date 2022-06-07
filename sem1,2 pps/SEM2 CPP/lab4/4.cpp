#include <iostream>
using namespace std;

class Person
{
    string Pname;
    int Page;
    
    public:
    
    Person(){}
    Person(string Pname1,int Page1)
    {
        Pname=Pname1;
        Page=Page1;
    }
    
    void print()
    {
        cout<<Page<<" "<<Pname<<"\n";
    }
};

class Family
{
    Person p[20];
    int member_count;
    
    public:
    Family()
    {
        member_count=0;
    }
    
    void add_member(string Fname,int Fage)
    {
        p[member_count]=Person(Fname,Fage);
        
        member_count++;
        
    }
    void print()
    {
        for(int i=0;i<member_count;i++)
        {
            p[i].print();
        }
    }
};

int main() {

    int number,age;
    string name;
    cin>>number;
    Family f;
    for(int i=0;i<number;i++)
    {
       cin>>name>>age;
       f.add_member(name,age);
    }
    f.print();

    return 0;
}