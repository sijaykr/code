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
node *creatlinkd(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    node *temp;
    temp=new node(arr[index]);
    temp->next=creatlinkd(arr,index+1,size);
    return temp;

}
node *deltnod(node* cur,int x){
    if(x==1){
        node *temp=cur->next;
        delete cur;
        return temp;

    }
    cur->next=deltnod(cur->next,x-1);
    return cur;
}
int main(){
    node* head1;
    head1 =NULL;
    int arr[]={ 3,24,42,1,33};
    head1=creatlinkd(arr,0,5);
    /*
    int x;
    cout<<"please enter the value for the index to be deleted ";
    cin>>x;
   
if(x== 1){
    node*temp;
    temp=head1;
    head1=head1->next;
    delete temp;

}
else{
    x--;
    node * cur=head1;
    node *prev=NULL;
    
    while(x--){
    prev=cur;
    cur=cur->next;

    };
    prev->next=cur->next;
    delete cur;
};*/
//node *head;

head1=deltnod(head1,3);

    node *temp=head1;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


}