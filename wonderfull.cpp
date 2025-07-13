/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isOdd(int n) {
    return n % 2 == 1;
}

bool isBinaryPalindrome(int n) {
    string binary = "";
    while (n > 0) {
        binary += (n % 2) + '0';  
        n /= 2;
    }
    string reversed = binary;
    reverse(reversed.begin(), reversed.end());
    return binary == reversed;
}

int main() {
    int N;
    cin >> N;

    if (isOdd(N) && isBinaryPalindrome(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
