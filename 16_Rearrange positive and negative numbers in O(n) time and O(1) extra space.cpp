#include <stdio.h>
#include <stdlib.h>
#include<bits/stdc++.h>
#include<stack>
#include <string>

#include<iostream>

using namespace std;

int findJindex(int arr[], int n){

    for(int j=0;j<n;j++){
        if(arr[j]>0){
            //cout<<arr[j];
            return j;
        }
    }
}
void rearange(int arr[], int n){

    sort(arr,arr+n);

    int i=0;
    int j=findJindex(arr,n);

    while(j<n){
        swap(arr[i],arr[j]);
        i+=2;
        j++;
        if(arr[i]>0)
            break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }

}
int main(){

    int arr[] = {-1, 2, -3, 4,
                  5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearange(arr,n);

    //cout<<"Total Count "<<count("ewqaa")<<"\n";
    return 0;
}




