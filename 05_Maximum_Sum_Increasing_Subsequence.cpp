int msis(int arr[], int n){
    
    int msi[n];
    for(int i=0;i<n;i++)
        msi[i]=arr[i];

    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]&&msi[i]<arr[i]+msi[j])
                msi[i]=arr[i]+ msi[j];
        }
    }
    int best=0;

    for(int i=0;i<n;i++){
        if(best<msi[i])
            best=msi[i];
    }
    return best;

}
