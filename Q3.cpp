#include <iostream>
using namespace std;

int range_bitwise_and(int left, int right) {
    int shift = 0; 
    while (left < right){
        left >>= 1 ;  //right shift
        right >>= 1 ;   // left shioft 
        shift++ ;     
    }
    return left << shift;
}
// New Concept 4 me here 
// >>= satnds for right shift assignment
// <<= stands for left shift assignment
int main() {
    int test_cases[][2] = {
        {5, 7},          // Output: 4
        {0, 0},          // Output: 0
        {1, 2147483647}  // Output: 0
    };

    // Run Test Cases
    for (auto &test_case : test_cases) {
        cout << range_bitwise_and(test_case[0], test_case[1]) << endl;
    }

    return 0;
}
