/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<cmath>
using namespace std;
void TwoNubmers(int n , int x){
 double div1= ( n )/ x;
   
  cout<<"floor "<<n<<" / "<<x <<"="<< floor(div1)<<endl;
  cout<<"ceil "<<n<<" / "<<x <<"="<<ceil (div1)<<endl;
  cout<<"round  "<<n<<" / "<<x <<"="<< round (div1)<<endl;
    
}

int main()
{
    int n ,x;
    cin>>n>>x;
 TwoNubmers(n,x);
    return 0;
}
