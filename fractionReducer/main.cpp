#include <iostream>
using namespace std;

void gcf(int num, int den) {
    int gcf = 1;
    for (int i = 0; 0 < i; i--) {
        if (num % i==0 && den % i==0) {
            gcf = i;
            break;
        }
        cout << gcf;
    }
}

int main(int argc, const char * argv[]) {
    gcf(4,8);
}
