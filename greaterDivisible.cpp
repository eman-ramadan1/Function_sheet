/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int greaterDivisible(int n, int x) {
    return ((n + x - 1) / x) * x;
}

int main() {
    int n, x;
    cout << "Enter n and x: ";
    cin >> n >> x;

    int result = greaterDivisible(n, x);
    cout << "The smallest number ≥ " << n << " that is divisible by " << x << " is: " << result << endl;

    return 0;
}
