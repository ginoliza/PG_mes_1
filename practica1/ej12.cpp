#include <bits/stdc++.h>

using namespace std;

string calcular(string e, char operacion) {
  int start, end;
  for (int i = 0; i < e.length(); ++i) {
    if (e[i] == operacion) {
      string izq;
      for (int j = i - 1; j >= 0; --j) {
        if (!isdigit(e[j]) && e[j] != '.') {
          start = j + 1;
          izq = e.substr(j + 1, i - j - 1);
          break;
        }
        
        if (j == 0) {
          start = j;
          izq = e.substr(j, i - j);
          break;
        }
      }
      
      string der;
      for (int j = i + 1; j < e.length(); ++j) {
        if (!isdigit(e[j]) && e[j] != '.') {
          end = j;
          der = e.substr(i + 1, j - i - 1);
          break;
        }
        
        if (j == e.length() - 1) {
          end = e.length();
          der = e.substr(i + 1, j - i);
          break;
        }
      }
      
      double l = stod(izq);
      double r = stod(der);
      
      double resultado = l + r;
      resultado = (operacion == '-') ? l - r : resultado;
      resultado = (operacion == '*') ? l * r : resultado;
      resultado = (operacion == '/') ? l / r : resultado;
      
      e = e.substr(0, start) + to_string(resultado) + e.substr(end);
    }
  }
  
  return e;
}

string evaluar(string e) {
  // eliminar espacios
  e.erase(remove(begin(e), end(e), ' '), end(e));
  
  // eliminar primer y ultimo parentesis
  if (e[0] == '(' && e[e.length() - 1] == ')') {
    e = e.substr(1, e.length() - 2);
  }
  
  // evaluar '()'
  bool found = true;
  while (found) {
    found = false;
    int start = -1, end = -1;
    for (int i = 0; i < e.length(); ++i) {
      if (e[i] == '(') {
        found = true;
        start = i;
      }
      
      if (e[i] == ')') {
        end = i;
        break;
      }
    }
    
    if (found) {
      e = e.substr(0, start) + evaluar(e.substr(start, end - start + 1)) + e.substr(end + 1);
    }
  }
  
  // evaluar '*', '/', '+', '-' en este orden
  e = calcular(e, '*');
  e = calcular(e, '/');
  e = calcular(e, '+');
  e = calcular(e, '-');
  return e;
}

int main() {
  string expression;
  getline(cin, expression);
  cout << evaluar(expression) << "\n";  
  return 0;
}
