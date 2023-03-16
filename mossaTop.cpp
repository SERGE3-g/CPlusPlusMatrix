#include <iostream>

using namespace std;

void stampa(char *tab)
{
    for (int i = 0; i < 9; i++)
    {
        cout << tab[i] << " ";
        if (i == 2 || i == 5 || i == 8) // alla fine di ogni riga (3x3) vai a capo
        {
            cout << endl;
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;
}

int main()
{
    int risultato = -1;
    char VUOTO = '_';

    // inizializzo la tab
    char tab[9];
    for (int i = 0; i < 9; i++)
    {
        tab[i] = VUOTO;
    }
    stampa(tab);

    int combinazioni[8][3] = {
            {0, 1, 2},
            {3, 4, 5},
            {6, 7, 8},
            {0, 3, 6},
            {1, 4, 7},
            {2, 5, 8},
            {0, 4, 8},
            {2, 4, 6}};

    /*
        O O _
        X _ _
        X _ _
    */

    tab[0] = 'O';
    tab[1] = 'O';
    tab[3] = 'X';
    tab[6] = 'X';
    tab[8] = 'O';
    tab[4] = 'X';

    stampa(tab);

    // QUI LAVORO

    // ora controllo se il computer può vincere
    // se ci sono due O metto il terzo

    char computer = 'O';
    char giocatore = 'X';
    for (int i = 0; i < 8; i++) // due O su 0 e 1
    {
        char a = tab[combinazioni[i][0]];
        char b = tab[combinazioni[i][1]];
        char c = tab[combinazioni[i][2]];

        bool condizione = a == b && c == VUOTO && a == computer;

        if (condizione)
        {
            risultato = combinazioni[i][2];
        }
    }

    for (int i = 0; i < 8; i++) // due O su 0 e 2
    {
        char a = tab[combinazioni[i][0]];
        char b = tab[combinazioni[i][2]];
        char c = tab[combinazioni[i][1]];

        bool condizione = a == b && c == VUOTO && a == computer;

        if (condizione)
        {
            risultato = combinazioni[i][1];
        }
    }

    for (int i = 0; i < 8; i++) // due O su 1 e 2
    {

        char a = tab[combinazioni[i][1]];
        char b = tab[combinazioni[i][2]];
        char c = tab[combinazioni[i][0]];

        bool condizione = a == b && c == VUOTO && a == computer;

        if (condizione)
        {
            risultato = combinazioni[i][0];
        }
    }

    for (int i = 0; i < 8; i++) // due X su 0 e 1
    {

        char a = tab[combinazioni[i][0]];
        char b = tab[combinazioni[i][1]];
        char c = tab[combinazioni[i][2]];

        bool condizione = a == b && c == VUOTO && a == 'X';

        if (condizione)
        {
            risultato = combinazioni[i][2];
        }
    }

    for (int i = 0; i < 8; i++) // due X su 0 e 2
    {
        char a = tab[combinazioni[i][0]];
        char b = tab[combinazioni[i][2]];
        char c = tab[combinazioni[i][1]];

        bool condizione = a == b && c == VUOTO && a == 'X';

        if (condizione)
        {
            risultato = combinazioni[i][1];
        }
    }

    for (int i = 0; i < 8; i++) // due X su 1 e 2
    {

        char a = tab[combinazioni[i][1]];
        char b = tab[combinazioni[i][2]];
        char c = tab[combinazioni[i][0]];

        bool condizione = a == b && c == VUOTO && a == 'X';

        if (condizione)
        {
            risultato = combinazioni[i][0];
        }
    }

    // ora controllo se il computer può vincere
    // se ci sono due O metto il terzo

    for (int i = 0; i < 8; i++) // due X su 0 e 1
    {

        char a = tab[combinazioni[i][0]];
        char b = tab[combinazioni[i][1]];
        char c = tab[combinazioni[i][2]];

        bool condizione = a == b && c == VUOTO && a == 'X';

        if (condizione)
        {
            risultato = combinazioni[i][2];
        }
    }

    for (int i = 0; i < 8; i++) // due X su 0 e 2
    {
        char a = tab[combinazioni[i][0]];
        char b = tab[combinazioni[i][2]];
        char c = tab[combinazioni[i][1]];

        bool condizione = a == b && c == VUOTO && a == 'X';

        if (condizione)
        {
            risultato = combinazioni[i][1];
        }
    }

    for (int i = 0; i < 8; i++) // due X su 1 e 2
    {

        char a = tab[combinazioni[i][1]];
        char b = tab[combinazioni[i][2]];
        char c = tab[combinazioni[i][0]];

        bool condizione = a == b && c == VUOTO && a == 'X';

        if (condizione)
        {
            risultato = combinazioni[i][0];
        }
    }


    cout << "risultato: " << risultato << " atteso: 2" << endl;

}
