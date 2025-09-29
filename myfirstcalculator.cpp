#include <iostream>
using namespace std;

int main(){
    float mynum, secondnum;
    int ol;
    
    cout << "[1]Addition\n[2]Subtraction\n[3]Multiplication\n[4]Division\n";
    cout << "Enter first number:";
    cin >> mynum;
    cout << "Enter second number:";
    cin >> secondnum;
    cout << "Operation:";
    cin >> ol;
    
    if (ol == 1) {
    cout << "answer:" << mynum + secondnum;
    }
    else if (ol == 2){
    cout << "answer:" << mynum - secondnum;
    }
    else if (ol == 3){
    cout << "answer:" << mynum * secondnum;
    }
    else if (ol == 4) {
    cout << "answer:" << mynum / secondnum;
    }
    return 0;
}