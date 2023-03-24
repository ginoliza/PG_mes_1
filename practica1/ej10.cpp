#include <bits/stdc++.h>

using namespace std;

string letra = " abcdefghijklmnopqrstwxyz";
string numero = " 0123456789";

bool sustituir(string &special){
    if(special.length() != 3) return 0;
    if( letra.find(special[0]) ){
        if( numero.find(special[1]) ){
            if( numero.find(special[2]) ){
                special = "***";
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    string p = "a70";
    sustituir(p);
    cout << p<< endl;
    return 0;
}