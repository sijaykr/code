#include<bits/stdc++.h>
using namespace std;
void subset(string s,int index,int n,vector<string > &ans,string &temp1){
    if(index==n){
        ans.push_back(temp1);
        return;
    }
    /// not included 
    subset(s,index+1,n,ans,temp1);
    // when included 
    temp1.push_back(s[index]);
    subset(s,index+1,n,ans,temp1);
    temp1.pop_back();


}
int main(){
    string s;
    cout<<"please enter the string :";
    cin>>s;
vector<string >ans;
string temp1;
subset(s,0,s.size(),ans,temp1);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
}
}