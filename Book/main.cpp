#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int num = 4;
    
    cout << "The variable num is " << num << endl;
    cout << "I will now increment num. \n \n";
    
    num++;
    
    cout << "The variable num is " << num << endl;
    cout << "I will increment num again. \n \n";
    
    ++num;
    cout << "Now the variable num is " << num << endl;
    cout << "I will now decrement num. \n\n";
    
    num--;
    cout << "Now the variable num is " << num << endl;
    cout << "I will now decrement num again. \n\n";
    
    --num;
    cout << "Now the variable num is " << num << endl;
    return 0;
}

