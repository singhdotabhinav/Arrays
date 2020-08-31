//Input: arr[] = {4, 3, 7, 8, 6, 2, 1}
//Output: arr[] = {3, 7, 4, 8, 2, 6, 1}
//Checking in alternate way
//First, if the number is greater than next element, swap both
//Second, if the number is less than next element, swap both
//a < b > c < d > e < f.

void zigzag(int arr[] , int n){

    bool flag=true;
    for(int i=0;i<=n-2;i++){

            if(flag){
                if(arr[i]>arr[i+1]) //Check for '>'
                    swap(arr[i], arr[i+1]);
            }
            else{
                if(arr[i]<arr[i+1]) //Check for '<'
                    swap(arr[i], arr[i+1]);
            }
            flag=!flag;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

}
