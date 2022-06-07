#include<iostream>
#include<string>

using namespace std;
/* Write your code here */
class Employee
{
    string employee_id, employee_name, designation;
    int salary;

public:
    // Employee(){}
    Employee(string employee_id="\0", string employee_name="\0" , string designation="\0" , int salary=0)
    {
        this->employee_id = employee_id;
        this->employee_name = employee_name;
        this->designation = designation;
        this->salary = salary;
    }
    void increment(int add)
    {
        this->salary += add;
    }
    string getid()
    {
        return employee_id;
    }
    void print_employee()
    {
        cout << employee_id << " " << employee_name << " " << designation << " " << salary<<endl;
    }
};

class Company
{
    string name;
    Employee max_employee[10];
    int no_of_employees=0;

public:
    Company(string name)
    {
        this->name = name;
    }
    void add_employee(Employee obj)
    {
        int count = 0;
        for (int i = 0; i < no_of_employees; i++)
        {
            if (obj.getid() == max_employee[i].getid())
                count++;
        }
        if (count == 0)
        {
            max_employee[no_of_employees] = obj;
            no_of_employees++;
        }
    }
    
    void increase_salary(string employee_id, int increment_amount)
    {
        for (int i = 0; i < no_of_employees; i++)
        {
            if (employee_id == max_employee[i].getid())
                max_employee[i].increment(increment_amount);
        }
    }
    
    void print()
    {
        for (int i = 0; i < no_of_employees; i++)
        {
            max_employee[i].print_employee();
            
        }
    }
};

int main() {
    string company_name;
    cin >> company_name;
    Company cmp("MyCompany");

    int n;
    cin >> n;
    string employee_id, employee_name, designation;
    int salary;
    Employee emp;
    for(int i = 0; i < n; i++) {
        getchar(); // Removing newline from input buffer
        cin >> employee_id >> employee_name >> designation >> salary;
        emp = Employee(employee_id, employee_name, designation, salary);
        cmp.add_employee(emp);
    }

    int m = 0, increment_amount;
    cin >> m;
    for(int i = 0; i < m; i++) {
        getchar(); // Removing newline from input buffer
        cin >> employee_id >> increment_amount;
        cmp.increase_salary(employee_id, increment_amount);
    }

    cmp.print();

    return 0;
}