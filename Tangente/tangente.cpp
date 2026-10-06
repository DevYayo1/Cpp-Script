// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    double num;
    double result;

    cout << "--TangenteAngolo--\n";

    // Inserimento angolo

    cout << "\nInserisci l'angolo: ";
    cin >> num;

    // Risultato

    result = tan(num);
    cout << "\nTangente angolo: " << result;

    return 0;
    
}