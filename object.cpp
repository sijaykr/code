#include<iostream>
using namespace std;
class student{
private:
    string name;
    int age;
    int roll ;
    string grade;
    public:
    void setname(string m){
        name=m;
    }
    void setage(int n){
        age=n;
    }
    void setroll(int n){
        roll=n;
    }
    void setgrade(string s){
        grade=s;
    }
    void  getname() {
        if(name=="")
        cout<< "inavlid please enter the valid detail of  name "<<endl;
        else
        cout<<name<<endl;
    }
    void getroll() {
        cout<< roll<<endl;;
    }
    int getage() {
    return age;
}
void getgrade(int m){
if(m==123)
cout<<grade<<endl;
else
cout<<"please eter the valid code for  get grade"<<endl;
}
};
int main(){
    student s1;
 s1.setname("Sanjay");
 s1.setroll(48);
 s1.setgrade("A+");
 s1.setage(21);
 s1.getname();

 cout<<"our information is "<<endl;
 cout<<"our name is :";
s1.getname();
cout<<"our roll is ";
s1.getroll();
cout<<"our age is: "<<s1.getage()<<endl;;
cout<<"our grade is :";
s1.getgrade(12);



 
/*
    s1.name="sanjay";
    s1.age=21;
    s1.roll=48;
    s1.grade="A+";
cout<<"our information is :"<<endl;
cout<<s1.name<<" "<<s1.age<<" "<<s1.grade<<endl;
*/
}