#include<bits/stdc++.h>
using namespace std;
void Concat(string &a,string &b){
    string c = a +" "+ b;
    cout<<"Concatenated string>>"<<c;
}
int main(){
    string a,b;
    cout<<"Str1 >>";
    getline(cin,a);
    cout<<"Str2 >>";
    getline(cin,b);
    Concat(a,b);
    return 0;
}
