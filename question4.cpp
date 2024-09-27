#include<iostream>
using namespace std;
int main(){
    int dividend,divisor,quotient,remainder;
    cout<< "enter the dividend";
    cin >> dividend;
    cout << "enter the divisor";
    cin >> divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout << "the Q is:" << quotient<<endl;
    cout << "The R is:" << remainder<<endl;
    return 0 ;
}
