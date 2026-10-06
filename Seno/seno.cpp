// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    double num;
    double result;

    cout << "--SenoAngolo--\n";

    // Inserimento angolo

    cout << "\nInserisci l'angolo: ";
    cin >> num;

    // Risultato

    result = sin(num);
    cout << "\nSeno angolo: " << result;

    return 0;
    
}