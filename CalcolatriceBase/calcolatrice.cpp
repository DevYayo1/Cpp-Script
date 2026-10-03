// Includo le direttive

#include <iostream>
using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    int num1;
    int num2;

    int result;
    int opz;

    // Opzioni disponibili

    cout << "---Calcolatrice---\n";
    cout << "\nOpzioni disponibili:\n";

    cout << "\n\t1: Addizione";
    cout << "\n\t2: Sottrazione";
    cout << "\n\t3: Moltiplicazione";
    cout << "\n\t4: Divisione";

    // Inserimento opzione

    cout << "\n\nInserisci opzione(1/4): ";
    cin >> opz;

    // Inserimento primo numero

    cout << "\nInserisci il primo numero: ";
    cin >> num1;

    // Inserimento secondo numero

    cout << "\nInserisci il secondo numero: ";
    cin >> num2;

    // Switch risultato

    switch(opz) {

        // Caso addizione

        case 1:

            // Stampa addizione

            result = num1 + num2;
            cout << "\n\tRisultato: " << result;

            break;
        
        // Caso sottrazione

        case 2:

            // Stampa sottrazione

            result = num1 - num2;
            cout << "\n\tRisultato: " << result;

            break;

        // Caso moltiplicazione

        case 3:

            // Stampa moltiplicazione

            result = num1 * num2;
            cout << "\n\tRisultato: " << result;

            break;

        // Caso divisione

        case 4:

            // Stampa divisione

            result = num1 / num2;
            cout << "\n\tRisultato: " << result;

            break;

        // Caso opzione errata

        default:

            cout << "\nRisultato non disponibile, opzione inserita non valida";

    }

    return 0;

}