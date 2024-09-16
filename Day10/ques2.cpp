#include<bits/stdc++.h>
using namespace std;
string Palindrome(string & s){
    string str = "";
    for(char k : s){
        if(isalnum(k)) str+= tolower(k);
    }
    cout<<str<<endl;
    int n = (int)str.size();
    for(int i=0;i<n;i++){
        if(str[i] != str[n-i-1]){
            return "false";
        }
    }
    return "true";
}
int main(){
    string s;
    getline(cin,s);
    cout<<Palindrome(s);
    return 0;
}
