#include<bits/stdc++.h>
using namespace std;
class person{
    protected:
 string name;
 public:
 void introduce(){
    cout<<"hello my name is "<<name<<endl;
 }
};
class employee:public person{
    protected:
int salary ;
public:
void mysalry(){
    cout<<"my salary is "<<salary<<endl;
}

};
class manger:public employee{
public:
string dept;
int no_of_emp;

manger(string name,int salary,string dept,int no_of_emp){
    this->name=name;
    this->salary=salary;
    this->dept=dept;
    this->no_of_emp=no_of_emp;


}
void mang(){
    cout<<"i m leading the department "<< dept<<" and no of employee is "<<no_of_emp<<endl;
}

void disp(){
    cout<<name<<" "<<salary<<" "<<dept<<" "<<no_of_emp<<endl;
}
};

int main(){
manger s1("raja ",1000,"sde",10);
s1.introduce();
s1.mysalry();
s1.mang();
s1.disp();
}