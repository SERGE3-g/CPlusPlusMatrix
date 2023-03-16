//
// Created by guea on 10/03/23.
//

#include <iostream>
 
using namespace std;
 
// 5 1 2 3 4
// 5 1 5 1 3
// 5 1 5 1 5
// 5 1 5 1 5
 
// 5 1 2 3 4 | 25
// 5 1 5 1 3 | 25
// ....
// -----------
// 13 15 15 77
 
 
 
int main(){
 
    int righe=5;
    int colonne=5;
    int matrice[righe][colonne];
    for(int i=0; i<righe; i++){
        for(int j=0; j<colonne; j++){
            matrice[i][j]= random()%10; 
            // matrice[i][j]=1;
        }
    }
 
    //------
 
    int sommaRighe[righe];
    int sommaColonne[colonne];
 
    for(int i=0;i<colonne;i++){
        sommaColonne[i]=0;
        sommaRighe[i]=0;
    }
 
    for(int i=0; i<righe; i++){
        for(int j=0; j<colonne; j++){
 
            sommaRighe[i]+=matrice[i][j];
            sommaColonne[j]+=matrice[i][j];
        }
 
    }
 
 
    for(int i=0; i<righe; i++){
        for(int j=0; j<colonne; j++){
            cout << " " << matrice[i][j] << " " ;
        }
        cout << "| " << sommaRighe[i] << endl;
    }
    cout << "----------------" << endl;
    for(int i=0; i<colonne;i++){
        if(sommaColonne[i]<10){
            cout << " " << sommaColonne[i] << " ";
        }
        else{
            cout << " " << sommaColonne[i];
        }
    }
 
}
