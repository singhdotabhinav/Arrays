//Find pairs with given difference
void pairs(int arr[], int n, int k){

    sort(arr,arr+n);
    int i=0,j=0;

    while(j<n){

        if((arr[i]-arr[j])==k){
            cout << "Pair Found: (" << arr[i] <<
                        ", " << arr[j] << ")";
            i++;
            j++;
            //return;
        }
        if((arr[i]-arr[j])>k)
            j++;
        else
            i++;

    }
}
