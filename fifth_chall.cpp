#include<vector>
#include<iostream>
#include<vector>
using namespace std;

void ladder(vector<int> arr){
    vector<int> ans;
    int size = arr.size();
    int maxNum = arr[size-1];
    ans.push_back(arr[size-1]);

    for(int i=size-2;i>=0;i--){
        if(maxNum < arr[i]){
            maxNum = arr[i];
            ans.push_back(arr[i]);
        }
    }

    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v1 = {16, 17, 4, 3, 5, 2};
    vector<int> v2 = {1, 2, 3, 4, 0};
    vector<int> v3 = {7, 10, 4, 10, 6, 5, 2};
    vector<int> v4 = {5};
    vector<int> v5 = {100, 50, 20, 10};

    ladder(v1);
    ladder(v2);
    ladder(v3);
    ladder(v4);
    ladder(v5);
    
    return 0;
}