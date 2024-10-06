#include<bits/stdc++.h>
using namespace std;
void prif(vector<string > &ans,string &temp,int zero,int one,int n){
    if(temp.size()==n){
        ans.push_back(temp);
        return ;

    }
    temp.push_back('1');
    prif(ans,temp,zero,one+1,n);
    temp.pop_back();
    if(zero<one){
        temp.push_back('0');
        prif(ans,temp,zero+1,one,n);
        temp.pop_back();
    }

}
int main(){
    int n=4;
    vector<string > ans;
    string temp;
    prif(ans,temp,0,0,4);
    cout<<"our prifix such that no of one is more than or equal to zero:"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

}