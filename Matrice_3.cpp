//
// Created by guea on 10/03/23.
//

/*
 *
 */


#include <iostream>
#include <random>
using namespace std;
const int RIGHE = 10;
const int COLONNE = 5;

void inizializzaRandom(int mat[][COLONNE])
{
    for (int i = 0; i < RIGHE; i++)
    {
        for (int j = 0; j < COLONNE; j++)
        {
            mat[i][j] = rand() % 10;
        }
    }
}

void stampaTrattini()
{
    cout << "   ";
    for (int i = 0; i < COLONNE; i++)
    {
        cout << "  " << i << " ";
    }
    cout << endl;
    int trattini = COLONNE * 4 + 4;
    for (int i = 0; i < trattini; i++)
    {
        cout << "-";
    }
    cout << endl;
}

void stampaMatrice(int mat[][COLONNE])
{
    stampaTrattini();
    for (int i = 0; i < RIGHE; i++)
    {
        cout << i << "| ";

        for (int j = 0; j < COLONNE; j++)
        {
            cout << "  " << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void stampaSomme(int mat[][COLONNE])
{
    stampaTrattini();
    for (int i = 0; i < RIGHE; i++)
    {
        int somme = 0;
        cout << i << "| ";
        for (int j = 0; j < COLONNE; j++)
        {
            somme += mat[i][j];
            cout << "  " << mat[i][j] << " ";
        }
        cout << " |  " << somme;
        cout << endl;
    }
    int trattini = COLONNE * 4 + 4;
    for (int i = 0; i < trattini; i++)
    {
        cout << "-";
    }
    cout << endl;
    cout << "    ";
    for (int j = 0; j < COLONNE; j++)
    {
        int somme = 0;
        for (int i = 0; i< RIGHE; i++)
        {
            somme+= mat[i][j];
        }
        cout << somme << "  ";
    }
}

int main()
{
    int matrice[RIGHE][COLONNE];
    inizializzaRandom(matrice);
    stampaMatrice(matrice);
    cout << "\n\n";
    stampaSomme(matrice);
}
