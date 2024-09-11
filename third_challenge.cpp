#include<iostream>
#include<vector>
using namespace std;

int duplicate(int *nums){
    int slow = nums[0];
    int fast =nums[0];

    do{
    slow=nums[slow];
    fast=nums[nums[fast]];
    cout<<"slow"<<slow;
    cout<<" fast"<<fast<<endl;
    }while(slow!=fast);

    fast =nums[0];
    while(slow!=fast){
    fast=nums[fast];
    slow=nums[slow];
    }
    cout<<"slow"<<slow;
    cout<<" fast"<<fast<<endl;
    return slow;

}

int main(){
    int arr[5] = {3, 1, 3, 4, 2};

    int ans = duplicate(arr);
    cout<<"duplicate value is :"<<ans;
    return 0;
}