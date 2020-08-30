//Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.
//Input: A[] = {-7, 1, 5, 2, -4, 3, 0}
//Output: 3
//3 is an equilibrium index, because:
//A[0] + A[1] + A[2] = A[4] + A[5] + A[6]

//Input: A[] = {1, 2, 3}
//Output: -1
#include <bits/stdc++.h>
using namespace std;

int eq(int arr[], int n){

    int lsum=0,rsum=0;
    for(int i=0,j=n-1; i<n,j>0; i++,j--){
        lsum+=arr[i];
        cout<<"Lsum is "<<i<<"\t"<<j<<"\t"<<lsum<<"\n";
        rsum+=arr[j];
        cout<<"Rsum is "<<i<<"\t"<<j<<"\t"<<rsum<<"\n";
        if(lsum==rsum) return i+1;
    }
    return -1;
}
int main(){

    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << eq(arr, arr_size);

}
