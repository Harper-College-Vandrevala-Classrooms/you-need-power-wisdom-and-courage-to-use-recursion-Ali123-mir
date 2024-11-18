#include <iostream>
using namespace std;

class TriangleNumberCalculator {
public:
    
    int value(int n) {
        if (n <= 1)
            return n;
        return n + value(n - 1); 
    }

    
    int add(int n, int m) {
        return value(n) + value(m);
    }

    
    int subtract(int n, int m) {
        return value(n) - value(m);
    }
};

int main() {
    TriangleNumberCalculator calculator;

    
    cout << "value(1): " << calculator.value(1) << endl; 
    cout << "value(2): " << calculator.value(2) << endl; 
    cout << "value(4): " << calculator.value(4) << endl; 

    
    cout << "add(1, 1): " << calculator.add(1, 1) << endl;  
    cout << "add(2, 3): " << calculator.add(2, 3) << endl;  
    cout << "add(4, 2): " << calculator.add(4, 2) << endl; 

   
    cout << "subtract(1, 1): " << calculator.subtract(1, 1) << endl; 
    cout << "subtract(2, 3): " << calculator.subtract(2, 3) << endl; 
    cout << "subtract(4, 2): " << calculator.subtract(4, 2) << endl; 

    return 0;
}
