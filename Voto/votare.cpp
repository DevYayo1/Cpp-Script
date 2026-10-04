// Includo le direttive

#include <iostream>
using namespace std;

// Funzione principale(main)

int main() {

    int age;

    // Inserimento età

    cout << "Inserisci la tua età: ";
    cin >> age;

    // Caso maggiorenne

    if (age >= 18) {

        cout << "\nSei maggiorenne, puoi votare";

    }

    // Caso minorenne

    else {

        cout << "\nSei minorenne, non puoi votare";

    }

    return 0;
    
}