#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long int fac=1;
    cout<<"Enter a number:";
    cin>>n;
    if(n>=0){
        for(int i=n;i>=1;i--){
            fac*=i;
        }
        cout<<"The factorial of "<<n<<" is:"<<fac;
    }
    else{
        cout<<"Incorrect Input";
    }
    return  0;
}