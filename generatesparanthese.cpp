#include<bits/stdc++.h>
using namespace std;
void paranth(int n,int left,int right,vector<string>&ans,string &temp){
    if(left+right==2*n){
        ans.push_back(temp);
        return;
    }
    // we want to add the left paranthesisi
    if(left<n){
        temp.push_back('(');
        paranth(n,left+1,right,ans,temp);
        temp.pop_back();
    }
    if(right<left){
temp.push_back(')');
paranth(n,left,right+1,ans,temp);
temp.pop_back();
    }
}
int main(){
    int n;

    cout<<"please enter the value to genrate the parantheses:";
    cin>>n;
    vector<string>ans;
    string temp;
    paranth(n,0,0,ans,temp);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}