#include<bits/stdc++.h>
using namespace std;
    int majorityElement(vector<int>& nums) {
        int candidate,n=nums.size(),count =0;
        for(int i=0;i<n;i++){
            if(count == 0){
                count =1;
                candidate=nums[i];
                
            }
            else if(candidate==nums[i]){
                count++;
            }
            else 
            count --;

        }
        //to check wheter it is correct or not 
        int count =0;
        for(int i=0;i<n;i++){
            if(nums[i]==candidate){
                count ++;

            }
        }
            if(count>n/2)
            return candidate;
        else 
        return -1;
        
    }
    int main(){

    }