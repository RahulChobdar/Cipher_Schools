#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first integer:";
    cin>>a;
    cout<<"Enter second integer:";
    cin>>b;
    cout<<"Addition: "<<a+b<<endl;
    cout<<"Subtraction: "<<a-b<<endl;
    cout<<"Multiplication: "<<a*b<<endl;
    if(b!=0){
        cout<<"Division: "<<setprecision(2)<<a/double(b)<<endl;
    }
    else{
        cout<<"Cannot be divided by 0"<<endl;
        cout<<"Modulus: "<<a<<endl;
        return 0;
    }
    cout<<"Modulus: "<<a%b<<endl;
    return 0;
}