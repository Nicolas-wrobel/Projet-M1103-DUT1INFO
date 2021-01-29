#include <iostream>
#include <iomanip>
#include "gridmanagement.h"
#include "mapsolo1v1.h"

#include "game1v1.h"
#include "detail.h" //nos types
#include "parameter.h" //nos parametres
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
using namespace std;

struct termios saved_attributes;
void Clearecran() //fonciton pour effacer l'écran
{
    cout << "\033[H\033[2J"; //message
}// ClearScreen ()

void Couleur (const string & Col) //fonction pour modifier la couleur du texte
{
    cout << "\033[" << Col.c_str () <<"m"; //message
} // Couleur ()

void DisplayGrid (CMat & Mat, const CMyParam & Param) //fonction pour afficher la matrice
{
    Clearecran(); //efface l'écran
    Couleur (KColor.find("KReset")->second); //met la couleur du texte en blance
    const unsigned KNbLine = Mat.size (); //initialise le nb de ligne de la matrice

    cout << "╔══════════════════════════════════════════════════╗" << endl; //affiche le bord haut de la carte

    for (unsigned i (0); i < KNbLine; ++i) //pour chaque ligne
    {
       cout << "║"; //afficher le mur gauche de la carte
       for (unsigned j (0); j < Mat[i].size(); ++j) // pour chaque colonne de la matrice
       {
           if (Param.MapParamChar.find("TokenP1")->second ==  Mat[i][j]) //si le joueur 1 est écrit dans la colonne
              Couleur (Param.MapParamString.find("ColorP1")->second ); //changer sa couleur
           else if (Param.MapParamChar.find("TokenP2")->second == Mat[i][j]) //si le joueur 2 est écrit dans la colonne
             Couleur (Param.MapParamString.find("ColorP2")->second ); //changer s acouleur
           else
               Couleur (KColor.find("KReset")->second); //mettre en blanc
               cout << Mat[i][j]; //afficher la case (i,j) de la matrice
           Couleur (KColor.find("KReset")->second); //mettre couleur ne blanc
       }
       cout << "║" << endl; //afficher mur droit
    }
    cout << "╚══════════════════════════════════════════════════╝" << endl; //afficher mur bas

}// DisplayGrid ()

void InitGrid (CMat & Mat, const CMyParam & Params, CPosition & PosPlayer1, CPosition & PosPlayer2, CPosition & Bounty1, CPosition & Bounty2, CPosition & Bounty3, CPosition & Bounty4, CPosition & Bounty5, CPosition & Bounty6,
               CPosition & Teleport1, CPosition & Teleport2) //fonciton  pour créer la matrice
{
    Mat.resize (Params.MapParamUnsigned.find("NbRow")->second); //nb de ligne obtenu depuis le fichier parametre
    const CVLine KLine (Params.MapParamUnsigned.find("NbColumn")->second, KEmpty); //nb de colonne obtenu depuis le fichier de parametre
    for (CVLine &ALine : Mat)
        ALine = KLine;
    cout << endl << "Veuillez choisir une des map suivantes :" << endl << "1. Map 1 | " << "2. Map 2 | " << "3. Map 3 | " << "4. Map aléatoire" << flush; //Choose a map
        unsigned m, n; // crée les variables avec les chois stockés
        unsigned int microsecond = 1000000;
        bool MapChoisie (false);
        bool joueur1picked (false);
        bool joueur2picked (false);
        while (!joueur1picked) //tant que joueur 1 n' apas choisi une vrai carte qui existe
         {
                cout << endl << "Joueur 1 votre choix : " << flush;
                if (!(cin >> m)) //verification que c'est un chiffre
                {
                    cerr << endl << "Merci d'entrer un entier valide :" << endl;
                    cin.clear();
                    cin.ignore(1);
                }
                else
                    joueur1picked = true; //stocker que le joueur 1 a joué
        }
        while(!joueur2picked) //tant que joueur 2 n'a pas choisi
        {
            cout << endl << "Joueur 2 votre choix : " << flush;
            if (!(cin >> n)) //verification que c'est un chiffre
            {
                cerr << endl << "Merci d'entrer un entier valide" << endl;
                cin.clear();
                cin.ignore(1);
            }
            else{
                joueur2picked = true;} //stocker que le joueur 2 a joué
        }
        while (!MapChoisie) //tant que la map n'est pas choisi
        {
            if (m == 1 && n == 1) //si les deux joueurs ont choisi la map 1
                {
                    cout << endl << "Vous avez tous les deux choisis la map 1 !" << flush;
                    MapChoisie = true; //la map a été choisi
                    FirstMap1v1(Mat); //lance la premiere map dans la matrice
                }
                else if (m ==2 && n == 2) //si les deux joueur ont choisi la map 2
                {
                cout << endl << "Vous avez tous les deux choisis la map 2 !" << flush;
                MapChoisie = true; //la map a été choisi
                SecondMap1v1(Mat); //lance la deuxieme map
                }
                else if (m == 3 & n == 3)// si les deux joueurs ont choisi la map 3
                {
                cout << endl << "Vous avez tous les deux choisis la map 3 !" << flush;
                MapChoisie = true; // la map a été choisi
                ThirdMap1v1(Mat); //lance l atroisieme map
                }
                else if (m == 4 && n == 4) // si les deux joueurs ont choisi map random
                {
                    cout << endl << "Vous avez tous les deux choisis aléatoire !" << flush;
                    unsigned alea = rand()%3; //random
                    if (alea == 0) //choix de la map random avec "alea"
                    {
                        FirstMap1v1(Mat); //lance premiere map
                        MapChoisie = true;
                    }
                    else if (alea == 1)
                    {
                        SecondMap1v1(Mat); //lance deuxieme map
                        MapChoisie = true;
                    }
                    else
                    {
                        ThirdMap1v1(Mat); //lance troisieme map
                        MapChoisie = true;
                    }
                }
                else if (m != n) //si choix differents, map aléatoire
                {
                    cout << endl << "Vous n'avez tous les deux pas choisis la même map, ce sera donc un choix aléatoire !" << flush;
                    unsigned alea = rand()%3;
                    if (alea == 0)
                    {
                        FirstMap1v1(Mat); //lancement 1e map
                        MapChoisie = true;
                    }
                    else if (alea == 1)
                    {
                        SecondMap1v1(Mat); //lanceent map 2
                        MapChoisie = true;
                    }
                    else
                    {
                        ThirdMap1v1(Mat); //lancement map 3
                        MapChoisie = true;
                    }
                }
        }
    cout << endl;
    for (int i = 0; i<3; ++i)//afficher 3 petits points
    {
        cout << "⠂" << flush;
        usleep(microsecond); //pause pendant 1 seconde
    }
    PosPlayer1.first = 7; //joueur 1 colonne 7
    PosPlayer1.second = Params.MapParamUnsigned.find("NbColumn")->second - 4; //joueur 1 ligne en fonction du nb de colonne max -4
    Mat [PosPlayer1.first][PosPlayer1.second] = Params.MapParamChar.find("TokenP1")->second; //afficher joueur avec lettre des params
    PosPlayer2.first = 7; // joueur 2 ligne
    PosPlayer2.second = 3; //joueur 2 colonne
    Mat [PosPlayer2.first][PosPlayer2.second] = Params.MapParamChar.find("TokenP2")->second;//afficher joueur 2
    Mat [Teleport1.first][Teleport1.second] = Params.MapParamChar.find("Teleport")->second; //afficher teleporteur 1
    Mat [Teleport2.first][Teleport2.second] = Params.MapParamChar.find("Teleport")->second; //afficher teleporteur 2
    Mat [Bounty1.first][Bounty1.second] = Params.MapParamChar.find("Bounty")->second; //afficher bounty1
    Mat [Bounty2.first][Bounty2.second] = Params.MapParamChar.find("Bounty")->second; //affciehr bounty2
    Mat [Bounty3.first][Bounty3.second] = Params.MapParamChar.find("Bounty")->second;//afficher bounty1
    Mat [Bounty4.first][Bounty4.second] = Params.MapParamChar.find("Bounty")->second;//afficher bounty1
    Mat [Bounty5.first][Bounty5.second] = Params.MapParamChar.find("Bounty")->second;//afficher bounty1
    Mat [Bounty6.first][Bounty6.second] = Params.MapParamChar.find("Bounty")->second;//afficher bounty1
} // InitGrid ()
void
reset_input_mode (void) //fonction pour supprimer mode canonique
{
  tcsetattr (STDIN_FILENO, TCSANOW, &saved_attributes);
}

void
set_input_mode (void) //fonction pour mettre en route le mode canonique
{
  struct termios tattr;
  char *name;

  /* Make sure stdin is a terminal. */
  if (!isatty (STDIN_FILENO))
    {
      fprintf (stderr, "Not a terminal.\n");
      exit (EXIT_FAILURE);
    }

  /* Save the terminal attributes so we can restore them later. */
  tcgetattr (STDIN_FILENO, &saved_attributes);
  atexit (reset_input_mode);

  /* Set the funny terminal modes. */
  tcgetattr (STDIN_FILENO, &tattr);
  tattr.c_lflag &= ~(ICANON|ECHO); /* Clear ICANON and ECHO. */
  tattr.c_cc[VMIN] = 1;
  tattr.c_cc[VTIME] = 0;
  tcsetattr (STDIN_FILENO, TCSAFLUSH, &tattr);
}

CPosition teleporter(CPosition & PosPlayer, const CPosition & teleport1, const CPosition & teleport2) //fonction pour teleporter le joueur d'un teleporteur à un autres
{
    if (PosPlayer == teleport1)
    {
        PosPlayer = teleport2;
    }
    else if (PosPlayer == teleport2)
    {
        PosPlayer = teleport1;
    }
    return PosPlayer;
}
