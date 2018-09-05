//
//  Fonction.cpp
//  Conges
//
//  Created by Kevin on 04/10/2017.
//  Copyright © 2017 Kevin. All rights reserved.
//

#include "Fonction.hpp"
#include <iostream>

using namespace std;

void Purge()
{
    system("clear");
}

void Entete()
{
    cout << "         ##### Congés     By KS #####\n" <<endl;

}


void MenuP()
{
    cout << "           ***** Menu *****\n" << endl;
    cout << "       Veuillez choisir une action \n" <<endl;
    cout << "           1. Calcul pour les 3 Vacations " <<endl;
    cout << "           2. Calcul Perso" <<endl<<endl;
    cout << "           3. Quitter le programme\n" <<endl;

}

int Calcul_smallVac(int nbrCP)
{
    int smallVac = 6;
    int nbrSmallVac = 0;
    
    while (nbrCP >= smallVac )
    {
        nbrCP = nbrCP - smallVac;
        nbrSmallVac = nbrSmallVac + 1;
    }

    cout << "Petite vacation : " << nbrSmallVac<<endl;
    cout <<"Reste "<< nbrCP << " CP" <<endl<<endl;
    return nbrCP;

}

int Calcul_middleVac(int nbrCP)
{
    int middleVac = 7;
    int nbrMiddleVac = 0;
    
    while (nbrCP >= middleVac)
    {
        nbrCP = nbrCP - middleVac;
        nbrMiddleVac = nbrMiddleVac + 1;
    }
    
    cout << " Moyenne vacation : " << nbrMiddleVac <<endl;
    cout <<"Reste "<< nbrCP << " CP" <<endl<<endl;
    
    return nbrCP;
}

int Calcul_largeVac(int nbrCP)
{
    int largeVac = 9;
    int nbrLargeVac = 0;
    
    while (nbrCP >= largeVac)
    {
        nbrCP = nbrCP - largeVac;
        nbrLargeVac = nbrLargeVac +1;
    }

    cout << " Grande vacation : " << nbrLargeVac << endl;
    cout <<"Reste "<< nbrCP << " CP" << endl<<endl;
    
    return nbrCP;
}
