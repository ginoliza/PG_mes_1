#include <bits/stdc++.h>

bool esPrimo(int numero) {
  if (numero == 0  numero == 1  numero == 4) return false;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return false;
  }
  return true;

}

int main() {
  int numero;
  std::cin >> numero;
  if (esPrimo(numero)) {
    std::cout << "Es primo";
  } else {
    std::cout << "NO es primo";
  }
}