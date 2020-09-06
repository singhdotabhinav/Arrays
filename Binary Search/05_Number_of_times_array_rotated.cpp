//Number of time an array is rotated in an sorted array can be calculated by finding index of smallest number in an array

int rotation(int arr[], int n, int l, int r){

    int pivot=-1;
    while(l<=r){
            cout<<"sfs";
        int mid= l + (r-l)/2;
        int prev= (mid + n - 1)%n;
        int next = (mid + 1)%n;
        if( arr[mid]<=arr[prev] && arr[mid]<=arr[next] ){     //If at any index, the element is smaller than both it's previous and next element then it is the min elelment
            pivot= mid;
            break;
        }
        if(arr[l]<=arr[mid]){                                //If element at index mid is greater than index low, then left subarray is sorted, so we cannot find min index here,
            l=mid+1;                                         //go for searching in another subarray
        }
        else if(arr[mid]<=arr[r]){                           //If element at index mid is less than index high, then right subarray is sorted, so we cannot find min index here,   
            r=mid-1;                                         //go for searching in another subarray
        }

    }

    return pivot;


}

int main()
{
    int arr[]={18,2,5,6,811,12,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<rotation(arr,n,0,n-1);
    return 0;
}

