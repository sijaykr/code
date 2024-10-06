#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // create and decleare vector//
   /* vector<int>v;
    // size and capacity
    cout<<"capacity of vector :"<<v.capacity()<<endl;
    cout<<" size of vector :"<<v.size()<<endl;
    v.push_back(1);
    cout<<"capacity of vector :"<<v.capacity()<<endl;
    cout<<" size of vector :"<<v.size()<<endl;
    v.push_back(2);
    cout<<"capacity of vector :"<<v.capacity()<<endl;
    cout<<" size of vector :"<<v.size()<<endl;
    v.push_back(5);
    cout<<"capacity of vector :"<<v.capacity()<<endl;
    cout<<" size of vector :"<<v.size()<<endl;
    //update vallue ??
    v[1]=5;
    cout<<"capacity of vector :"<<v.capacity()<<endl;
    cout<<" size of vector :"<<v.size()<<endl;
    vector<int >v1(5,1);
    cout<<"capacity of vector1 :"<<v1.capacity()<<endl;
    cout<<" size of vector1 :"<<v1.size()<<endl;
    v1.push_back(10);
    cout<<"capacity of vector1 :"<<v1.capacity()<<endl;
    cout<<" size of vector1 :"<<v1.size()<<endl;
    */
   vector<int>vnew;
   vnew.push_back(12);
   vnew.push_back(22);
   vnew.push_back(32);
   vnew.push_back(42);
   vnew.push_back(52);
   cout<<"capacity of vector :"<<vnew.capacity()<<endl;
    cout<<" size of vector :"<<vnew.size()<<endl;
    vnew.pop_back();
    cout<<"capacity of vector :"<<vnew.capacity()<<endl;
    cout<<" size of vector :"<<vnew.size()<<endl;
    vnew.erase(vnew.begin()+1);
    cout<<"capacity of vector :"<<vnew.capacity()<<endl;
    cout<<" size of vector :"<<vnew.size()<<endl;
    for(int i=0;i<vnew.size();i++){
        cout<<vnew[i]<<" ";
    }
    cout<<endl;
        vnew.insert(vnew.begin()+1,50);
        for(int i=0;i<vnew.size();i++){
        cout<<vnew[i]<<" ";
    }
    cout<<endl;
    vector<int>ans;
    ans.push_back(10);
    ans.push_back(20);
    ans.push_back(30);
    ans.push_back(70);
    ans.push_back(13);
    for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";    
sort(ans.begin(),ans.end());
// sort in descreasing order 
sort(ans.begin(),ans.end(),greater<int>());
sort(ans.rbegin(),ans.rend());
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";
cout<<binary_search(ans.begin(),ans.end(),13)<<endl;
}