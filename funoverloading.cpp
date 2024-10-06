#include<bits/stdc++.h>
using namespace std;
class area{
    public:
    int calculatearea(int r){
        cout<<" area of circle is :"<<endl;
        return 3.14*r*r;
    }
    int calculatearea(int a,int b){
        cout<<"area of rectangle is :"<<endl;
        return a*b;
    }
};
int main(){
    area a1,b1;
    cout<<a1.calculatearea(18)<<endl;
    cout<<b1.calculatearea(2,18)<<endl;
    ///cout<<a1.calculatearea("shsks;")<<endl;
    // complie  time error 

}