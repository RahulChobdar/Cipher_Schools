#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cout<<"Enter a string:";
    getline(cin,a);
    reverse(a.begin(),a.end());
    cout<<a;
}