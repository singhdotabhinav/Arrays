//An element in a sorted array can be found in O(log n) time via binary search.
//But suppose we rotate an ascending order sorted array at some pivot unknown to you beforehand.
//So for instance, 1 2 3 4 5 might become 3 4 5 1 2.
//Devise a way to find an element in the rotated array in O(log n) time.
//Step 1 - Find minimum in the array, that will be pivot element
//Step 2 - Left and right of pivot are sorted
//Step 3 - Apply binary serach in (arr, 0, index-1) and (arr, index, n-1)
//Step 4 - One will give -ve value while other don't, return the positive index


int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int find_minimum(int a[], int n) {
  int c, min, index;

  min = a[0];
  index = 0;

  for (c = 1; c < n; c++) {
    if (a[c] < min) {
       index = c;
       min = a[c];
    }
  }

  return index;
}


int psearch(int arr[], int n , int key){

    int index=find_minimum(arr,n);

    int l=binarySearch(arr, 0,index-1, key );
    int r=binarySearch(arr,index,n-1, key );

    if(l<0)
        return r;
    else return r;
}
int main() {


    int arr[] = { 5, 6, 7, 8, 9, 10, 1, 2, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    cout<<psearch(arr,n,key);

   return 0;
}
