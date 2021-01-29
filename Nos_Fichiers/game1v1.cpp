#include <iostream>

#include "game1v1.h"
#include "parameter.h"
#include "gridmanagement.h"
#include "main.cpp"

#include <map>

#include <cstdlib>
using namespace std;

unsigned int microsecond = 1000000; //variable avec le nombre d'insruction en 1 seconde
bool used (false); //variable pour l'utilisation unique des teleporteurs

template <class T, class U>
void ShowMap (const map<T,U> & AMap){
    for (const pair <T,U> & Val : AMap)                cout << "Cle : " << Val.first << "   "             << "Valeur : " << Val.second << endl;
    cout << endl;
}// ShowMap ()

bool nextPos (CPosition & Destination, CMat & Mat) //fonction pour verifier que la position souhaité n'est pas un mur
{
    if (Mat[Destination.first][Destination.second] == "╝" || Mat[Destination.first][Destination.second] == "╚"
       || Mat[Destination.first][Destination.second] == "╔" || Mat[Destination.first][Destination.second] == "╔"
       || Mat[Destination.first][Destination.second] == "╩" || Mat[Destination.first][Destination.second] == "╦"
       || Mat[Destination.first][Destination.second] == "═" || Mat[Destination.first][Destination.second] == "╬"
       || Mat[Destination.first][Destination.second] == "║" || Mat[Destination.first][Destination.second] == "╗"
       || Mat[Destination.first][Destination.second] == "╣"|| Mat[Destination.first][Destination.second] == "╔"
       || Mat[Destination.first][Destination.second] == "═") // condition avec tout les caractères des murs
    {
       return true; //destination est un mur
    }
    return false; //destination n'est pas un mur
} //end nextPos

/* bool nextPos (CPosition & Destination, CMat & Mat) Nous avions fait une fonction plus pratique mais le fait que les murs soit des strings,
                                                       empêche d'avoir une matrice de char. Donc, nous ne pouvions comparer un char et un string
{
    string notwalls (" ѻXO?")
    for (unsigned i=0; i<notwalls.size(); ++i)
    {
        if (notwalls[i] != Mat[Destination.first][Destination.second]
    {
       return true;
    }
    return false;
} */


void MoveToken (CMat & Mat, const char & Move, CPosition & Pos, const CMyParam & Param) //fonction de déplacement des joueurs
{
    CPosition Destination; //variable de la position choisi
    string car = Mat [Pos.first][Pos.second];
    Mat [Pos.first][Pos.second] = KEmpty; //faire disparaitre le joueur de sa position actuel
    switch (Move) //switch pour savoir quelle touche entrée et quelle direction choisi
    {
    case 'A': //haut gauche
        Destination.first = Pos.first - 1; //ligne souhaitée
        Destination.second = Pos.second - 1; //colonne souhaitée
        if (Destination.first < 0 || Destination.second < 0) //si le joueur sort de la matrice
            break; //quitter switch
        if (nextPos(Destination, Mat)) //appelle de la fonction nextPos (pour les murs) à la destination "Destination" avec la matrice "Mat"
            break; //quitter switch
        -- Pos.first; //sinon aller à gauche
        -- Pos.second; //et en haut
        break; //quitter switch
    case 'Z': // haut
        Destination.first = Pos.first - 1; //ligne souhaitée
        Destination.second = Pos.second; //colonne souhaitée (colonne actuelle)
        if (Destination.first < 0) //si le joueur ne sort pas de la matrice
            break; //quitter switch
        if (nextPos(Destination, Mat)) //si Destination est un mur
            break; //quitter switch
        --Pos.first; //sinon aller en haut
        break; //quitter switch
    case 'E': //haut droit
        Destination.first = Pos.first - 1; //ligne souhaitée
        Destination.second = Pos.second + 1; //colonne souhaitée
        if (Destination.first < 0 || Destination.first > Param.MapParamUnsigned.find("NbColumn")->second-1) //si le joueur ne sort
            break; //quitter switch//quitter switch                                                           pas de la matrice (0 et taille matrice)
        if (nextPos(Destination, Mat)) //si Destination est un mur
            break; //quitter switch
        --Pos.first; //sinon aller en haut
        ++Pos.second; //et aller à droite
        break; //quitter switch //quitte rswicth
    case 'Q': //gauche
        Destination.first = Pos.first; //ligne souhaitée (ligne actuelle)
        Destination.second = Pos.second - 1; //colonne souhaitée
        if (Destination.second < 0) //si le joueur ne sort pas de la matrice
            break; //quitter switch
        if (nextPos(Destination, Mat)) //si Destination est un mur
            break; //quitter switch
          --Pos.second; //sinon aller à gauche
            break; //quitter switch
    case 'D': //droite
        Destination.first = Pos.first; //ligne souhaitée (ligne actuelle)
        Destination.second = Pos.second + 1; //colonne souhaitée
        if (Destination.second > Param.MapParamUnsigned.find("NbColumn")->second-1) //si joueur sort de la matrice
            break; //quitter switch
        if (nextPos(Destination, Mat)) //si Destination est un mur
            break; //quitter switch
        ++Pos.second; //sinon aller à droite
        break; //quitter switch
    case 'W': //bas gauche
        Destination.first = Pos.first + 1; //ligne souhaitée
        Destination.second = Pos.second - 1; //colonne souhaitée
        if (Destination.first > Param.MapParamUnsigned.find("NbRow")->second-1 || Destination.second < 0) //si joueur sort de la matrice
            break; //quitter switch
        if (nextPos(Destination, Mat)) //si Destination est un mur
            break; //quitter switch
        ++Pos.first; //sinon aller en bas
        --Pos.second; //et à gauche
        break; //quitter switch
    case 'C': //bas droit
        Destination.first = Pos.first + 1; //ligne souhaitée
        Destination.second = Pos.second + 1; //colonne souhaitée
        if (Destination.first > Param.MapParamUnsigned.find("NbRow")->second-1 || Destination.second > Param.MapParamUnsigned.find("NbRow")->second-1) //si joueur sort de la matrice
            break; //quitter switch
        if (nextPos(Destination, Mat)) //si Destination est un mur
            break; //quitter switch
        ++Pos.first; //sinon bas
        ++Pos.second; //et droite
        break; //quitter switch
    case 'S': //bas
        Destination.first = Pos.first + 1; //ligne souhaitée
        Destination.second = Pos.second; //colonne souhaitée
        if (Destination.first > Param.MapParamUnsigned.find("NbRow")->second-1) //si sort de la matrice
            break; //quitter switch
        if (nextPos(Destination, Mat)) //si Destination est un mur
            break; //quitter switch
        ++Pos.first; //sinon bas
        break; //quitter switch
    }//fin switch touche entrée
    Mat [Pos.first][Pos.second] = car;
} //MoveToken ()

void summonTeleport(CPosition & Teleport1, CPosition & Teleport2) //crée les teleporters
{
    int randtp = rand()%5; //choix des paires de positions aléatoire parmis 5 positions prédefini
    switch (randtp) //swicth pour savoir quel teleporteur est tiré au sort
    { //case 0 = default pour éviter un potentiel soucis
    //teleport n°1
        case 1: //teleport n°2
            Teleport1.first = 1; //ligne du premier teleporteur
            Teleport1.second = 5; //colonne du premier teleporteur
            Teleport2.first = 13; //ligne du deuxieme teleporteur
            Teleport2.second = 44; //colonne du deuxieme teleporteur
        break; //quitter switch
        case 2: //teleport n°3
            Teleport1.first = 1; //ligne du premier teleporteur
            Teleport1.second = 44; //colonne du premier teleporteur
            Teleport2.first = 13; //ligne du deuxieme teleporteur
            Teleport2.second = 5; //colonne du deuxieme teleporteur
        break; //quitter switch
        case 3: //teleport n°4
            Teleport1.first = 2; //ligne du premier teleporteur
            Teleport1.second = 20; //colonne du premier teleporteur
            Teleport2.first = 12; //ligne du deuxieme teleporteur
            Teleport2.second = 29; //colonne du deuxieme teleporteur
        break; //quitter switch
        case 4: //teleport n°5
            Teleport1.first = 2; //ligne du premier teleporteur
            Teleport1.second = 29; //colonne du premier teleporteur
            Teleport2.first = 12; //ligne du deuxieme teleporteur
            Teleport2.second = 20; //colonne du deuxieme teleporteur
        break; //quitter switch
        default: //teleport n°1
            Teleport1.first = 7; //ligne du premier teleporteur
            Teleport1.second = 16; //colonne du premier teleporteur
            Teleport2.first = 7; //ligne du deuxieme teleporteur
            Teleport2.second = 33; //colonne du deuxieme teleporteur
    } //fin switch choix teleporteur
} //fin fonction création teleporteurs

void bountyteleport(CPosition & Bounty, CMat & Mat, const CMyParam & Param, CPosition & PosPlayer) //fonction teleport joueur à l'ndroit souhaité
{
    do { //effectuer un premier choix d'endroit de teleportation aléatoire
       PosPlayer.first = rand()%Param.MapParamUnsigned.find("NbRow")->second; //créer ligne aléatoire
       PosPlayer.second = rand()%Param.MapParamUnsigned.find("NbColumn")->second; //créer colonne aléatoire
       Mat [Bounty.first][Bounty.second] = ' '; //joueur actuel effacé de sa position actuel
       }while(nextPos(PosPlayer, Mat)); //tant que l'endroit de teleport est un mur, recommencer
} //fin fonction teleportation random


int popol (void) //fonction du jeu
{
    int P1Freeze = 0; //initialisation du nombre de tour restant avant de ne plus etre freeze pour le joueur 1
    int P2Freeze = 0; //initialisation du nombre de tour restant avant de ne plus etre freeze pour le joueur 2
    bool Bounty1used = false, Bounty2used = false, Bounty3used = false, Bounty4used = false, Bounty5used = false, Bounty6used = false;
    set_input_mode (); //active le mode canonique pour ne pas avoir besoin de confirmer les déplacements
    const unsigned KSize (15); //nombre de tour de jeu max
    unsigned PartyNum (1); //numéro du tour actuel
    const unsigned KMaxPartyNum (KSize * KSize); //nombre de tour au carré soit 225 ici
    CMat Mat; //création matrice

    bool Player1Turn (true); //initialise une variable pour savoir quel tour est-ce et le joueur 1 commence
    bool Victory (false); //initialise si le jeu est terminé par une victoire / victoire à false au début

    CPosition PosPlayer1, PosPlayer2; //initialise les joueurs

    CMyParam Param;                                                       //initialise l'accès au
    int RetVal = ChargeParams(Param, "../G3_Besnard_Demetz_Wrobel_Melano_Calixte/Nos_Fichiers/config.yaml"); //fichier des parametres
    if (RetVal != 0) //si fichier n'est pas trouvé
    {
        return RetVal; //quitter le jeu
    }

    CPosition Teleport1; //initialise la variable du teleporteur 1
    CPosition Teleport2; //initialise la variable du teleporteur 2

    summonTeleport(Teleport1, Teleport2); //appelle la fonction pour créer les teleporteurs aléatoires

    CPosition Bounty1({7,7}), Bounty2({7,42}), Bounty3({7,17}), Bounty4({7,32}), Bounty5({13,7}), Bounty6({1,42}); //initialisation
                                                                                           //des 6 bonus/malus aux positions données
    InitGrid (Mat, Param, PosPlayer1, PosPlayer2, Bounty1, Bounty2, Bounty3, Bounty4, Bounty5, Bounty6, Teleport1, Teleport2); //instaure tout les éléments de la matrice
    DisplayGrid (Mat, Param); //affiche la matrice

    while (PartyNum <= KMaxPartyNum && ! Victory) //tant que il reste des tours et personne n'a gagné
    {
        cout << "Appuyez sur P pour quitter" << endl << endl << flush; //touche pour quitter le jeu

        if (P1Freeze > 0) //si je joueur 1 a des tours où il est gelé
        {
            if(Player1Turn)//Si tour du Joueur 1
            {
                Player1Turn = !Player1Turn; //sauter son tour
                cout << "Le Joueur 1 est gelé, il ne peut pas jouer pendant encore " << P1Freeze << " tours." << endl << flush; //affiche le nb de tour où le joueur est gelé
                --P1Freeze; //decrementer la variable du nombre de tour gelé
            }
        }
        if (P2Freeze > 0) //si je joueur 2 a des tours où il est gelé
        {
            if(!Player1Turn)//Si tour du Joueur 2
            {
                Player1Turn = !Player1Turn; //sauter son tour
                cout << "Le Joueur 2 est gelé, il ne peut pas jouer pendant encore " << P2Freeze << " tours." << endl << flush; //affiche le nb de tour où le joueur est gelé
                --P2Freeze; //decrementer la variable du nombre de tour gelé
            }
        }
        cout << "Tour numero : " << PartyNum << ", Joueur "                                //affiche le tour de quel joueur
             << (Player1Turn ? '1' : '2') << " entrez un déplacement : " << endl << flush; //est-ce et demande un déplacement


        //Teleporters
        if ((PosPlayer1 == Teleport1 || PosPlayer1 == Teleport2) && !used) //si le joueur 1 entre en contact avec un teleporteur
        {                                                                  //et qu'il n'a pas été utilisé
            PosPlayer1 = teleporter (PosPlayer1, Teleport1, Teleport2);  //teleporter le joueur
            Mat [Teleport1.first][Teleport1.second] = ' '; //effacer le joueur car il avait, par son déplacement, supprimé le 1e tp
            Mat [Teleport2.first][Teleport2.second] = ' '; //effacer le deuxieme teleporteur
            Mat [PosPlayer1.first][PosPlayer1.second] = Param.MapParamChar.find("TokenP1")->second; //affiche le joueur sur sa nouvelle position
            used = true; //sauvegarde que le teleporteur a été utlisé
        }

        if ((PosPlayer2 == Teleport1 || PosPlayer2 == Teleport2) && !used) //si le joueur 2 entre en contact avec un teleporteur
        {                                                                  //et qu'il n'a pas été utilisé
            PosPlayer2 = teleporter (PosPlayer2, Teleport1, Teleport2); //teleporter le joueur
            Mat [Teleport1.first][Teleport1.second] = ' ';//effacer le joueur car il avait, par son déplacement, supprimé le 1e tp
            Mat [Teleport2.first][Teleport2.second] = ' '; //effacer le deuxieme teleporteur
            Mat [PosPlayer2.first][PosPlayer2.second] = Param.MapParamChar.find("TokenP2")->second; //affiche le joueur sur sa nouvelle position
            used = true; //sauvegarde que le teleporteur a été utlisé
        }

        char Move; //initialise la variable pour sauvegarder la touche entrée
        read (STDIN_FILENO, &Move, 1); //demande d'entrer une touche
        if (Move == 'p') //si la touche entrée est 'p'
        {
            used = false; //mets les teleporteurs utilisé à false
            break; //quitter le while
        }

        Move = toupper (Move); //mets la lettre en majuscule
        MoveToken (Mat, Move, (Player1Turn ? PosPlayer1: PosPlayer2), Param); //appelle la fonctionde déplacement du joueur
        Clearecran(); //efface le terminal
        DisplayGrid (Mat, Param); //affiche la matrice

        //Victory test
        if (PosPlayer1 == PosPlayer2) Victory = true; //si les deux joueurs se touchent, victoire

        //Bounty
        bool P1Bounted = false; //initialise le fait que le joueur 1 touche un bounty à false
        bool P2Bounted = false; //initialise le fait que le joueur 2 touche un bounty à false
        if ((PosPlayer1 == Bounty1 && !Bounty1used) || (PosPlayer1 == Bounty2 && !Bounty2used) || (PosPlayer1 == Bounty3 && !Bounty3used)
           || (PosPlayer1 == Bounty4 && !Bounty4used) || (PosPlayer1 == Bounty5 && !Bounty5used) || (PosPlayer1 == Bounty6 && !Bounty6used))
        {
            P1Bounted = true;
            if (PosPlayer1 == Bounty1) Bounty1used = true; //si c'est le bounty 1 pris par le joueur1, il est utilisé
            if (PosPlayer1 == Bounty2) Bounty2used = true; //si c'est le bounty 2 pris par le joueur1, il est utilisé
            if (PosPlayer1 == Bounty3) Bounty3used = true; //si c'est le bounty 3 pris par le joueur1, il est utilisé
            if (PosPlayer1 == Bounty4) Bounty4used = true; //si c'est le bounty 4 pris par le joueur1, il est utilisé
            if (PosPlayer1 == Bounty5) Bounty5used = true; //si c'est le bounty 5 pris par le joueur1, il est utilisé
            if (PosPlayer1 == Bounty6) Bounty6used = true; //si c'est le bounty 6 pris par le joueur1, il est utilisé
        }

        if ((PosPlayer2 == Bounty1 && !Bounty1used) || (PosPlayer2 == Bounty2 && !Bounty2used) || (PosPlayer2 == Bounty3 && !Bounty3used)
           || (PosPlayer2 == Bounty4 && !Bounty4used) || (PosPlayer2 == Bounty5 && !Bounty5used) || (PosPlayer2 == Bounty6 && !Bounty6used))
        {
            P2Bounted = true;
            if (PosPlayer2 == Bounty1) Bounty1used = true; //si c'est le bounty 1 pris par le joueur2, il est utilisé
            if (PosPlayer2 == Bounty2) Bounty2used = true; //si c'est le bounty 2 pris par le joueur2, il est utilisé
            if (PosPlayer2 == Bounty3) Bounty3used = true; //si c'est le bounty 3 pris par le joueur2, il est utilisé
            if (PosPlayer2 == Bounty4) Bounty4used = true; //si c'est le bounty 4 pris par le joueur2, il est utilisé
            if (PosPlayer2 == Bounty5) Bounty5used = true; //si c'est le bounty 5 pris par le joueur2, il est utilisé
            if (PosPlayer2 == Bounty6) Bounty6used = true; //si c'est le bounty 6 pris par le joueur2, il est utilisé
        }
        if (P1Bounted || P2Bounted) //si un joueur touche un bounty
        {
            unsigned i (rand()%3); //tire au sort un nombre de 0 à 2
            switch (i) //quel bounty est obtenu
            {
                case 0 : //Freeze Enemy
                    if (P1Bounted) //si le joueur 1 obtiens le bounty
                    {

                        P2Freeze = rand()%3+2; //nombre de tour où le joueur 1 est freeze, 2 à 4 tours
                        cout << "BOUNTY !!! Le Joueur ennemi a été Gelé !" << endl << flush; //message
                    }
                    if (P2Bounted) //si le joueur 2 touche un bounty
                    {
                        P1Freeze = rand()%3+2; //nb de tour où le joueur 2 est freeze, 2 à 4 tours
                        cout << "BOUNTY !!! Le Joueur ennemi a été Gelé !" << endl << flush; //message
                    }
                break; //quitter switch
            case 1 : //own freeze
                if (P1Bounted) //si le joueur un touche un bounty
                {
                    P1Freeze = rand()%3+2;//nombre de tour où le joueur 1 est freeze, 2 à 4 tours
                }
                if (P2Bounted) //si le joueur 2 touche un bounty
                {
                    P2Freeze = rand()%3+2; //nombre de tour où le joueur 2 est freeze, 2 à 4 tours
                }
            break; //quitter switch
            case 2 : //Random Teleport
                if (P1Bounted) //si le joueur un touche un bounty
                {
                    if (Bounty1 == PosPlayer1) bountyteleport(Bounty1, Mat, Param, PosPlayer1);
                    else if (Bounty2 == PosPlayer1) bountyteleport(Bounty2, Mat, Param, PosPlayer1);
                    else if (Bounty3 == PosPlayer1) bountyteleport(Bounty3, Mat, Param, PosPlayer1);
                    else if (Bounty4 == PosPlayer1) bountyteleport(Bounty4, Mat, Param, PosPlayer1);
                    else if (Bounty5 == PosPlayer1) bountyteleport(Bounty5, Mat, Param, PosPlayer1);
                    else if (Bounty6 == PosPlayer1) bountyteleport(Bounty6, Mat, Param, PosPlayer1);
                    //si le joueur un touche l'un des 6 bounty, appelle la fonction bountyteleport avec le bounty associé et le joueur
                    Mat [PosPlayer1.first][PosPlayer1.second] = Param.MapParamChar.find("TokenP1")->second; //affiche le joueur sur sa nouvelle position
                }
                else if (P2Bounted)
                {
                    if (Bounty1 == PosPlayer2) bountyteleport(Bounty1, Mat, Param, PosPlayer2);
                    else if (Bounty2 == PosPlayer2) bountyteleport(Bounty2, Mat, Param, PosPlayer2);
                    else if (Bounty3 == PosPlayer2) bountyteleport(Bounty3, Mat, Param, PosPlayer2);
                    else if (Bounty4 == PosPlayer2) bountyteleport(Bounty4, Mat, Param, PosPlayer2);
                    else if (Bounty5 == PosPlayer2) bountyteleport(Bounty5, Mat, Param, PosPlayer2);
                    else if (Bounty6 == PosPlayer2) bountyteleport(Bounty6, Mat, Param, PosPlayer2);
                    //si le joueur 2 touche l'un des 6 bounty, appelle la fonction bountyteleport avec le bounty associé et le joueur
                    Mat [PosPlayer2.first][PosPlayer2.second] = Param.MapParamChar.find("TokenP2")->second;//affiche le joueur sur sa nouvelle position
                }
            break; //quitter switch
            } //fin switch bounty random
        }// fin si un joueur touche un bounty

        ++PartyNum; //incremente de 1 le numéro du tour

        Player1Turn = !Player1Turn; //changement de joueur
    }//while (no victory)

    reset_input_mode (); //supprime le mode cononique

    if (!Victory) //si aucune victoire
    {
        Couleur (KColor.find("KMAgenta")->second); //mettre le texte en magenta
        cout << "Aucun vainqueur" << endl; //afficher message
        Couleur (KColor.find("KReset")->second); //mettre le texte en blanc
        for (int i = 0; i<3; ++i) //afficher 3 petits points pour un chargement
        {
            cout << "⠂" << flush; //affiche ub point
            usleep(microsecond); //pause de 1 seconde
        }
        main(); //appelle le main pour aller au menu du jeu
        return 1; //quitte le ppal
    }

    Couleur (KColor.find("KGreen")->second); //mettre le texte en vert
    cout << "Félicitations Joueur " << (Player1Turn ? '2' : '1')
         << " vous avez gagné :)" << endl; //message selon le joueur qui gagne
    Couleur (KColor.find("KReset")->second); //mettre le texte en blanc
    for (int i = 0; i<3; ++i) //affiche 3 . pour un chargement
    {
        cout << "⠂" << flush; //affiche un point
        usleep(microsecond); //pause de 1 seconde
    }
    main(); //appelle le main pour retourner au menu du jeu
    return 0; //quitte le ppal
} //popol ()

