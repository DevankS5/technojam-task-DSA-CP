#include <iostream>
using namespace std;

void generatePascalTriangle(int n) {
    for (int i = 1; i<= n ; i++) {
        int C = 1;
        for (int j = 1 ; j <= i; j++) {
            cout << C << " ";
            C = C * (i - j) / j;
        }
        cout << endl ;
    }
}
int main() {
    int n = 5;
    generatePascalTriangle(n);
    return 0;
}