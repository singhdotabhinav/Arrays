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
