#include <iostream>
using namespace std;

int gcf(int a, int b)
{
    int gcf;
   if (a == 0)
       return b;
    
    if (b == 0)
        return a;
    if (a == b) {
        gcf = a;
    }
    while (a != b){
    
    if (a>b) {
    a = a-b;
    }
    if (b > a) {
    b = b-a;
    }
        if (a < 0 || b < 0) {
            gcf = 1;
        }
        if (a == b) {
            gcf = a;
        }
    }
    return gcf;
}

int main() {
    int numerator;
    int denominator;
    cout << "Enter the Numerator\n";
    cin >> numerator;
    cout << "Enter the denominator\n";
    cin >> denominator;
    cout << gcf(numerator, denominator) << "\n";

}
