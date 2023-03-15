#include <iostream>
#include <string>

using namespace std;


// 1 per la vittoria
// 0 per continuare la partita
// -1 per il pareggio

int isWinner(char *arr){
     
}
void stampa(char *a)
{
    for (int i = 0; i < 9; i++)
    {
        cout << a[i] << " ";
        if (i == 2 || i == 5 || i == 8)
        {
            std::cout << std::endl;
        }
    }
    cout << endl;
    cout << endl;
    cout << endl;
}

int main()
{

    char vuoto = '_';

    // inizializzo la tabella
    char tabella[9];
    for (int i = 0; i < 9; i++)
    {
        tabella[i] = vuoto;
    }
    stampa(tabella);

    bool xIsNext = true; //gestisce il turnorr
    while (true) // i turni del gioco
    {

        int mossa;

        cout << "Giocatore " << (xIsNext ? 'X' : 'O') << " inserisci la tua mossa (1-9) ";
        cin >> mossa;
        mossa--; //per capirci ;)

        while (tabella[mossa] != vuoto || (!(0 <= mossa && mossa < 9))) // controllo 2 condizioni (valido e vuoto)
        {
            cout << "Non puoi inserire qui" << endl;
            cout << "Giocatore " << (xIsNext ? 'X' : 'O') << " inserisci la tua mossa (1-9) ";
            cin >> mossa;
        }

        // se sono arrivato qui è solo perchè l'utente ha inserito un numero corretto
        xIsNext ? tabella[mossa] = 'X' : tabella[mossa] = 'O'; // se è vero metti X altrimenti metti O

        stampa(tabella);


        if(isWinner(tabella,strlen[1]) == 1)
        {
            cout << "Hai vinto " << (xIsNext ? 'X' : 'O') << endl;
            break;
        }
        else if(isWinner(tabella) == -1)
        {
            cout << "Pareggio" << endl;

            //reset del gioco
            for(int i=0;i<9;i++)
            {
                tabella[i] = vuoto;
            }
            xIsNext = true;
            stampa(tabella);

        }
        else if(isWinner(tabella) == 0)
        {
            xIsNext = !xIsNext; // cambio giocatore
        }
        else{
            cout << "Errore nella funzione isWinner" << endl;
        }
    }
}