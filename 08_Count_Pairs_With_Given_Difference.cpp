void pairs(int arr[], int n, int k){

    sort(arr,arr+n);
    int i=0,j=0,count=0;

    while(j<n){

        if((arr[i]-arr[j])==k){
            cout << "Pair Found: (" << arr[i] <<
                        ", " << arr[j] << ")";
            count++;
            i++;
            j++;
            //return;
        }
        if((arr[i]-arr[j])>k)
            j++;
        else
            i++;

    }
    cout<<count;
}
