#include<bits/stdc++.h>
using namespace std;
int main(){
class Solution {
public:
    string sortVowels(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            //store lower vowel a e i o u
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                lower[s[i]-'a']++;
                //we can put # in place off vowel
                s[i]='#';
            }
            //upper vowel store A E I O U
            else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                upper[s[i]-'A']++;
                //we can put # in place off vowel
                s[i]='#';
            }
        }
        string vowel;
        //upper vowel store in the string
        for(int i=0;i<26;i++)
        {
            char c='A'+i;
            while(upper[i]){
            vowel+=c;
            upper[i]--;
            }
        } //lower vowel store in the string
         for(int i=0;i<26;i++)
        {
            char c='a'+i;
            while(lower[i]){
            vowel+=c;
            lower[i]--;
            }
        }
        int first=0,second=0;//we can create a two pointerfirst indicate string s and second indicate vowel strig
        while(second<vowel.size())
        {
            if(s[first]=='#'){
            s[first]=vowel[second];
            second++;
            }
            first++;
        }
        return s;
    }
};}