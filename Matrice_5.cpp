//
// Created by guea on 10/03/23.
//


/*   Crea una matrice quadrata piena di numeri random 0-9
 *    - Stampa la matrice invertendo le righe
 *    - Stampa la matrice invertendo le colonne
 *    - Stampa la matrice trasposta
 */

#include <iostream>
#include <string>
#include <random>

using namespace std;

int main() {
    const int N = 9;
    int matrice[N][N];
    int matriceInvertitaRighe[N][N];
    int matriceInvertitaColonne[N][N];
    int matriceTrasposta[N][N];

    // Inizializzo la matrice con numeri random

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrice[i][j] = rand() % 10;
        }
    }

    // Inverto le righe

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriceInvertitaRighe[i][j] = matrice[N - i - 1][j];
        }
    }

    // Inverto le colonne

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriceInvertitaColonne[i][j] = matrice[i][N - j - 1];
        }
    }

    // Traspongo la matrice

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriceTrasposta[i][j] = matrice[j][i];
        }
    }

    // Stampo la matrice

    cout << "Matrice:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    // Stampo la matrice invertita righe

    cout << "Matrice invertita righe:" << endl;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriceInvertitaRighe[i][j] << " ";
        }
        cout << endl;
    }

    // Stampo la matrice invertita colonne

    cout << "Matrice invertita colonne:" << endl;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriceInvertitaColonne[i][j] << " ";
        }
        cout << endl;
    }

    // Stampo la matrice trasposta

    cout << "Matrice trasposta:" << endl;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriceTrasposta[i][j] << " ";
        }
        cout << endl;
    }

}