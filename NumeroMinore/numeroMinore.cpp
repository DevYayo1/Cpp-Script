// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main)

int main() {

    // Dichaiarazione variabili utili al programma

    int num1;
    int num2;

    int result;

    cout << "--NumeroMinore--\n";

    // Inserimento primo numero

    cout << "\nInserisci il primo numero: ";
    cin >> num1;

    // Inserimento secondo numero

    cout << "\nInserisci il secondo numero: ";
    cin >> num2;

    // Risultato

    result = min(num1,num2);
    cout << "\nNumero minore: " << result;

    return 0;

}