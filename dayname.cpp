#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    
    char c;
    cout<<"please enter the name of charcter for the c :";
   cin>>c;
    switch(c){
        case 'a':
        cout<<" april:";

        cout<<"august :";
        break;
        case 'd':
        cout<<"december :";
        break;
        case 'f':
        cout<<" february :";
        break;
        case 'j':
        cout<<" january :"<<endl;
        cout<<"june :"<<endl;
        cout<<"july :"<<endl;
        break;
        case 'm':
        cout<<"march :";
        cout<<"may :";
        break;
        case 'n':
        cout<<" november :";
        break;
        case 'o':
        cout<<"october :";
        break;
        case 's':
        cout<<" september :";
        default :
        cout<<"please enter the valid character :";

    }
  

    
        cout<<"please enter the value for the numbe n :";
    cin>>n;
    switch(n){
        case 1:
        cout<<" monday:";
        break;
        case 2:
        cout<<" tuesday :";
        break;
        case 3:
        cout<<" wednesday :";
        break;
        case 4:
        cout<<" thursaday :";
        break;
        case 5:
        cout<< " friday :";
        break;
        case 6:
        cout<< "saturday :";
        break;
        case 7:
        cout<<"sunday :";
        break;
        default :
        cout<<"plese enter the valid date :";

    }

}