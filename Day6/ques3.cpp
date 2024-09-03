#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,ne=0,no=0;
    cout<<"Enter size of Array: ";
    cin>>s;
    int arr[s];
    cout<<"\b"<<"Enter Array: ";
    for(int i=0;i<s;i++){
        cin>>arr[i];
        if(arr[i]&1){ no++;}
        else ne++;
    }
    cout<<"\b"<<"Number of even numbers :"<<ne<<endl;
    cout<<"Number of odd numbers :"<<no;
    return 0;
}