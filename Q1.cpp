#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string name;
    int age;
    string collname;

    cout<<"Enter your full name:";
    getline(cin, name);

    cout<<"Enter your age:";
    cin>>age;
    
	cin.ignore();
    cout <<"Enter your college name: ";
    getline(cin, collname);

    cout <<"Hello " <<name<<",\nI see you are "<<age<<" years old and are currently studying at "<<collname <<"."<<endl;
    return 0;
}
