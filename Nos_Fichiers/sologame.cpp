/*#include <iostream>

#include "game.h"
#include "params.h"
#include "gridmanagementsolo.h"
#include "main.cpp"

#include <map>
#include <cstdlib>
using namespace std;
unsigned int microsecond = 1000000;
bool canEat (false);
template <class T, class U>
void ShowMap (const map<T,U> & AMap){
    for (const pair <T,U> & Val : AMap)                cout << "Cle : " << Val.first << "   "             << "Valeur : " << Val.second << endl;
    cout << endl;
}// ShowMap ()

void MoveGhost(CPosition & Ghost)
{
    unsigned rng (rand()%4);
    switch (rng)
    {
    case 0:
        Ghost.first -=1;
    case 1:
        Ghost.first +=1;
    case 2:
        Ghost.second +=1;
    case 3:
        Ghost.second -=1;
    }
}

bool Ghostdead(bool & EatCandy, CPosition & PacPlayer, CPosition & Ghost)
{
    if (EatCandy && PacPlayer == Ghost)
        {
            return true;
        }
    return false;
}

bool EatCandy(CPosition & PacPlayer, CPosition & Candy)
{
    int timer = 8*microsecond;
    if (timer > 0)
    {
        canEat = true;
        --timer;
    }
    if (PacPlayer == Candy)
    {
        cout << "Vous avez mangé un bonbon !" << endl << flush;
        return true;
    }
    return false;
}*/

/* int popal (void)
{
    set_input_mode ();
    CMat Mat;

    bool Victory (false);

    CPosition PacPlayer;

    CMyParam Param;
    int RetVal = LoadParams(Param, "../PacMan/Nos_Fichiers/config.yaml");
    if (RetVal != 0)
    {
        return RetVal;
    }

    srand((unsigned int) time (0));
    CPosition Ghost1 = {6,1}, Ghost2 = {6,2}, Ghost3 = {6,46}, Ghost4 = {6,45};
    CPosition Candy1({7,7}), Candy2({7,42}), Candy3({7,17}), Candy4({7,32});

    SoloInitGrid (Mat, Param, PacPlayer, Candy1, Candy2, Candy3, Candy4, Ghost1, Ghost2, Ghost3, Ghost4);
    SoloDisplayGrid (Mat, Param);

    while (!Victory)
    {
        cout << "Appuyez sur P pour quitter" << endl << endl << flush;
        cout << "Entrez un déplacement : " << endl << flush;

        char Move;
        read (STDIN_FILENO, &Move, 1);
        if (Move == 'p')
        {
            break;
        }

        Move = toupper (Move);
        MoveToken (Mat, Move, PacPlayer, Param);
        ClearScreen();
        SoloDisplayGrid (Mat, Param);

        //Victory test
       //if (Snack == 10 || (Ghostdead(EatCandy, PacPlayer, Ghost1) && Ghostdead(EatCandy, PacPlayer, Ghost2) &&
         //                  Ghostdead(EatCandy, PacPlayer, Ghost3) && Ghostdead(EatCandy, PacPlayer, Ghost4)) Victory = true;

//    }while (no victory)

     reset_input_mode ();

    if (!Victory)
    {
        Color (KColor.find("KMAgenta")->second);
        cout << "Aucun vainqueur" << endl;
        Color (KColor.find("KReset")->second);
        for (int i = 0; i<3; ++i)
        {
            cout << "⠂" << flush;
            usleep(microsecond);
        }
        main();
        return 1;
   }

    Color (KColor.find("KGreen")->second);
    cout << "Félicitations, vous avez gagné :)" << endl;
    Color (KColor.find("KReset")->second);
    for (int i = 0; i<3; ++i)
    {
        cout << "⠂" << flush;
        usleep(microsecond);
    }
    main();
    return 0;
    }
}//popal ()*/
