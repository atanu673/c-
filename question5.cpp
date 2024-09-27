#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter 1st no:";
    cin>>num1;
    cout<<"enter 2nd no:";
    cin>>num2;
    cout<<"before swapping:"<<endl;
    cout<<"num1:"<<num1<<endl;
    cout<<"num2:"<<num2<<endl;
    num1=num2;
    num2=num1;
    cout<<"after swapping = " <<endl;
    cout<<"num1 :"<<num1<<endl;
    cout<<"num2 :"<<num2<<endl;
    return 0;
}