#include <bits/stdc++.h>
using namespace std;
 
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false; 
    return (ceil(log2(n)) == floor(log2(n)));
}
 
int main()
{    
    isPowerOfTwo(31) ? cout << "Yes" << endl : cout << "No" << endl
    return 0;
}