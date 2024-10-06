#include<bits/stdc++.h>
using namespace std;
bool palindromecheck(string s,int start,int end){
if(start>=end)
return 1;
if(s[start]!=s[end])
return 0;
return palindromecheck(s,start+1,end-1);

}
int countvowel(string s,int index){
    if(index==-1)
    return 0;

    if(s[index]=='a'||s[index]=='e'||s[index]=='i'||s[index]=='o'||s[index]=='u')

        return 1 + countvowel(s,index-1);
    
    else 


   return countvowel(s,index-1);
    

}
void print(string str){
    for(int i=0;i<=str.size()-1;i++){
        cout<<str[i];
    }
    

}
void reva(string &s,int start,int end){
    if(start>=end)
    return  ;
    char c=s[start];
    s[start]=s[end];
    s[end]=c;
     reva(s,start+1,end-1);

}
void lowrtupr(string &s,int end){
    if(end==-1)
    return;
    s[end]='A'+ s[end]-'a';
    lowrtupr(s,end-1); 

}
int main(){

    string str;
    cout<<"please enter the string to be checked is palindrome or not :";
    cin>>str;
    int res=palindromecheck(str,0,str.size()-1);
    if(res>0){
        cout<<"given string is plaindrome "<<endl;
    }
    else
    cout<<" not palindrome :"<<endl;

cout<<"number of vowel in given string is :"<<countvowel(str,str.size()-1)<<endl;
lowrtupr(str,str.size()-1);
cout<<" our changed from lower to upper "<< str<<endl;
reva(str,0,str.size()-1);
cout<<"our revrsed strimg "<< str<<endl;

    



}