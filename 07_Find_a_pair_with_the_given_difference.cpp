//Find pairs with given difference
void pairs(int arr[], int n, int k){

    sort(arr,arr+n);
    int i=0,j=n-1;

    while(i<n&&j>0){

        if(i!=j&&abs(arr[i]-arr[j])==k){
            cout<<arr[i]<<"\t"<<arr[j];
            return;
        }
        if(abs(arr[i]-arr[j])>k)
            i++;
        else
            j++;

    }
    cout<<"-1";
}
