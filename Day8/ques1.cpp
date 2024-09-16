#include<bits/stdc++.h>
using namespace std;
int stringLenght(string &s){
    int a = s.size();
    return a;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    cout<<"\b"<<"The length of the string is: "<<stringLenght(s);
    return 0;
}