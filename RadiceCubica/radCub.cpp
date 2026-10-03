// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    int num;
    int result;

    cout << "--RadiceCubica--\n";

    // Inserimento primo numero

    cout << "\nInserisci un numero: ";
    cin >> num;

    // Risultato

    result = cbrt(num);
    cout << "\nRadice cubica: " << result;

    return 0;
    
}