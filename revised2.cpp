#include<bits/stdc++.h>
using namespace std;
void genrt(int n,int l,int r,vector<string >&ans,string temp){

    /// terminating condition
    if(l+r==2*n){
        ans.push_back(temp);
        return ;
    }
    /// when left is includes
    if(l<n){
        temp.push_back('(');
        genrt(n,l+1,r,ans,temp);
        temp.pop_back();
    }
    // when right is included 
    if(r<l){
        temp.push_back(')');
        genrt(n,l,r+1,ans,temp);
        temp.pop_back();
    }

}
int main(){
    int n;
    cout<<"please enter the value for the num :";
    cin>>n;
vector<string> ans;
string temp;
genrt(n,0,0,ans,temp);
cout<<"our egnebrated paratneths is ";
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
}
}