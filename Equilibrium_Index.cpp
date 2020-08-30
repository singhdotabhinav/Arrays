
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
