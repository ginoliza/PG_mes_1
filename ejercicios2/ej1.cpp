#include <bits/stdc++.h>

using namespace std;

unsigned int getModulo(unsigned int n, unsigned int d){
  return ( n & (d - 1) );
}

int main()
{
  unsigned int n = 6; 
  
  unsigned int d = 4;
  cout<< n <<" modulo "<<d <<" is "<< getModulo(n, d);

  return 0;
}