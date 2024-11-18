#include <iostream>
using namespace std;

int climbStairs(int n) {
    if (n == 1) return 1; 
    int a = 1 ; int b = 2 ; 
    for (int i = 3 ; i <= n ; i++) {
        int now = a + b ;   
        a = b ; 
        b = now ; 
    }
    return b;
}

int main() {
    int n = 2; 
    cout << climbStairs(n); 
    return 0;
}
