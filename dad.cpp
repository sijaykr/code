#include<bits/stdc++.h>
using namespace std;
class student {
    public:
    string name;
    int age,roll;
    string grade;

};
class a{
   
    char e;
int b;
int c;
 char d; 

};
int main(){
    a obj;
    cout<<"size of object is "<<sizeof(obj)<<endl;
  student   *s =new student ;
  (*s).name="SAnjay";
  (*s).age=21;
  (*s).roll=48;
  (*s).grade="A+";
  cout<<"name :"<<" "<<s->name<<" "<<" age :"<<s->age<<" "<<" roll :"<< s-> roll<<" "<<"grade :"<<s-> grade<<endl;

}