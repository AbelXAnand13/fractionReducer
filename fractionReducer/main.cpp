#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int gcf = 1;
    int greaterNumber;
    if (a > b) {
        greaterNumber = a;
    }
    else if (a < b) {
        greaterNumber = b;
    }
    else {
        gcf = a;
    }
    return gcf;
}

int main() {
    int a = 98, b = 98;
       printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
       return 0;

}
