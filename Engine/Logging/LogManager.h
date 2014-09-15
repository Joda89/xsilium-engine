/*
* \file LogManager.h
*
*  Created on: \date 12 septembre 2014
*      Author: \author xelfe
*  \brief : Fichier d'en-t�te de la classe LogManager
*/
#ifndef LOGMANAGER_H_
#define LOGMANAGER_H_

/*!
* \namespace Engine
* \brief Espace de nommage regroupant les dff�rentes classes du moteur.
*/
namespace Engine {

	/*!
	* \class LogManager
	* \brief Classe gestionnaire de log.
	*
	* Classe permettant de g�rer les diff�rentes niveaux de log selon la configuration de compile.
	*
	*/
	class LogManager  {
	public:
		LogManager();
		virtual ~LogManager();

	};

} /* namespace Engine */
#endif /* LOGMANAGER_H_ */