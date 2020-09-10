//Find maximum length of increasing as well as decreasing subsequence
//Input={12, 4, 78, 90, 45, 23}; 
//Output=5
//Approach is simple
//Find Longest Incresing Subsequence (refer question 4 in same repo)
//Required answer is sum of LIS of array from either end and subtract 1 from it
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int lengthOfLIS(int* input, int n){

    if(n==0)
        return 0;


    int output[n];
    output[0]=1;
    for(int i=1;i<n;i++){
        output[i]=1;
        for(int j=i-1;j>=0;j--){
            if(input[i]<=input[j])
                continue;
            int possibleAns=output[j]+1;
            if(possibleAns>output[i])
                output[i]=possibleAns;

        }
    }

    int best=0;
    for(int i=0;i<n;i++){
        if(best<output[i])
            best=output[i];
    }
    return best;


}
int bitonic(int *arr, int n){
    int a=lengthOfLIS(arr,n);
    reverse(arr,arr+n);
    int b=lengthOfLIS(arr,n);
    return a+b-1;
}



int main()
{
    int arr[] = {12, 4, 78, 90, 45, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "nLength of max length Bitnoic Subarray is " << bitonic(arr, n);
    return 0;
}
