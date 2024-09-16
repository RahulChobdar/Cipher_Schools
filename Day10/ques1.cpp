#include<bits/stdc++.h>
using namespace std;
int findMax(int arr[],int size){
    int val = arr[0];
    for(int i=1;i<size;i++) val = val<arr[i]?arr[i]:val;
    return val;
}
int main(){
    int n;
    cout<<"Number of elements in array>>";
    cin>>n;
    int arr[n];
    cout<<"Element's of array>>";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Maximum of array>>"<<findMax(arr,n);
    return 0;
}