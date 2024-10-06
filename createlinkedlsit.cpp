#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node * next;
node(int value){
    data=value;
    next=NULL;

}
};

 node * createlink(int arr[],int index,int size){
    if(index==size){
        return NULL;


    }
 node *temp;
    temp=new node(arr[index]);
    temp->next=createlink(arr,index+1,size);
    return temp;

 }



int main(){

node * head;
int arr[]={2,4,6,8,10,12,43,124};
head=createlink(arr,0,8);
 // print the value ;
node *temp;
temp=head;
while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}