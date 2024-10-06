#include<bits/stdc++.h>
#include<iostream>
using namespace std;

char convert(char name){
    char ans=name-'a'+'A';
    return ans;
}

int main(){
    char c;
    cout<<"please enter the value for the character :";
    cin>>c;
    cout<<" our converted character is "<<convert(c);
}
