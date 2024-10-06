#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int value ){
        data=value;
        next=NULL;
    }
};
node * creatlink(int arr[],int index,int size,node *prev){
    // base case
    if(index==size){
        return prev;
    }

node *temp;
temp=new node(arr[index]);
temp->next=prev;
return creatlink(arr,index+1,size,temp);
}
int main(){

node *head;
head=NULL;
int arr[]={2,4,5,6,19};
  head=creatlink(arr,0,5,head);
  int x=3;
  int value =30;
  node *temp1=head;
  
  x--;
  while(x--){
temp1=temp1->next;
  }
  node *temp2=new node(value);
  temp2->next=temp1->next;
  temp1->next=temp2;
 
node *temp;
temp=head;

while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}