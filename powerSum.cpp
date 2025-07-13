/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}


int calculateSum(int x, int n) {
    int sum = 0;
    for (int i = 0; i <= n; i += 2) {
        if (i == 0) {
            sum += power(x, i) - 1;  
        } else {
            sum += power(x, i);     
        }
    }
    return sum;
}

int main() {
    int x, n;
    cin >> x >> n;

    int result = calculateSum(x, n);
    cout << result << endl;

    return 0;
}
