#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Number of element's in array>>";
    cin>>n;
    int arr[n];
    cout<<"Element's of array>>";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tar;
    cout<<"Target >>";
    cin>>tar;
    for(int i=0;i<n;i++){
        if(tar == arr[i]){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}

