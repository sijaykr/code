
#include<bits/stdc++.h>
using namespace std;
int main(){
class Solution {
public:
    string defangIPaddr(string address) {
        int index=0;string ans;
        while(index<address.size()){
            if(address[index]=='.'){
                ans=ans+"[.]";
            }
            else
            ans=ans+address[index];

index++;

        }
        return ans;
        
    }
};


}