#ifndef PARAMS_H
#define PARAMS_H

/*!
 * \file params.h
 * \brief recuperer parametres stockés dans le fichier de configuration
 * \author Nicolas Wrobel
 * \author Bénigne Demetz
 * \author Gwendal Besnard
 * \author Thibaud Melano
 * \author Manaud Calixte
 * \version 1.0
 * \date 22 janvier 2021
 */

#include "detail.h"

/**
 * @brief Initialize the set of parameters from scratch
 * @param[out] Param : List of usefull parameters
 * @fn void InitParams (CMyParam & Param);
 */
void InitialiseParams (CMyParam & Param);

/**
 * @brief Load the set of parameters from a YAML file
 * @param[out] Param : List of usefull parameters
 * @param[in] FileName : Path to the file to load
 * @fn void LoadParams (CMyParam & Param);
 * @return 0 if everything is OK, return 2 if it can't load the file
 */
int ChargeParams (CMyParam & Param, const std::string & FileName);
#endif // PARAMS_H
