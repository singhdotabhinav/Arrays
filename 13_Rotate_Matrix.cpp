//First find transpose
//Then find reverse of each column

void rotate(int mat[N][N], int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i>=j)
                swap(mat[i][j],mat[j][i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<mat[i][j]<<"\t";
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"\n";
    int start=0,end=n-1;
    for(int j=0;j<n;j++){
        int start=0,end=n-1;
        while(end>start){
            swap(mat[start][j],mat[end][j]);
            start++;
            end--;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<mat[i][j]<<"\t";
        cout<<"\n";
    }

}
