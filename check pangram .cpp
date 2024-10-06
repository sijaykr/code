
#include<bits/stdc++.h>
using namespace std;
 
    bool checkIfPangram(string sentence) {
        vector<bool> alpha(26,0);
        for(int i=0;i<sentence.size();i++){
            alpha[sentence[i]-'a']=1;
        }
        for(int i=0;i<alpha.size();i++){
            if(alpha[i]==0)
            return 0;

        }
        return 1;
        
    }
    int main(){
        cout<<"please enter the string :";
        string s1;
        cin>>s1;
        checkIfPangram(s1);
    }