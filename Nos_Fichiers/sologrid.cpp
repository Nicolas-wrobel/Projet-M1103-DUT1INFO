/*#include <iostream>
#include <iomanip>
#include "gridmanagementsolo.h"
#include "maps.h"

#include "game.h"
#include "type.h" //nos types
#include "params.h" //nos parametres
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
using namespace std;

struct termios saved_attributes;
bool used (false);
void SoloDisplayGrid (CMat & Mat, const CMyParam & Param)
{
    ClearScreen ();
    Color (KColor.find("KReset")->second);
    const unsigned KNbLine = Mat.size ();

    //const unsigned KNbCol  = Mat[0].size ();
    cout << "╔══════════════════════════════════════════════════╗" << endl;

    for (unsigned i (0); i < KNbLine; ++i)
    {
       cout << "║";
       for (unsigned j (0); j < Mat[i].size(); ++j)
       {
               cout << Mat[i][j];
       }
       cout << "║" << endl;
    }
    cout << "╚══════════════════════════════════════════════════╝" << endl;

}// DisplayGrid ()


void SoloInitGrid (CMat & Mat, const CMyParam & Params, CPosition & PacPlayer,
               CPosition & Candy1, CPosition & Candy2, CPosition & Candy3, CPosition & Candy4,
               CPosition & Ghost1, CPosition & Ghost2, CPosition & Ghost3, CPosition & Ghost4)
{
    Mat.resize (Params.MapParamUnsigned.find("NbRow")->second);
    const CVLine KLine (Params.MapParamUnsigned.find("NbColumn")->second, KEmpty);
    for (CVLine &ALine : Mat)
        ALine = KLine;
    cout << endl << "Veuillez choisir une des map suivantes :" << endl << "1. Map 1 | " << "2. Map 2 | " << "3. Map aléatoire" << flush; //Choose a map
        unsigned m;
        unsigned int microsecond = 1000000;
        bool joueur1picked (false);
        while (!joueur1picked)
         {
                cout << endl << "Faîtes votre choix : " << flush;
                if (!(cin >> m))
                {
                    cerr << endl << "Merci d'entrer un entier valide :" << endl;
                    cin.clear();
                    cin.ignore(1);
                }
                else{
                    joueur1picked = true;}
            if (m == 1)
                {
                    cout << endl << "Vous avez choisis la map 1 !" << flush;
                    FirstMapSolo(Mat);
                }
                else if (m == 2)
                {
                cout << endl << "Vous avez choisis la map 2 !" << flush;
                SecondMapSolo(Mat);
                }
                else if (m == 3)
                {
                    cout << endl << "Vous avez choisis aléatoire !" << flush;
                    unsigned alea = rand()%2;
                    if (alea == 0)
                    {
                        FirstMapSolo(Mat);
                    }
                    else
                    {
                        SecondMapSolo(Mat);
                    }
                }
    cout << endl;
    for (int i = 0; i<3; ++i)
    {
        cout << "⠂" << flush;
        usleep(microsecond);
    }
    PacPlayer.first = 7;
    PacPlayer.second = 24;
    Mat [PacPlayer.first][PacPlayer.second] = Params.MapParamChar.find("PacPlayer")->second;
    Mat [Candy1.first][Candy1.second] = Params.MapParamChar.find("Candy")->second;
    Mat [Candy2.first][Candy2.second] = Params.MapParamChar.find("Candy")->second;
    Mat [Candy3.first][Candy3.second] = Params.MapParamChar.find("Candy")->second;
    Mat [Candy4.first][Candy4.second] = Params.MapParamChar.find("Candy")->second;
    Mat [Ghost1.first][Ghost1.second] = Params.MapParamChar.find("Ghost")->second;
    Mat [Ghost2.first][Ghost2.second] = Params.MapParamChar.find("Ghost")->second;
    Mat [Ghost3.first][Ghost3.second] = Params.MapParamChar.find("Ghost")->second;
    Mat [Ghost4.first][Ghost4.second] = Params.MapParamChar.find("Ghost")->second;

    }
} //SoloInitGrid()
*/
