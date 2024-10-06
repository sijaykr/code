/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[100];
    cout<<"please enter the value for the num:";
    cin>>n;
    cout<<"please enter the value for the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int suffix=arr[n-1];
for(int i=n-2;i>=0;i--){

    int ans =suffix-arr[i];
    suffix=max(arr[i],ans);
}

cout<<"our answer is :"<< suffix<<" ";
}*/#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, arr[100];
    
    // Prompt the user to enter the number of elements in the array
    cout << "Please enter the value for the num: ";
    cin >> n;

    // Prompt the user to enter the elements of the array
    cout << "Please enter the value for the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
/*
    // Initialize the maximum suffix value with the last element of the array
    int max_suffix = arr[n-1];
    // Initialize the maximum difference to the smallest possible integer value
    int max_diff = INT_MIN;

    // Traverse the array from the second last element to the first element
    for(int i = n-2; i >= 0; i--) {
        // Calculate the difference between the maximum suffix value and the current element
        int diff = max_suffix - arr[i];
        // Update the maximum difference if the current difference is larger
        max_diff = max(max_diff, diff);
        // Update the maximum suffix value to be the maximum of the current suffix and the current element
        max_suffix = max(max_suffix, arr[i]);
    }

    // Output the final maximum difference
    cout << "Our answer is: " << max_diff << endl;
*/
int maxdif=INT_MIN;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        maxdif=max(maxdif,arr[j]-arr[i]);
    }
}
cout<<" ans ois :"<<maxdif;
    return 0;
}
