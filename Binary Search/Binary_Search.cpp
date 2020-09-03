int Binary( int arr[], int l, int r, int key){

          while(r>=l){
            int mid=l + (r-l)/2;
            if(arr[mid]==key)
                return mid;
            else if(arr[mid]>key)
                r=mid-1;
            else if( arr[mid]<key)
                l=mid+1;
           }


        return -1;

}

int main() {


    int arr[] = {1, 2, 3, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;
    cout<<Binary(arr,0,n-1,key);

   return 0;
}
