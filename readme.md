# 🚀 Corso di C++: Da Zero a OOP

Benvenuto/a nel repository degli esercizi di C++! 

Questo progetto è strutturato come un **unico programma monolitico**. All'interno del file principale troverai un menu interattivo gestito tramite uno `switch-case`: ogni opzione eseguirà il sotto-programma o l'esercizio corrispondente alla lezione corrente.

---

## 🛠️ Come Compilare ed Eseguire

### Prerequisiti
Assicurati di avere un compilatore C++ installato (es. `g++` o `clang`).

### Compilazione via Terminale (Linux / macOS)
Apri il terminale all'interno della cartella del progetto ed esegui:

```bash
g++ main.cpp -o corso_cpp
```

### Esecuzione
```bash
./corso_cpp
```

---

## 📌 Indice degli Esercizi e Tabella di Marcia

Utilizza le caselle di spunta `[ ]` per segnare i moduli che hai completato ed integrato nel menu principale!

### 🟦 Fase 1: Procedurale (Le Basi)
- [ ] **`01_Tipi_e_Variabili`**: Tipi primitivi (`int`, `double`, `char`), I/O base e casting.
- [ ] **`02_Controllo_Flusso`**: Strutture condizionali (`if`/`else`, `switch`) e cicli (`while`, `for`).
- [ ] **`03_Funzioni`**: Dichiarazione, definizione, passaggio per valore vs. passaggio per riferimento (`&`).
- [ ] **`04_Array_e_Stringhe`**: Gestione degli array statici e uso della libreria `<string>`.

### 🟨 Fase 2: La Memoria (Lo Scoglio del C++)
- [ ] **`05_Puntatori`**: Comprensione dell'indirizzo di memoria, operatori `*` e `&`, aritmetica dei puntatori.
- [ ] **`06_Memoria_Dinamica`**: Allocazione e deallocazione di memoria nell'heap tramite `new` e `delete`.
- [ ] **`07_Struct`**: Aggregazione di dati eterogenei (il ponte verso l'OOP).

### 🟩 Fase 3: Programmazione Orientata agli Oggetti (OOP)
- [ ] **`08_Classi_e_Oggetti`**: Differenza tra `struct` e `class`, modificatori d'accesso (`public`, `private`).
- [ ] **`09_Costruttori_Distruttori`**: Ciclo di vita degli oggetti, costruttori sovraccaricati e distruttori.
- [ ] **`10_Ereditarieta`**: Classi base e derivate, riutilizzo del codice e modificatore `protected`.
- [ ] **`11_Polimorfismo`**: Metodi `virtual`, clausola `override`, distruttori virtuali e classi astratte.

---

## 🏗️ Struttura dell'Architettura (Esempio)

Il programma dovrà seguire una struttura simile al seguente scheletro base:

```cpp
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

## 📝 Regole per la Consegna
1. Fai il **fork** o **clona** questo repository nel tuo ambiente locale.
   Come si fa:
   a. spostati in una cartella progetti nella tua home/nome_utente/repos/ con il comando `cd....`
   b. inizializza la cartella facendola diventare un repository con il comando `git init`
   c. aggiungi la firma per i tuoi commit con il comando `git config --global user.name "tuo nome utente github"`
   d. inserisci come password, il tuo token-classic personale creato nel sito di github
   e. clona il repository online da github verso la tua cartella con il comando `git clone URL-che-trovi-nel-repo-github-online.git`
   f. esplora la tua cartella locale per controllare se la clonazione è andata a buon fine
2. Scarica con il comando `git pull origin` eventuali aggiornamenti che il Prof. ha effettuato.
3. Effettua periodicamente i commit con messaggi chiari (es. `git commit -m "Completato esercizio 05 Puntatori"`).
4. Effettua il `git push` sul tuo repository GitHub remoto con il comando `git push origin` 
