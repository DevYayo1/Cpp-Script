// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    float num;
    float result;

    cout << "--ArrotondamentoDifetto--\n";

    // Inserimento numero

    cout << "\nInserisci un numero: ";
    cin >> num;

    // Risultato

    result = floor(num);
    cout << "\nArrotondamento per difetto: " << result;

    return 0;
    
}