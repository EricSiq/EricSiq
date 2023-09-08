#include <iostream>
#include <limits>
using namespace std;
int main() {
    cout << "Range of char is: " <<CHAR_MIN<<" to "<<CHAR_MAX<<endl;
    cout << "Range of short int is: " <<SHRT_MIN<<" to "<<SHRT_MAX<<endl;
    cout << "Range of long int is: " <<LONG_MIN<<" to "<<LONG_MAX<<endl;
    cout << "Range of double is: " <<numeric_limits<double>::min() << " to " <<numeric_limits<double>::max()<<endl;

    return 0;
}
