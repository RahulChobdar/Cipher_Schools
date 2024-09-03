#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,sum=0;
    cout<<"Enter size of Array: ";
    cin>>s;
    int arr[s];
    cout<<"\b"<<"Enter Array: ";
    for(int i=0;i<s;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"\b"<<"Sum of Array:"<<sum;
    return 0;
}