#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double n1, n2;
    char operation;

    cout<<"Enter two numbers to conduct mathematical operations:";
    cin>>n1>>n2;

    cout<<"Enter an operation:\n + for addition,\n - for subtraction,\n * for multiplication,\n / for division,\n 'abs' for absolute value function): ";
    cin>>operation;

    switch (operation) {
        case '+':
            cout<<"Result of addition: "<< n1+n2 <<endl;
            break;
        case '-':
            cout <<"Result of subtraction: " << n1-n2 <<endl;
            break;
        case '*':
            cout <<"Result of multiplication: " <<n1*n2<<endl;
            break;
        case '/':
            if (n2!=0) {
                std::cout <<"Result of division:"<<n1/n2<<endl;} 
			else {
                cout <<"Division by zero is impossible."<<endl;}
            break;
        case 'abs' or 'ABS':
            cout <<"Absolute value of num1: "<<abs(n1)<<endl;
            cout <<"Absolute value of num2: "<<abs(n2)<<endl;
            break;
        default:
            cout <<"Invalid operation."<<endl;
    }

    return 0;
}
