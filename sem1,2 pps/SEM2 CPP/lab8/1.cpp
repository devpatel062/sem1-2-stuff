#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/* Write your code here */
class Person
{
    private:
        short int age;
    protected:
        string gender, name;
    public:
        Person(string name, string gender, short int age){
            this->name=name;
            if(gender=="male" || gender=="female")
                this->gender=gender;
            else
                this->gender="other";
            this->age=age;
        }
        void print(){
            cout<<name<<" "<<gender<<" "<<age;
        }
        short int get_age() const{
            return age;
        }
};
class Employee: public Person
{
    private:
        int yearly_salary;
    protected:
        static int employee_count;
        string employee_id, employee_since, designation, department;
    public:
        Employee(string name, string gender, short int age, string department, string designation, string employee_since, int yearly_salary) : Person(name, gender, age), employee_since(employee_since){
            this->employee_id="E"+std::to_string(employee_count);
            employee_count++;
            this->department=department;
            this->designation=designation;
            this->yearly_salary=yearly_salary;
        }
        Employee(const Employee &emp):Person(emp.name, emp.gender, emp.get_age()){
            this->employee_id=emp.employee_id;
            this->yearly_salary=emp.yearly_salary;
            this->employee_since=emp.employee_since;
            this->designation=emp.designation;
            this->department=emp.department;
        }
        void print(){
            cout<<employee_id<<" ";
            Person::print();
            cout<<" "<<department<<" "<<designation<<" "<<employee_since<<" "<<yearly_salary;
        }
        void increment(float percentage_increment){
            yearly_salary=(yearly_salary*percentage_increment/100)+yearly_salary;
        }
        string get_designation(){
            return designation;
        }
        void set_designation(string new_designation){
            this->designation=new_designation;
        }
        int get_yearly_salary(){
            return yearly_salary;
        }
};
class Manager:public Employee
{
    protected:
        short int direct_reports_count=0;
        Employee *direct_reports[10], *temp;
    public:
        Manager(const Employee &emp):Employee(emp){
        }
        void print(){
            Employee::print();
            cout<<"\n";
            for(int i=0; i<direct_reports_count; i++)
            {
                for(int j=i+1; j<direct_reports_count; j++)
                {
                    if(direct_reports[i]->get_yearly_salary()<direct_reports[j]->get_yearly_salary())
                    {
                        temp=direct_reports[i];
                        direct_reports[i]=direct_reports[j];
                        direct_reports[j]=temp;
                    }
                }
            }
            for(int i=0;i<direct_reports_count;i++)
            {
                direct_reports[i]->print();
                cout<<"\n";
            }
        }
        void add_direct_report(Employee *emp_ptr){
            direct_reports[direct_reports_count]=emp_ptr;
            direct_reports_count++;
        }
        void change_designation(string exist_designation, string new_designation){
            for(int i=0; i<direct_reports_count; i++)
            {
                if(direct_reports[i]->get_designation()==exist_designation){
                    direct_reports[i]->set_designation(new_designation);
                }
            }
        }
        void increase_salary(string designation, float increase_percent){
            for(int i=0; i<direct_reports_count; i++)
            {
                if(direct_reports[i]->get_designation()==designation){
                    direct_reports[i]->increment(increase_percent);
                }
            }
        }
};
int Employee::employee_count=1;

int main() {
    string name, gender, department, designation, employee_since;
    short age;
    int yearly_salary;
    cin >> name >> gender >> age >> department >> designation;
    cin >> employee_since >> yearly_salary;
    Employee employee(name, gender, age, department, designation,
                      employee_since, yearly_salary);
    Manager manager(employee);
    
    int direct_reports_count = 0;
    cin >> direct_reports_count;
    
    Employee *employee_ptr;
    for(int i = 0; i < direct_reports_count; i++) {
        getchar(); // removing newline from input buffer
        cin >> name >> gender >> age >> department >> designation;
        cin >> employee_since >> yearly_salary;
        employee_ptr = new Employee(name, gender, age, department,
                                    designation, employee_since,
                                    yearly_salary);
        manager.add_direct_report(employee_ptr);
    }
    
    getchar(); // Removing newline from input buffer
    string existing_designation, new_designation;
    cin >> existing_designation >> new_designation;
    manager.change_designation(existing_designation, new_designation);

    float increment_percentage;
    cin >> designation >> increment_percentage;
    manager.increase_salary(designation, increment_percentage);

    manager.print();
    
    return 0;
}