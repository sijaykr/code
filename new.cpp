#include<bits/stdc++.h>
using namespace std;
class human{
    protected:
    string name;
    int age;
    public:
    human(string name,int age){
        this->name=name;
        this->age=age;
    }
    void show(){
cout<<"hello how r you -- now i mworking :"<<endl;
    }

human (){
    cout<<"hello i m human class constructure:"<<endl;
}
};
class student :public human{ 
    int roll_no,fees;
public:
student (){

    cout<<"hello i m student class constructure :\n";
}
    student(string name,int age,int roll_no,int fees):human(name,age){
    
        this->roll_no=roll_no;
        this->fees=fees;
    }



void show(){
    cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl;
}
};


int main(){
    student s1("raja",100,22,123);


    s1.show();

}