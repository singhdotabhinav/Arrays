//Naive approach
//Time O(n^2)
//Space O(1)
int MaxSum(int arr[], int n){

    int res=-INT_MAX;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            int index=(i+j)%n;
            sum+=j*arr[index];

        }
        res=max(res,sum);
    }
    return res;
}


//Efficient approach
//Time O(n)
//next_val = curr_val - (cum_sum - arr[i-1]) + arr[i-1] * (n-1);
int MaxSum(int arr[], int n){



    int sum=0;

    for(int i=0;i<n;i++)
        sum+=arr[i];

    int curr_val=0;
    for(int i=0;i<n;i++)
        curr_val+=arr[i]*i;

    int res=curr_val;

    for(int i=1;i<n;i++){
        int next_val=curr_val-(sum-arr[i-1]) + arr[i-1]*(n-1);
        curr_val=next_val;
        res=max(res,next_val);
    }
        return res;
}
