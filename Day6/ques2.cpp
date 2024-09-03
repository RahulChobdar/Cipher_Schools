#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,sume=0,sumo=0;
    cout<<"Enter size of Array: ";
    cin>>s;
    int arr[s];
    cout<<"\b"<<"Enter Array: ";
    for(int i=0;i<s;i++){
        cin>>arr[i];
        if(arr[i]&1){ sumo+=arr[i];}
        else sume+=arr[i];
    }
    cout<<"\b"<<"Sum of even numbers :"<<sume<<endl;
    cout<<"Sum of odd numbers :"<<sumo;
    return 0;
}