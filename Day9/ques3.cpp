#include<bits/stdc++.h>
using namespace std;
int main(){
    int a= 10;
    int *ptr = &a;
    int **ptrtoptr = &ptr;
    cout<<"Using Variable>>"<<a<<endl;
    cout<<"Using Pointer>>"<<*ptr<<endl;
    cout<<"Using Pointer to Pointer>>"<<**ptrtoptr;
    return 0;
}