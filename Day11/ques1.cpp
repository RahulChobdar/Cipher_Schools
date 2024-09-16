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
    for(auto a : arr){
        if(tar == a){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}