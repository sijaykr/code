#include<bits/stdc++.h>
using namespace std;
void subset(string &s,int index,int n,vector<string>&ans,string &temp){
    if(index==n){
        ans.push_back(temp);
        
        return;
    }
    // if include 
    subset(s,index+1,n,ans,temp);
    // if included 
    temp.push_back(s[index]);
    subset(s,index+1,n,ans,temp);
    temp.pop_back();

}
int main(){
    string s;
    
    cout<<"please enter the value for the string ";
    cin>>s;
    vector<string>ans;
    string temp;
    subset(s,0,s.size(),ans,temp);
    cout<<"our subsets of string is :";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    
}