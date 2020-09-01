//Given an array of n integers where each value represents number of chocolates in a packet.
//Each packet can have variable number of chocolates. There are m students, the task is to distribute chocolate packets such that:
//1.Each student gets one packet.
//2.The difference between the number of chocolates in packet with maximum chocolates and packet with minimum chocolates given to the students is minimum.
int chocolate(int arr[], int n, int k){

    sort(arr,arr+n);
    int mn=INT_MAX;
    for(int i=0,j=k-1;i<n,j<n;i++,j++){
        int diff=arr[j]-arr[i];

        if(diff<mn)
            mn=diff;
    }
    return mn;
}
