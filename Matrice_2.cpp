//
// Created by guea on 10/03/23.
//


/*
 *   Crea una matrice quadrata piena di numeri random 0-9
 *   Crea poi il vettore risultato prendendo i soli numeri
 *   divisibili per 3 dalla matrice iniziale.
 *
 */


#include <iostream>
#include <string>
#include <random>

using namespace std;

int main()
{
    int righe = 9;
    int colonne = 9;
    int matrice[righe][colonne];

    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            matrice[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < righe; i++)
    {
        cout << endl;
        for (int j = 0; j < colonne; j++)
        {
            cout << matrice[i][j] << " ";
        }
    }

    cout << endl;
    cout << "Numeri divisibili per 3 sono:";
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            if (matrice[i][j] % 3 == 0 && matrice[i][j]!=0 )
            {
                cout << matrice[i][j]<< " ";
            }
        }
    }

}