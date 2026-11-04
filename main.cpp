#include <iostream>

using namespace std;

// Prototipi delle funzioni/esercizi
void es_01_tipi_variabili();
void es_02_controllo_flusso();
// ... aggiungi i prototipi man mano che procedi

int main() {
    int scelta = -1;

    while (scelta != 0) {
        cout << "\n===================================\n";
        cout << "    MENU ESERCIZI C++\n";
        cout << "===================================\n";
        cout << " 1. Tipi e Variabili\n";
        cout << " 2. Controllo Flusso\n";
        cout << " ...\n";
        cout << " 0. Esci\n";
        cout << "Inserisci la tua scelta: ";
        cin >> scelta;

        switch (scelta) {
            case 1:
                es_01_tipi_variabili();
                break;
            case 2:
                es_02_controllo_flusso();
                break;
            // ...
            case 0:
                cout << "Uscita dal programma.\n";
                break;
            default:
                cout << "Opzione non valida!\n";
        }
    }

    return 0;
}

void es_01_tipi_variabili(){
	
}
void es_02_controllo_flusso(){
	
}
