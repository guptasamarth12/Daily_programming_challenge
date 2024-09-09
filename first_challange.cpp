#include<vector>
#include<iostream>
using namespace std;

void sortColors(vector<int>&nums) {
        int index=0;
        int i=0;
        
        while(index<2){
            for(int j=i;j<nums.size();j++){
                if(nums[j]==index){
                    swap(nums[i],nums[j]);
                    i++;
                }
                
            }
            index++;
        }
    }

int main(){
    return 0;
}