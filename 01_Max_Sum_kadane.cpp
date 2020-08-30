//Problem Statement
//Given n numbers (both +ve and -ve), arranged in a circle, fnd the maximum sum of consecutive number.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int max_sum( int arr[], int n ){

    int localSum=arr[0];
    int globalSum=arr[0];
    for(int i=1; i<n;i++){
        
        localSum=max(arr[i], localSum+arr[i]);
        globalSum=max(localSum,globalSum);

    }
    return globalSum;
}
