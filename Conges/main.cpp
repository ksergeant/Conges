//
//  main.cpp
//  Conges
//
//  Created by Kevin on 04/10/2017.
//  Copyright © 2017 Kevin. All rights reserved.
//

#include <unistd.h>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "Fonction.hpp"

using namespace std;

int main(int argc, const char * argv[])

{
    int nbrCP, dataCP;
    bool fermeture = false;
    char choix = 0;
    nbrCP = 0;
    dataCP = 0;
    
    Purge();
    while (fermeture == false)
    {
        Entete();
        MenuP();
        
        fflush(stdin); //purge les entrees de flux
        cout <<"Votre Choix : " ;
        scanf("%s",&choix);// fix le choix du menu

        switch (choix) {
            case '1':
                Purge();
                Entete();
                
                cout <<"Calcul pour les 3 Vacations" << endl<< endl;
                cout << " Entrez le nombre de CP : ";
                cin >> nbrCP;
                cout <<"\n";
                
                dataCP = Calcul_smallVac(nbrCP);
                dataCP = Calcul_middleVac(nbrCP);
                dataCP = Calcul_largeVac(nbrCP);
                
                sleep(30);
                Purge();
                
                break;
                
            case '2':
                Purge();
                Entete();
                cout <<"en Dev" <<endl;
                sleep(30);
                Purge();
                
                break;
            
            case '3':
                Purge();
                Entete();
                cout << "Fermeture\n"<<endl;
                fermeture=true;
                
                break;
            
            default:
                cout << "Erreur Veuillez patienter \n"<<endl;
                sleep(3);
                fflush(stdin); //purge les entrees de flux
                Purge();
            break;
    }
    
    
    

    
    }
    return 0;
}
