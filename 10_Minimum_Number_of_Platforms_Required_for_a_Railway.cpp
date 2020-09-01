//Minimum Number of Platforms Required for a Railway
//Sort the arrival and departure time of trains.
//Create two pointers i=0, and j=0 and a variable to store ans and current count plat
//Run a loop while i<n and j<n and compare the ith element of arrival array and jth element of departure array.
//if the arrival time is less than or equal to departure then one more platform is needed so increase the count, i.e. plat++ and increment i
//Else if the arrival time greater than departure then one less platform is needed so decrease the count, i.e. plat++ and increment j
//Update the ans, i.e ans = max(ans, plat).
int platform(int arr[], int dep[], int n ){
    sort(arr,arr+n);
    sort(dep,dep+n);

    int max_plat=1,need_plat=1;
    int i=1,j=0;
    while(i<n&&j<n){
        if(arr[i]<=dep[j]){
            need_plat++;
            i++;
        }
        else if(arr[i]>dep[j]){
            need_plat--;
            j++;
        }
        if(max_plat<need_plat)
            max_plat=need_plat;
    }
    return need_plat;


}
