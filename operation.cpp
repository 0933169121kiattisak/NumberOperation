
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    double a,b;
    int operation;
    cout << "Enter the first 3 values, the first 2 of which are for the search quantity. The final value for operation" << endl;
    
    cin >> a >> b;
    
    
    cout << "First Value: " << a << "Second Value: " << b  << endl;

    cout << "operation: " << endl;
    cin >> operation;

    switch(operation){
        case 1:
            cout << a + b << endl;
            break;
        case 2:
            cout << a - b << endl;
            break;
        case 3:
            cout << a * b << endl;
            break;
        case 4:
            if(b != 0){
                cout << a / b << endl;
            }else{
                cout << "Error";
            }
            
            break;
        case 5:
            if(b != 0){
                cout << fmod(a,b) << endl;
            }else{
                cout << "Error";
            }
            
            break;
        case 6:
            cout << pow(a,b);
            break;
        case 7:
            cout << (a + b) / 2.0;
            break;
        default:
            cout << "Error";
            break;
    }

    

    return 0;
}