#include <iostream>

using namespace std;


int isWinner(char *arr) // faccio la funzione per controllare se x ha vinto
{
    for (int i = 0; i < 3; i++) // 3 is the number of players
    {
        int j = i * 3;
        if (arr[j] != ' ' && arr[j] == arr[j+1] && arr[j] == arr[j+2])
        {
            return (arr[j] == 'X') ? 1 : 2;
        }
    }
    // faccio girare le colonne 
    for (int j = 0; j < 3; j++)
    {
        if (arr[j] != ' ' && arr[j] == arr[j+3] && arr[j] == arr[j+6])
        {
            return (arr[j] == 'X') ? 1 : 2;
        }
    }
    
    if (arr[0] != ' ' && arr[0] == arr[4] && arr[0] == arr[8]) // diagonali 
    {
        return (arr[0] == 'X') ? 1 : 2;
    }if (arr[2] != ' ' && arr[2] == arr[4] && arr[2] == arr[6])
    {
        return (arr[2] == 'X') ? 1 : 2;
    }
    
    return 0;
}

void stampa(char *a) // stampo 
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

    bool xIsNext = true; //gestisce il turno
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

        if(isWinner(tabella) == 1 )
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
           // cout << "Errore in funzione isWinner" << endl;
        }
    }
    int vincitore = isWinner(tabella);
    if(vincitore == 1){
        cout << "Giocatore X ha vinto" << endl;
    }else if (vincitore == 2)
    {
        cout << "Giocatore 0 ha vinto" << endl;
    }else{
        cout << "pareggio" << endl;
    }
    return 0;
}