int rotation(int arr[], int n, int l, int r){

    int pivot=-1;
    while(l<=r){
            cout<<"sfs";
        int mid= l + (r-l)/2;
        int prev= (mid + n - 1)%n;
        int next = (mid + 1)%n;
        if( arr[mid]<=arr[prev] && arr[mid]<=arr[next] ){
            pivot= mid;
            break;
        }
        if(arr[l]<=arr[mid]){
            l=mid+1;
        }
        else if(arr[mid]<=arr[r]){
            r=mid-1;
        }

    }

    return pivot;


}
