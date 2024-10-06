#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
        }
};
bool binary_srch(int arr[],int start,int end,int find){
    while(start<=end){
            int mid=end+(start-end)/2;
            if(find==arr[mid])
            return true;
            else if(arr[mid]>find)
                end=mid-1;
                else
                start=mid+1;


            
        }
        return false;
};
bool findsum(int arr[],int x,int n){

    bubble_sort( arr, n);
for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
        int find=x-arr[i]-arr[j];

        
        if(binary_srch( arr, j+1,n-1, find)){
            return true;
        }
    }
}
return false;

    };
     bool threeNumber(int arr[],int x,int n){
        bubble_sort(arr,n);
        for(int i=0;i<n-2;i++){
            int ans=x-arr[i];
          int start=i+1,end=n-1;
          while(start<end){
              if(arr[start]+arr[end]==ans)
             return true;
              else if (arr[start]+arr[end]>ans)
              end--;
              else
              start++;

          }
        }
 return false;

     };


int main(){
    int arr[1000],n,x;
    cout <<"please enter the value for the num :";
    cin>>n;
    cout <<"please enter the value to be find the sum :";
    cin>>x;
    cout <<"please enter the value for the elemnt of the aray:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }/*
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x)
                cout<<"yes it is found :";
            
         
         
         if (findsum(arr, n, x)) {
        cout << "Yes, the triplet is found." << endl;
    } else {
        cout << "No, the triplet is not found." << endl;
    }
   }
        }
    }
    */
   if(findsum(arr,x,n)){
    cout <<" yes, the tripplet is found "<<endl;
   }
   else {
    cout <<" No, the tripplet i not found :"<<endl;
   }
   if(threeNumber(arr,x,n)){
    cout <<" yes, the tripplet is found "<<endl;
   }
   else {
    cout <<" No, the tripplet i not found :"<<endl;
   }

}
