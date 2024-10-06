#include<bits/stdc++.h>
using namespace std;
int ans(vector<int>height,int n){
    /*
int leftmax[n],rightmax[n],mht;
 leftmax[0]=0,rightmax[n-1]=0;int water=0;
for(int i=1;i<n;i++){
    leftmax[i]=max(leftmax[i-1],height[i-1]);
}
for(int i=n-2;i>=0;i--){
    rightmax[i]=max(rightmax[i+1],height[i+1]);
}
for(int i=0;i<n;i++){
    mht=min(leftmax[i],rightmax[i]);
    if(mht-height[i]>0)
    water+=mht-height[i];
}
return water ;*/
// find maxim elemnt
int leftmax=0,rightmax=0;
int mxht=height[0],index,water=0;
for(int i=1;i<n;i++){
    if(height[i]>mxht){
    mxht=height[i];
    index=i;
    }
}
// left maximun sum water 
for(int i=0;i<index;i++){
    if(leftmax>height[i])
    water +=leftmax-height[i];
    else
    leftmax=height[i];
}
/*
for (int i = 0; i < index; i++) {
        if (leftmax > height[i])
            water += leftmax - height[i];
        else
            leftmax = height[i];
    }
*/

//right maximum sum

for(int i=n-1;i>index;i--){
    if(rightmax>height[i])
    water += rightmax-height[i];
    else
    rightmax=height[i];

}
/*
for (int i = n - 1; i > index; i--) {
        if (rightmax > height[i])
            water += rightmax - height[i];
        else
            rightmax = height[i];
    }*/
return water;

};
int main(){
    int n;
    cout<<"please enter the value for the num:";
    cin>>n;
    vector<int>heit(n);
    cout<<"pleaseenter  the value for the vetor :";
    for(int i=0;i<n;i++){
        cin>>heit[i];
    }
    cout<<"our answer is :"<<ans(heit,n);
}