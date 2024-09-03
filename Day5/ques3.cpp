#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cout<<"Enter a string: ";
    getline(cin,a);
    int v=0,c=0;
    for(char i : a){
        if(i == 'a' || i=='e'|| i=='i'|| i=='o'|| i=='u'){
            v++;
        }
        else if(i == ' ') continue;
        else c++;
    }
    cout<<"\b"<<"Number of Vowel's: "<<v<<"\n"<<"Number of Consonant's: "<<c<<endl;
    return 0;
}
