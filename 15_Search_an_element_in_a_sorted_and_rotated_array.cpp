#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;


int pivotIdx(int arr[], int n){

	if(arr[0] < arr[n-1]){
		return 0;
	}

	int pivot = -1;
	int s = 0, e = n-1;
	while(s <= e){
                if(arr[s] <= arr[e]){
                     return s;
                 }
		int mid = s + (e-s)/2;
		int next = (mid+1)%n;
		int prev = (mid-1+n)%n;
		if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]){

                      pivot = mid;
		      break;

		}
		if(arr[s] <= arr[mid]){

                       s = mid + 1;
		}
		else if(arr[mid] <= arr[e]){
			e = mid - 1;
		}

	}

	return pivot;
}

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

int main()
{
    int arr[]={15, 2,5,6,8,11,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    //cout<<rotation(arr,n,0,n-1);
    //cout<<pivotIdx(arr, n);
    int key=2;
    int index=pivotIdx(arr, n);
    int a=Binary(arr,0,index-1, key);
    int b=Binary(arr, index, n-1, key);
    if(a>0)
        cout<<a;
    else
        cout<<b;
    return 0;
}

