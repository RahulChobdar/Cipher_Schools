#include<bits/stdc++.h>
using namespace std;
int countChar(string &a, char c){
    int count = 0;
    for(int i=0;i<a.size();i++){
        if(a[i]==c) count++;
    }
    return count;
}
int main(){
    cout<<"String: ";
    string s;
    char a;
    getline(cin,s);
    cout<<"\b"<<"Char: ";
    cin>>a;
    int c = countChar(s,a);
    cout<<"\b"<<"Number of occurrence:"<<c;
    return 0;
}