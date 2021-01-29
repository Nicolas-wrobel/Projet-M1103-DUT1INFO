#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
#include "parameter.h"


using namespace std;


void InitialiseParams (CMyParam & Param)
{
    //Move Keys
    Param.MapParamChar["KeyUp"]   = 'z';
    Param.MapParamChar["KeyDown"] = 's';
    Param.MapParamChar["KeyLeft"] = 'q';
    Param.MapParamChar["KeyRight"] = 'd';
    Param.MapParamChar["TokenP1"] = 'X';
    Param.MapParamChar["TokenP2"] = 'O';
    Param.MapParamChar["Teleport"] = "ѻ";
    Param.MapParamChar["Bounty"] = '?';
    //Param.MapParamChar["Candy"] = "Ⓑ";
    //Param.MapParamChar["Ghost"] = 'M';
    //Param.MapParamChar["Snack"] = "⠂";
    //Param.MapParamChar["PacPlayer"] = "<";

    //Size of grid -- suppose to be a rectangle
    Param.MapParamUnsigned["NbColumn"] = 50;
    Param.MapParamUnsigned["NbRow"] = 15;

    //Display Colors
    Param.MapParamString["ColorP1"] = KColor.find("KRed")->second ;
    Param.MapParamString["ColorP2"] = KColor.find("KGreen")->second ;
}

int ChargeParams (CMyParam & Param, const std::string & FileName)
{
    ifstream ifs (FileName);
    if (!ifs.is_open())
    {
        cerr << "pas le bon fichier de configuration";
        return 2;
    }
    string Key;
    while (ifs >> Key)
    {
        char tmp;
        ifs >> tmp;        
        if (find (KAuthorizedKey2.VParamChar.begin(), KAuthorizedKey2.VParamChar.end(), Key) != KAuthorizedKey2.VParamChar.end())
            ifs >> Param.MapParamChar[Key];
        else if (find (KAuthorizedKey2.VParamUnsigned.begin(), KAuthorizedKey2.VParamUnsigned.end(), Key) != KAuthorizedKey2.VParamUnsigned.end())
            ifs >> Param.MapParamUnsigned[Key];
        else if (find (KAuthorizedKey2.VParamString.begin(), KAuthorizedKey2.VParamString.end(), Key) != KAuthorizedKey2.VParamString.end())
        {
            string Val;
            ifs >> Val;
            Param.MapParamString[Key] = KColor.find(Val)->second;
        }
    }
    return 0;
}
