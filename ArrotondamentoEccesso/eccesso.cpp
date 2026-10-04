// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main) 

int main() {

    // Dichiarazione variabili utili al programma

    float num;
    float result;

    cout << "--ArrotondamentoEccesso--\n";

    // Inserimento numero

    cout << "\nInserisci un numero in virgola mobile: ";
    cin >> num;

    // Risultato

    result = ceil(num);
    cout << "\nArrotondamento per eccesso: " << result;

    return 0;
    
}