#include<bits/stdc++.h>
using namespace std;
class cmplex{
    int real,img;
    public:
    cmplex(){

    }
    cmplex(int real,int img){
        this->real=real;
        this->img=img;

    }
    cmplex operator + (cmplex &c){
        cmplex ans;
        ans.real=real+c.real;
        ans.img=img + c.img;
        return ans;

    }
    cmplex operator - (cmplex &c){
        cmplex ans1;
        ans1.real=real-c.real;
        ans1.img=img-c.img;
        return ans1;

    }
    cmplex operator * (cmplex &c){
        cmplex ans;
        ans.real=real*c.real;
        ans.img=img*c.img;
        return ans;

    }
    void display(){
        cout<<real<<"+i"<<img<<endl;

    }
};
int main(){
    cmplex c1(2,3);
    c1.display();
cmplex c2(10,23);
c2.display();
cmplex c3=(c1+c2);
cmplex c4=(c1-c2);
cmplex c5=(c1*c2);
c3.display();
c4.display();
c5.display();
}