/*
* \file InputGui.h
*
*  Created on: \date 25 ao�t 2014
*      Author: \author xelfe joda
*  \brief : Fichier d'en-t�te de la classe InputGui
*/
#ifndef INPUTGUI_H_
#define INPUTGUI_H_

#include <CEGUI/CEGUI.h>
#include <CEGUI/RendererModules/Ogre/Renderer.h>

#include "Input/InputManager.h"

/*!
* \namespace Engine
* \brief Espace de nommage regroupant les dff�rentes classes du moteur.
*/
namespace Engine {

	/*!
	* \class InputGui
	* \brief Classe de gestion des input pour GUI.
	*
	*/
	class InputGui : public OIS::KeyListener, public OIS::MouseListener {
	public:
		/*!
		*  \brief Constructeur.
		*
		*  Constructeur de la classe InputGui.
		*
		*/
		InputGui();

		/*!
		*  \brief Destructeur.
		*
		*  Destructeur abstrait de la classe InputGui.
		*
		*/
		virtual ~InputGui();

	};
}
#endif /* INPUTGUI_H_ */

