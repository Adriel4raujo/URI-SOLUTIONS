//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;

int main() {
  
  int n;
  cin >> n;
  while (n--) {
    int k; cin >> k;
    set<string> a;
    string linha;
    while (k--) {
      cin >> linha;
      a.insert(linha);
    }

    if (a.size() > 1)
      cout << "ingles" << endl;
    else
      cout << *(a.begin()) << endl;

  }

  return 0;
}
