/*!
 * \file game.h
 * \brief Programme principal
 * \author Nicolas Wrobel
 * \author Bénigne Demetz
 * \author Gwendal Besnard
 * \author Thibaud Melano
 * \author Manaud Calixte
 * \version 1.0
 * \date 22 janvier 2021
 */

#include <iostream>
#include "Nos_Fichiers/game1v1.h"
#include "Nos_Fichiers/gridmanagement.h"

using namespace std;
/**
 * @brief main
 * @return return 0 iff everything is OK, 1 if we have an exception, 2 if we can't load the params' file
 */

int main()
{
    Clearecran();
    cout << "╔════════════════════════════════════════════════════════╗" << endl
         << "║⠂⠂██████╗░░█████╗░░█████╗░███╗░░░███╗░█████╗░███╗░░██╗⠂⠂║" << endl
         << "║⠂⠂██╔══██╗██╔══██╗██╔══██╗████╗░████║██╔══██╗████╗░██║⠂⠂║" << endl
         << "║⠂⠂██████╔╝███████║██║░░╚═╝██╔████╔██║███████║██╔██╗██║⠂⠂║" << endl
         << "║⠂⠂██╔═══╝░██╔══██║██║░░██╗██║╚██╔╝██║██╔══██║██║╚████║⠂⠂║" << endl
         << "║⠂⠂██║░░░░░██║░░██║╚█████╔╝██║░╚═╝░██║██║░░██║██║░╚███║⠂⠂║" << endl
         << "║⠂⠂╚═╝░░░░░╚═╝░░╚═╝░╚════╝░╚═╝░░░░░╚═╝╚═╝░░╚═╝╚═╝░░╚══╝⠂⠂║" << endl
         << "║⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂║" << endl
         << "║⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂Veuillez choisir votre mode de jeu :⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂║" << endl
         << "║⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂1. Mode versus (1vs1)⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂║" << endl
         << "║⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂2. Mode solo⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂║" << endl
         << "║⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂3. Quitter⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂║" << endl
         << "║⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂║" << endl
         << "║⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂║" << endl
         << "║⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂║" << endl
         << "║⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂⠂║" << endl
         << "╚════════════════════════════════════════════════════════╝" << endl;
    unsigned mode;
    bool choixfais (false);
    while (!choixfais)
    {
        cout << "Votre choix (tapez une autre valeur que 1 ou 2 pour quitter) : ";
        if (!(cin >> mode))
        {
            cout << "Vous n'avez pas tapé la bonne valeur !" << endl;
            cin.clear();
            cin.ignore(1);
        }
        else
        {
            choixfais = true;
        }
    }
        switch (mode)
        {
            case 1 :
                try
                {
                     return popol ();
                }
                catch (...)
                {
                    cerr << "Ca s'est mal passé quelque part" << endl;
                    return 1;
                }
            break;
            case 2 :
                cout << "On est trop nuls... Notre tentative est en commentaire (gamesolo.cpp/gridsolo.cpp), nous n'avons pas réussi à la finaliser." << endl;
                break;
            default :
                system ("exit");
        }
} //main ()

