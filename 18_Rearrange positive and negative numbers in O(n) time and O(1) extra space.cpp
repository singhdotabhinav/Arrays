//Input  [-1, 2, -3, 4, 5, 6, -7, 8, 9]
//Output [9, -7, 8, -3, 5, -1, 2, 4, 6]
//Output may differ
//Separate all positive and negative numbers
//Take two pointer, one at start of negative number and other at start of positive number
//Swap i and j alternatively
#include<bits/stdc++.h>
#include<iostream>

using namespace std;
//Function to find index of first positive element
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
    return 0;
}




