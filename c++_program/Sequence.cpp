//
//  Sequence.cpp
//  sos-future
//
//  Created by pabiosoft on 02/01/2022.
//
#include <iostream>
#include "Sequence.hpp"

using namespace std;

Sequence::Sequence(){
    l = 0;
}
void Sequence::insertion(int _elt){
    int i = 0;
    int elt = 0;
    do{
        cout << " veuillez saisir une valeur et/ou 0 pour terminer" << endl;
        cin >> elt;
        tab[l] = elt;
        l = l + 1;
        i++;
    }while(elt != 0);
     
}

void Sequence::affichage(){
    int i = 0;
    cout<< " les valeurs saisie sont : "<<endl;
    while(i != l-1){
        cout << tab[i]<< '\t';
        i = i + 1;
    }
    cout <<"\n";
}

 /*
  * Principe : on positionne i a la premiere case et j a la case suivante
  * On verifie a chaque fois si (tab[i] + 1) est egale a tab[j]. en incrementant les deux deux compteurs
  */
void Sequence::estConsecutif(){
    
    int i = 0;
    int j = 0;
    bool rep = false;
    
    if(tab[l] == 0){
        cout <<"la liste est vide "<<endl;
    }else if(l ==2){
        cout <<"la liste ne comporte qu'un seul element "<<endl;
    }else{
        while(i != l-1){
            j = i + 1;
            
            
            while(j != l-1    ){
                
                    if( (tab[j] - 1) != tab[i]){
                        rep = false;
                    }else{
                        rep = true;
                    }
                 
                j++;
            }
            
            
            i = i + 1;
        }
       
        if( rep == false){
            cout <<"les elements ne sont pas tous consecutif "<<endl;
        }else{
            cout << "les elements sont tous consecutif " <<endl;
        }
    }
    
   
}
