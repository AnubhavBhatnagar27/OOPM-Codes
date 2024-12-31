// Write a C++ program to demonstrate the concept of constructors and destructors by creating a class BankAccount to initialize and clean up account data.
#include<iostream>
using namespace std;
class Bankaccount{
    private:
    string accountHolder;
    int accountNumber;
    double accountBalance;
    public:
    Bankaccount(string n,int a,double b){
        accountHolder=n;
        accountNumber=a;
        accountBalance=b;
    }
    ~Bankaccount(){
        cout<<"Account Closing Balance: "<<accountBalance<<endl;
        cout<<"Account for "<<accountHolder<<" with account number "<<accountNumber<<" is now closed. "<<endl;
    }
    void deposit(double amount){
        if(amount>0){
            accountBalance+=amount;
            cout<<"Amount Deposited: "<<amount<<endl;
            cout<<"Updated Balance: "<<accountBalance<<endl;
        }
        else{
            cout<<"Invalid Deposit Amount"<<endl;
        } 
    }
    void withdraw(double amount){
        if(amount>0 && amount<=accountBalance){
            accountBalance-=amount;
            cout<<"Withdrawl Amount: "<<amount<<endl;
            cout<<"Updated Balance: "<<accountBalance<<endl; 
        }
        else{
            cout<<"Invalid Amount Withdrawl"<<endl;
        }
    }
    void displayaccountInfo(){
        cout<<"Account Holder: "<<accountHolder<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Balance: "<<accountBalance<<endl;
    }
};
int main(){
    Bankaccount account1("Atharv",12345678,54325.87);
    account1.displayaccountInfo();
    account1.deposit(500.00);
    account1.withdraw(200.00);
return 0;
}