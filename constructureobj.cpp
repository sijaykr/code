#include<bits/stdc++.h>
using namespace std;
class customer{
string name;
int acc_no,balance;
public:
///  default cinstructure :
customer(){
   // cout<<"hello dada ";
   name="dada";
   acc_no=10;
   balance=1000;
}
    void display(){

cout<<name<<" "<<balance<<" "<<acc_no<<endl;
    }
// parmateric constructure 
 customer(string a,int b){
    name=a;
    acc_no=b;
    
}
// overlaode constructure 
customer(string name,int acc_no,int balance){
    this->name=name;
    this->acc_no=acc_no;
    this->balance=balance;
}
// inline constructure 
/*inline customer(string c,int a,int b):name(c),acc_no(b),balance(a){

}*/
};
int main(){
customer c2,c3;
//c1.display();
c2.display();
c3.display();
customer c1("sanjay",10000,18);
c1.display();
customer c4("raja",300);
c4.display();
}