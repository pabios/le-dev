//
//  main.cpp
//  sos-future
//
//  Created by pabiosoft on 31/12/2021.
//

#include <iostream>
#include "Sequence.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    Sequence a;
    a.insertion(2);
    a.affichage();
    a.estConsecutif();
    //std::cout << "Hello, World!\n";
    return 0;
}
