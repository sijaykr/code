#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int value){
        data=value;
        next=NULL;
    }
};
node *makelin(int arr[],int index,int size){
if(index==size){
    return NULL;

};
node *temp;
temp=new node(arr[index]);
temp->next=makelin(arr,index+1,size);
return temp;



}



int main(){
    node *head;
    head=NULL;
    int arr[]={2,3,4,12,34};
    head=makelin(arr,0,5);
if(head!=NULL){
    node*temp1;
    temp1=head;
    head=head->next;
    delete temp1;

}
    node*temp;
    temp=head;
    
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


}