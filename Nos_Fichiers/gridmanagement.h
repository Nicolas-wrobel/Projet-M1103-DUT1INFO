#ifndef GRIDMANAGEMENT_H
#define GRIDMANAGEMENT_H

/*!
 * \file gridmanagement.h
 * \brief Set of usefull functions for the grid management
 * \author Nicolas Wrobel
 * \author Bénigne Demetz
 * \author Gwendal Besnard
 * \author Thibaud Melano
 * \author Manaud Calixte
 * \version 1.0
 * \date 22 janvier 2021
 */

#include <string>

#include "detail.h" //nos types
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
/**
 * @brief Clear the current terminal
 * @fn void ClearScreen ();
 */
void Clearecran ();

/**
 * @brief Set the color of the future input in the terminal
 * @param[in] Col : Next color to be used
 * @fn void Color (const std::string & Col);
 */
void Couleur (const std::string & Col);

/**
 * @brief Display the grid according to the parameters
 * @param[in] Mat : Game grid
 * @param[in] Params : : List of usefull parameters
 * @fn void DisplayGrid (const CMat & Mat, const CMyParam & Params, bool ShowLineNumber = true, bool ShowColor = true);
 */
void DisplayGrid (CMat & Mat, const CMyParam & Params);

/**
 * @brief InitGrid initialise la map et demande aux joueurs de voter un des 4 choix différents
 * @param Mat
 * @param Params
 * @param PosPlayer1
 * @param PosPlayer2
 * @param Bounty1
 * @param Bounty2
 * @param Bounty3
 * @param Bounty4
 * @param Bounty5
 * @param Bounty6
 * @param Teleport1
 * @param Teleport2
 * @fn void InitGrid (CMat & Mat, const CMyParam & Params, CPosition & PosPlayer1, CPosition & PosPlayer2, CPosition & Bounty1, CPosition & Bounty2, CPosition & Bounty3, CPosition & Bounty4, CPosition & Bounty5, CPosition & Bounty6,
 *      CPosition & Teleport1, CPosition & Teleport2);
 */
void InitGrid (CMat & Mat, const CMyParam & Params, CPosition & PosPlayer1, CPosition & PosPlayer2, CPosition & Bounty1, CPosition & Bounty2, CPosition & Bounty3, CPosition & Bounty4, CPosition & Bounty5, CPosition & Bounty6,
CPosition & Teleport1, CPosition & Teleport2);

/**
 * @brief reset_input_mode mode canonique
 */

void
reset_input_mode (void);

/**
 * @brief set_input_mode mode canonique
 */

void
set_input_mode (void);

/**
 * @brief teleporter fonction permettant de téléporter
 * @param PosPlayer1
 * @param teleport1
 * @param teleport2
 * @return Nouvelle position du joueur
 */

CPosition teleporter (CPosition & PosPlayer1, const CPosition & teleport1, const CPosition & teleport2);

#endif // GRIDMANAGEMENTSOLO_H
