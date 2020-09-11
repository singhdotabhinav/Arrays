
#include<bits/stdc++.h>
#include<stack>
#include <string>

#include<iostream>

using namespace std;
int inversion(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]&&i<j)
                count++;
        }
    }
    return count;
}
int main()
{
    int arr[] =   {3, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<inversion(arr, n);
    return 0;
}
