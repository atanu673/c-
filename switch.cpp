#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter a first letter of a name"<<endl;
    cin>>c;
    
    switch(c){
        case 'A':
        case 'a':
        cout<<"Atanu"<<endl;
        break;

        case 'P':
        case 'p':
        cout<<"Payal"<<endl;
        break;

         case 'K':
         case 'k':
         cout<<"Ajit"<<endl;
         break;
        
        case 'S':
        case 's':
        cout<<"Sneha"<<endl;
        break;

        default :
        cout<<"error!";
    }
       return 0;


    }