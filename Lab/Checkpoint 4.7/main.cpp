#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    double payRate, finalpay;
    
    cout << "What is your pay rate?" << endl;
    cin >> payRate;
    finalpay = payRate * 0.5;
    
    if(payRate > 40)
    {
        finalpay = payRate * 1.5;
    }
    cout << finalpay;
    return 0;
}

