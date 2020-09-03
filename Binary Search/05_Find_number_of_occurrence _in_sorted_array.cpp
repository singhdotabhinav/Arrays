//Find number of occurrence in a sorted array
//It will be same as first occurrence - last occurrence + 1

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

int main() {
    int arr[] = {1, 2, 3, 5,5,5,5, 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    cout<<last_occurrence(arr,0,n-1,key)-first_occurrence(arr,0,n-1,key)+1;
   return 0;
}



