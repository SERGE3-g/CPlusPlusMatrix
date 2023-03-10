//
// Created by guea on 10/03/23.
//

/*
 * L'esercizio consiste nell'utilizzare le matrici (ovvero un
   array bidimensionale) per risolvere un problema. In
   particolare, si consideri il seguente scenario: si vuole
   memorizzare i voti di un gruppo di studenti in un esame.
   Per ogni studente si vogliono memorizzare i voti delle
   diverse prove (ad esempio, scritto, orale, ecc.). Si
   supponga inoltre che il numero di studenti e il numero di
    prove sia noto a priori.
 */

#include <iostream>


using namespace std;

int main(){

    // Dichiarazione delle variabili
    int nStudenti, nProve;
    int i, j;
    int voto;
    int somma;
    float media;

    // Inizializzazione delle variabili
    nStudenti = 5;
    nProve = 3;

    // Dichiarazione della matrice
    int voti[nStudenti][nProve];

    // Inizializzazione della matrice
    for (i = 0; i < nStudenti; i++) {
        for (j = 0; j < nProve; j++) {
            voti[i][j] = 0;
        }
    }

    // Inserimento dei voti
    for (i = 0; i < nStudenti; i++) {
        for (j = 0; j < nProve; j++) {
            cout << "Inserisci il voto dello studente " << i << " alla prova " << j << ": ";
            cin >> voto;
            voti[i][j] = voto;
        }
    }

    // Calcolo della media dei voti
    for (i = 0; i < nStudenti; i++) {
        somma = 0;
        for (j = 0; j < nProve; j++) {
            somma += voti[i][j];
        }


        media = (float)somma / nProve;
        cout << "La media dei voti dello studente " << i << " e': " << media << endl;
    }
    return 0;
}