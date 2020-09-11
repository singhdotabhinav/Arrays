#include <stdio.h>
#include <stdlib.h>
#include<bits/stdc++.h>
#include<stack>
#include <string>

#include<iostream>

using namespace std;
void segregate0and1and2(int arr[], int n){
    int count0=0;
    int count1=0;
    int count2=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0)
            count0++;
        else if(arr[i]==1)
            count1++;
        else
            count2++;
    }
    int i=0;
    for(i=0;i<count0;i++){
        arr[i]=0;
    }
    for(;i<count0+count1;i++){
        arr[i]=1;
    }
    for(;i<n;i++){
        arr[i]=2;
    }


    for(i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }





}

int main()
{
    int arr[] =   {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    segregate0and1and2(arr, n);
    return 0;
}
