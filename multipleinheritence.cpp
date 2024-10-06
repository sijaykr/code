#include<bits/stdc++.h>
using namespace std;
class youtuber{
    public:

    
    string wrk;
    void work(){
        cout<<"hello i work as "<<wrk<<endl;
    }
    youtuber(){
        cout<<"hello i m youtuber "<<endl;
    }
    };
    class teacher{
        public:
string spec;
void teacchin(){
    cout<<"hello i teaching   the subject "<<spec<<endl;
}
teacher(){
    cout<<"hello i m teacher "<<endl;
}
    };
    class thecoder:public youtuber,public teacher {
        public:
        int salary;
        void mysalry(){
            cout<<"hello my salary is "<<salary<<endl;
        }

thecoder(){
    cout<<"hello i m the coder "<<endl;
}
thecoder(string wrk,string spec,int salary){
    this->wrk=wrk;
    this->spec=spec;
    this->salary=salary;


}
void display(){
    cout<<wrk<<" "<<spec<<" "<<salary<< endl;
}
    };
int main(){

    thecoder s1("contentcreator","maths",1029303);
    s1.work();
    s1.teacchin();
    s1.mysalry();
    s1.display();
}