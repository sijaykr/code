#include<bits/stdc++.h>
using namespace std;
vector <int > fndtwoelmnt(vector<int> arr,int n){
    for(int i=0;i<n;i++){
        arr[i]-1;
        
    }
    // assing the lement 
    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;

    }
    // for missing elemnt
    vector<int> ans(2);
    for(int i=0;i<n;i++){
        if(arr[i]/n==2){
            ans[0]=i+1;
        }
        // for occurence 
        else if (arr[i]/n==0){
            ans[1]=i+1;
        }
    }
return ans;

}
int main(){

}