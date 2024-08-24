#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter the score:";
    cin>>a;
    if(a<=100 && a>=90){
        cout<<"Grade: A";
    }
    else if(a<=89 && a>=80){
        cout<<"Grade: B";
    }
    else if(a<=79 && a>=70){
        cout<<"Grade: C";
    }
    else if(a<=69 && a>=60){
        cout<<"Grade: D";
    }
    else if(a<=59 && a>=0){
        cout<<"Grade: F";
    }
    else{
        cout<<"Wrong input";
    }
    return 0;
}
