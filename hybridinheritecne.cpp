#include<bits/stdc++.h>
using namespace std;
class student {
    public:
    void spr(){
        cout<<"hello i m student :"<<endl;
    }
    };
    class male{
    public:
    void printmale(){
        cout<<"hello i m male :"<<endl;
    }
};
class female{
public:
void printfemale(){
    cout<<"hello i m female :"<<endl;
}
};

    class boy:public student,public male{
        public:
        void printboy(){
            cout<<"hello i boy :"<<endl;
        }
    };
    class girl:public student,public female{
        public:
        void printgirl(){
            cout<<"hello i m girl :"<<endl;
        }

    };

int main(){
    girl g1;
    boy b1;
    b1.printboy();
    b1.spr();
    b1.printmale();
g1.printfemale();
g1.printgirl();
g1.spr();



}