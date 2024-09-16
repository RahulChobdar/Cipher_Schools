#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Number of elements in array>>";
    cin>>n;
    int arr[n];
    cout<<"Element's in array>>";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int* ptr = arr;
    for(int i=0;i<n;i++){
        cout<<*(ptr + i)<<" ";
    }
    return 0;
}