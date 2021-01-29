#ifndef GAME_H
#define GAME_H

/*!
 * \file game.h
 * \brief coeur du jeu
 * \author Nicolas Wrobel
 * \author Bénigne Demetz
 * \author Gwendal Besnard
 * \author Thibaud Melano
 * \author Manaud Calixte
 * \version 1.0
 * \date 22 janvier 2021
 */

#include "detail.h"


/*!
 * \brief Move the current token according to the character in the 2nd parameter
 * \param[in, out] Mat the matrix before and after the move
 * \param[in] Move the key pressed by the user
 * \param[in, out] Pos the player's position before and after the move
 */

void MoveToken (CMat & Mat, const char & Move, CPosition & Pos, const CMyParam & Param);

/**
 * @brief nextPos permet de savoir si la position suivante est un caractère définies.
 * @param Destination
 * @param Mat
 * @return si c'est un mur ou non
 * @fn bool nextPos (CPosition & Destination, CMat & Mat);
 */
bool nextPos (CPosition & Destination, CMat & Mat);

/**
 * @brief summonTeleport permet de créer et afficher les téléporteurs dans la matrice
 * @param Teleport1
 * @param Teleport2
 * @fn void summonTeleport (CPosition & Teleport1, CPosition & Teleport2);
 */

void summonTeleport (CPosition & Teleport1, CPosition & Teleport2);

/**
 * @brief summonBounty permet de créer et afficher les bounties dans la matrice
 * @param Bounty
 * @param Bounty1
 * @param Bounty2
 * @param Bounty3
 * @param Bounty4
 * @param Bounty5
 * @param Mat
 * @fn void summonBounty (CPosition & Bounty, CPosition & Bounty1, CPosition & Bounty2,
 *                  CPosition & Bounty3, CPosition & Bounty4, CPosition & Bounty5, const CMat & Mat);
 */

void summonBounty (CPosition & Bounty, CPosition & Bounty1, CPosition & Bounty2,
                   CPosition & Bounty3, CPosition & Bounty4, CPosition & Bounty5, const CMat & Mat);

/**
 * @brief new main
 * @return 0 if everything is OK
 * @fn int ppal ();
 */
int popol ();

#endif // GAME_H
