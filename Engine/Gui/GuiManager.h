/*
* \file GuiManager.h
*
*  Created on: \date 7 ao�t 2014
*      Author: \author joda
*  \brief : Fichier d'en-t�te du gestionnaire d'interface GUI
*/
#ifndef GUIMANAGER_H_
#define GUIMANAGER_H_

#ifdef WIN32
#define interface QQInterface
#endif

#include "Engine/Engine.h"
#include <CEGUI/CEGUI.h>
#include <CEGUI/RendererModules/Ogre/Renderer.h>

/*!
* \namespace Engine
* \brief Espace de nommage regroupant les dff�rentes classes du moteur.
*/
namespace Engine {

	/*!
	* \class GuiManager
	* \brief Classe gestionnaire d'interface GUI.
	*
	* Classe permettant de g�rer les diff�rentes interface graphique.
	*
	*/
	class GuiManager : public EngineListenner , public Ogre::FrameListener {
	public:
		/*!
		*  \brief Constructeur.
		*
		*  Constructeur de la classe GuiManager.
		*
		*/
		GuiManager();

		/*!
		*  \brief Destructeur.
		*
		*  Destructeur abstrait de la classe GuiManager.
		*
		*/
		virtual ~GuiManager();

		/*!
		* \brief Application d'�vennements.
		*
		* Proc�de � l'�vennement si il existe
		*
		* \param event Instance d'�vennement pass� en param�tre par le client
		*
		*/
		void processEvent(Event* event);

		/*!
		* \brief M�thode d'extinction
		*
		*/
		void shutdown();

		/*!
		* \brief Methode avant le chargement d'un frame
		*
		* \praram m_FrameEvent Instance de la constante Ogre::FrameEvent
		*
		* \return true si appell�
		*/
		bool frameStarted(const Ogre::FrameEvent& m_FrameEvent);

		/*!
		* \brief Methode apr�s le chargement de tous les frames
		*
		* M�thode qui est charg� quand tous les �vennements par frame � �t� appeller.
		* 
		*
		* \praram m_FrameEvent Instance de la constante Ogre::FrameEvent
		*
		* \return true si appell�
		*/
		bool frameRenderingQueued(const Ogre::FrameEvent& m_FrameEvent);

		/*!
		* \brief Methode apr�s le chargement d'un frame
		*
		* \praram m_FrameEvent Instance de la constante Ogre::FrameEvent
		*
		* \return true si appell�
		*/
		bool frameEnded(const Ogre::FrameEvent& m_FrameEvent);

		/*!
		* \brief Methode de configuration du theme GUI
		*
		* \praram event Instance d'evennement pass� en param�tre par le client
		*
		*/
		void setTheme(Event* event);

		/*!
		* \brief M�thode de chargement de l'interface principale GUI
		*
		*/
		void interfacePrincipal();

		/*!
		* \brief M�thode de destruction de l'interface principale GUI
		*
		*/
		void deleteInterfacePrincipal();

	private:
		bool interfacePrincipale; /*!< R�sultat d�signant si interfacePrincpale() � �t� initialis�. */
	};

} /* namespace Engine */

#endif /* GUIMANAGER_H_ */
