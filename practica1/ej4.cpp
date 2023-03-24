#include <bits/stdc++.h>

using namespace std;

// eliminar duplicados
void remove(vector<int> &v)
{
    auto end = v.end();
    for (auto it = v.begin(); it != end; ++it) {
        end = remove(it + 1, end, *it);
    } 
    v.erase(end, v.end());
}
 
int main()
{
    vector<int> v = { 5, 2, 1, 3, 4, 2, 2, 4, 5, 5, 6 }; 
    remove(v); 
    sort(v.begin(), v.end());    
    // imprimir
    for (auto it = v.cbegin(); it != v.cend(); ++it) {
        cout << *it << ' ';
    }    
    return 0;
}
