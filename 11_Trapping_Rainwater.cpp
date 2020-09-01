//At any index i 
//Find max to it's left and max to its right
//Find min of max height at left and right
//At last subtract between min of left and right and arr[i]
int trap(int arr[], int n){

    int left[n];
    int right[n];
    left[0]=arr[0];
    right[n-1]=arr[n-1];
    int water=0;
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],arr[i]);
    }
    for(int i=n-2;i>0;i--){
        right[i]=max(arr[i],right[i+1]);
    }
    for(int i=0;i<n;i++){
        water+=min(left[i],right[i]) - arr[i];
    }
    return water;

}
