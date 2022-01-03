//
//  Sequence.hpp
//  sos-future
//
//  Created by pabiosoft on 31/12/2021.
//
 
#ifndef Sequence_hpp
#define Sequence_hpp

#include <stdio.h>
class Sequence{
public:
    Sequence();
    void insertion(int elt);
    void affichage();
    void estConsecutif();
    
private:
    int _elt;
    int l;
    int tab[100];
};

#endif /* Sequence_hpp */
