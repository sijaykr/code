#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int value){
        data=value;
        next=NULL;

    }
};
node *createlinkd(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    node *temp;
    temp=new node(arr[index]);
    temp->next= createlinkd(arr,index+1,size);
    return temp;
}


int main(){
    node *head;
    head=NULL;
    int arr[]={3,4,31,24,212};
    head=createlinkd(arr,0,3);
    //only work when there is no any elmnt is present in the linked list ;
    if(head!=NULL){
        // only one lemnt is presenrt 
        if(head->next==NULL){
            delete head;
            head=NULL;
        }

        /// if more than one elemnt 
else{
    node*cur=head;
    node*prev=NULL;
    while(cur->next!=NULL){
        prev=cur;
        cur=cur->next;
    }
    prev->next=cur->next;
    delete cur;
}
    }
    node*temp1;
    temp1=head;
    while(temp1){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }

}