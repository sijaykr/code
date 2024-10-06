#include<bits/stdc++.h>
using namespace std;
class customer{
    string name;
    int acc_no,balance;
  
   static int totalbalance ;
    static int total_cust;
     public : 
    customer(string name,int acc_no,int balance){
        this->name=name;
        this->acc_no=acc_no;
        this->balance=balance;
        total_cust++;
        totalbalance+=balance;
    }
void display(){
    cout<<name<<" "<<acc_no<<" "<<balance<<" "<< total_cust<<endl;
}
void totalcust(){
    cout<<" customer is "<<total_cust<<endl;
}
void static acces(){
    cout<<"total number of customer "<<total_cust<<endl;
    cout<<"toatal balance is "<<totalbalance<<endl;
}
void deposite(int amount){
    if(amount>0){
        balance+=amount;
        totalbalance=totalbalance+amount;

    }
}
void withdraw(int amount){
    if(amount<=balance&&amount>0){
        balance-=amount;
        totalbalance-=amount;
    }
}



};
int customer::total_cust=0;
int customer::totalbalance=0;
int main(){
//customer:: total_cust=5;
//c1.totalcust();


    customer c1("raja",111,101010);
   // c1.display();
   //c1.totalcust();
    customer c2("shubham",112,9999);
    //c1.totalcust();
   // c2.display();
    c1.display();
   
   customer c3("sanjay",1112,89890);
   c3.display();
customer::acces();
c1.deposite(1000);
customer::acces();
c2.withdraw(9000);
customer::acces();
c2.display();

}