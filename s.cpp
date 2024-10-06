#include<bits/stdc++.h>
using namespace std;
int main(){
void KMP_match(vector<int>&lps,string s){
    int suf=1,pre=0;
    while(suf<s.size()){
        if(s[pre]==s[suf]){
            lps[suf]=pre+1;
            suf++,pre++;
        }
        else{
            if(pre==0){
                lps[suf]=0;
                suf++;
            }
            else
            pre=lps[pre-1];
        }

    }

}

    int strStr(string haystack, string needle) {
        vector<int>lps(needle.size(),0);
        findlps(lps,needle);
        int first=0,second=0;
        while(first<haystack.size()&&second<needle.size()){
            if(haystack[first]==needle[second]){
                first++,second++;
            }
            else
            {
                if(second==0)
                first++;
                else
                second=lps[second-1];
            }
        }
        if(second==needle.size())
        return 1;
        return -0;
        
    }
}
