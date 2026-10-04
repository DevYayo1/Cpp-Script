// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    int num1;
    int num2;

    int result;

    cout << "--NumeroMaggiore--\n";

    // Inserimento primo numero

    cout << "\nInserisci il primo numero: ";
    cin >> num1;

    // Inserimento secondo numero

    cout << "\nInserisci il secondo numero: ";
    cin >> num2;

    // Risultato

    result = max(num1,num2);
    cout << "\nNumero maggiore: " << result;

    return 0;
    
}