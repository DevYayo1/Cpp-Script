// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main) 

int main() {

    // Dichiarazione variabili utili al programma

    float num;
    float result;
    
    cout << "--ArrotondamentoVicino--\n";

    // Inserimento numero

    cout << "\nInserisci un numero: ";
    cin >> num;

    // Risultato

    result = round(num);
    cout << "\nArrotondamento a numero vicino: " << result;

    return 0;
    
}