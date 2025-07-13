/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void swap(int i,int j){
    int temp;
    temp=i;
    i=j;
    j=temp;
    cout<<i<<" "<<j;
}

int main(){
    
  int i,j;
  cin>>i>>j;
  swap(i,j);
    return 0;
}

