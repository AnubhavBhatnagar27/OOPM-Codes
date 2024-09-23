// Print from 1 to 5 using do while loop
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1;
    do{
        cout<<i<<endl;
    }while(i<=5);
return 0;
}

// Print Hello 5 times using for loop
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0;i<=5;i++){
        cout<<"Hello"<<endl;
    }
return 0;
}

// Sum of first 5 natural numbers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    for(int i=1;i<=5;i++){
        sum+=i;
    }
    cout<<"The sum is: "<<sum;
return 0;
}