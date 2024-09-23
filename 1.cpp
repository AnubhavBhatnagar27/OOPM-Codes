//WAP in c++ to swap the values of two number without temporary variable
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first value: ";
    cin>>a;
    cout<<"Enter the second value: ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<endl<<b;
    return 0;
}
// WAP to check a number is +ve,-ve or zero
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n==0){
        cout<<"The number entered is Zero."<<endl;
    }
    else if(n>0){
        cout<<"The number entered is positive"<<endl;
    }
    else{
        cout<<"The number entered is negative"<<endl;
    }
    return 0;
}
// WAP to find largest number between 3 numbers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"Enter the third number: ";
    cin>>n3;
    if(n1>n2){
        if(n1>n3){
            cout<<n1<<" is the largest number."<<endl;
        }
        else if(n3>n2){
            cout<<n3<<" is the largest number."<<endl;
        }
        else{
            cout<<n2<<" is the largest number."<<endl;
        }
    }
    else if(n2>n3){
        cout<<n2<<" is the largest number."<<endl;
    }
    else{
        cout<<n3<<" is the largest number."<<endl;
    }
    return 0;
}