#include <iostream>
using namespace std;
int main() {
    double n1, n2, n3;

    cout<<"Enter three numbers for numbers to be compared: ";
    cin>>n1>>n2>>n3;

    if (n1==n2 && n2==n3){
    	cout<<"All three numbers are equal."<<endl;
	}
	else if (n1>n2 && n1>n3) {
        cout<<"The greatest number is: "<<n1<<endl;
        if (n2>n3) {
        	cout<<"The next greatest number is: "<<n2<<endl;
        	cout<<"The smallest number is: "<<n3<<endl;
		}
		else if(n3>n2){
			cout<<"The next greatest number is: "<<n3<<endl;
			cout<<"The smallest number is: "<<n2<<endl;
		}
		else{
			cout<<n2<<" and "<<n3<<" are equal."<<endl;
		}
    } 
	else if (n2>n1 && n2>n3) {
        cout<<"The greatest number is: "<<n2<<endl;	
        if (n1>n3) {
        	cout<<"The next greatest number is: "<<n1<<endl;
        	cout<<"The smallest number is: "<<n3<<endl;
		}
		else if(n3>n1){
			cout<<"The next greatest number is: "<<n3<<endl;
			cout<<"The smallest number is: "<<n1<<endl;
		}
		else{
			cout<<n1<<" and "<<n3<<" are equal."<<endl;
		}
    } 
	else {
        cout<<"The greatest number is: "<<n3<<endl;
        if (n1>n2) {
        	cout<<"The next greatest number is: "<<n1<<endl;
        	cout<<"The smallest number is: "<<n2<<endl;
		}
		else if(n2>n1){
			cout<<"The next greatest number is: "<<n2<<endl;
			cout<<"The smallest number is: "<<n1<<endl;
		}
		else{
			cout<<n1<<" and "<<n2<<" are equal."<<endl;
		}
    }
    return 0;
}
