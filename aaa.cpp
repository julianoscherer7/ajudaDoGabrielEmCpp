#include <iostream>
#include <string>
using namespace std;

int main () {
// Declaração do array de letras do alfabeto
string alphabet[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

// imprimir letras separadas por vírgula na mesma linha usando for
for (int i = 0; i < sizeof(alphabet) / sizeof(alphabet[0]); ++i) {
    cout << alphabet[i];
    if (i < sizeof(alphabet) / sizeof(alphabet[0]) - 1) {
        cout << ",";
    }
}
cout << endl;
// Imprimir letras em linhas separadas usando while
int j = 0;
while (j < sizeof(alphabet) / sizeof(alphabet[0])) {
    cout << alphabet[j] << endl;
    ++j;
}
return 0;
}