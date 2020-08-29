//Sliding window approach
//Start adding from start utill the sum is less, after that start subtracting from end
#include <bits/stdc++.h>
using namespace std;

int sumwa(int arr[], int given_sum ,int n){
    int flag=0;
    int sum=0;
    int header=0;
    for(int i=0;i<=n;i++){
        sum+=arr[i];
        while(sum>given_sum){
                //cout<<"ffd";
            sum=sum-arr[header];
            header++;
        }
        if(sum==given_sum){
            flag=1;
            cout<<header+1<<" "<<i+1<<"\n";
            break;
        }
    }
    if(flag==0)
        cout<<-1;
}

int main()
{

    int arr[] = {9,45,10,190};
    int sum=225;
    int n=sizeof(arr)/sizeof(arr[0]);
    sumwa(arr,sum,n);
    return 0;
}
