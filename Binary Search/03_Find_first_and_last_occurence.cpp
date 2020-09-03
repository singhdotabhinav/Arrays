//Find first occurrence in sorted array
//Time compleixity O(logN)

int first_occurrence(int arr[], int l, int r, int key){

    int res=-1;
    while(r>=l){
        int mid= l + (r-l)/2;
        if ( arr[mid] == key){
                res=mid;
                r=mid-1;
        }
        else if(key < arr[mid])
                r=mid-1;
        else
                l=mid+1;


    }
    return res;
}

int last_occurrence(int arr[], int l, int r, int key){

    int res=-1;
    while(r>=l){
        int mid= l + (r-l)/2;
        if ( arr[mid] == key){
                res=mid;
                l=mid+1;
        }
        else if(key < arr[mid])
                r=mid-1;
        else
                l=mid+1;


    }
    return res;
}
