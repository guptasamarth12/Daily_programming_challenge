#include<iostream>
#include<vector>
using namespace std;

int duplicate(int *arr, int n){
    int ans = 0;
    for(int i=1;i<=n;i++){
        ans = ans^i;
    }

    for(int i=0;i<n+1;i++){
        ans = ans^arr[i];
    }

    return ans;
}

int main(){
    int n = 4;
    int arr[n+1] = {3, 1, 3, 4, 2};

    int ans = duplicate(arr,n);
    cout<<"duplicate value is :"<<ans;
    return 0;
}