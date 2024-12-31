// Create a class Employee with attributes like name, id, salary. Implement encapsulation using access modifiers, and provide getter and setter methods to update and access the data.
#include<iostream>
using namespace std;
class Employee{
    private:
    string name;
    int emp_id;
    double salary;
    public:
    Employee(string n,int id, double sal){
        name=n;
        emp_id=id;
        sal=salary;
    }
    string getName(){
        return name;
    }
    void setName(string n){
        name=n;
    }
    int getEmpid(){
        return emp_id;
    }
    void setEmpid(int id){
        emp_id=id;
    }
    double getSalary(){
        return salary;
    }
    void setSalary(double sal){
        salary=sal;
    } 
};
int main(){
    Employee emp1("Aditya", 19, 50000);
    cout<<"Name: "<<emp1.getName()<<endl;
    cout<<"Employee ID: "<<emp1.getEmpid()<<endl;
    cout<<"Salary: "<<emp1.getSalary()<<endl;
    emp1.setName("Atharv");
    emp1.setSalary(40000);
    cout<<"Updated information"<<endl;
    cout<<"Name: "<<emp1.getName()<<endl;
    cout<<"Salary: "<<emp1.getSalary()<<endl;
    return 0;
}