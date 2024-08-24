#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    double avg=0;
    for(int i=0;i<5;i++){
        cout<<"Enter grade "<<i+1<<":";
        cin>>a;
        avg+= a/5.0;
    }
    cout<<"The average grade is:"<<avg;
    return 0;
}
