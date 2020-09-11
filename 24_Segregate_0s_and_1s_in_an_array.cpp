#include <stdio.h>
#include <stdlib.h>
#include<bits/stdc++.h>
#include<stack>
//Input array   =  [0, 1, 0, 1, 0, 0, 1, 1, 1, 0] 
//Output array =  [0, 0, 0, 0, 0, 1, 1, 1, 1, 1] 

#include <string>

#include<iostream>

using namespace std;
void segregate0and1(int arr[], int n){
    int count0=0;
    int count1=1;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            count0++;
        else
            count1++;
    }
    int i=0;
    for(i=0;i<count0;i++){
        arr[i]=0;
    }
    
    for(;i<n;i++){
        arr[i]=1;
    }
    
    for(i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

int main()
{
    int arr[] =   { 0,0,1,1,0,0,0,0, 1, 0, 1, 1, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    segregate0and1(arr, n);
    return 0;
}
