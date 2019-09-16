
#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char** argv) {
    
    int price;
    double discountRate, finalPrice;
    
    discountRate = 0.1;
    
    cout << "What is the price?";
    cin >> price;
    
    if(price > 500)
    {
        discountRate = 0.2;
    }
    finalPrice = discountRate * price;
    cout << finalPrice;
    
    

    return 0;
}

