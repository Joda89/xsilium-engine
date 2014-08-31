/*
* \file GraphicsCamera.h
*
*  Created on: \date 31 ao�t 2014
*      Author: \author xelfe 
*  \brief : Fichier d'en-t�te du gestionnaire d'interface GUI
*/
#ifndef __GraphicsCamera_H__
#define __GraphicsCamera_H__

#include "Ogre.h"
#include <limits>

#include <OISMouse.h>
#include <OISKeyboard.h>

/*!
* \namespace Engine
* \brief Espace de nommage regroupant les dff�rentes classes du moteur.
*/
namespace Engine {

	/*! \enum CameraStyle
	*  \brief Constante de style.
	*
	*  Constante de nom de style de mouvements disponible pour GraphicsCamera
	*
	*/
	enum CameraStyle {
		CS_FREELOOK,
		CS_ORBIT,
		CS_MANUAL
	};

	/*!
	* \class GraphicsCamera
	* \brief Classe de controle de la camera.
	*
	* Classe permettant de g�rer les diff�rent style de camera.
	*
	*/
	class GraphicsCamera {

	public:
		GraphicsCamera();
		virtual ~GraphicsCamera(); 

		/*-----------------------------------------------------------------------------
		| Swaps the camera on our camera man for another camera.
		-----------------------------------------------------------------------------*/
		virtual void setCamera(Ogre::Camera* cam);

		virtual Ogre::Camera* getCamera();

		/*-----------------------------------------------------------------------------
		| Sets the target we will revolve around. Only applies for orbit style.
		-----------------------------------------------------------------------------*/
		virtual void setTarget(Ogre::SceneNode* target);

		virtual Ogre::SceneNode* getTarget();

		/*-----------------------------------------------------------------------------
		| Sets the spatial offset from the target. Only applies for orbit style.
		-----------------------------------------------------------------------------*/
		virtual void setYawPitchDist(Ogre::Radian yaw, Ogre::Radian pitch, Ogre::Real dist);

		/*-----------------------------------------------------------------------------
		| Sets the camera's top speed. Only applies for free-look style.
		-----------------------------------------------------------------------------*/
		virtual void setTopSpeed(Ogre::Real topSpeed);

		virtual Ogre::Real getTopSpeed();

		/*-----------------------------------------------------------------------------
		| Sets the movement style of our camera man.
		-----------------------------------------------------------------------------*/
		virtual void setStyle(CameraStyle style);

		virtual CameraStyle getStyle();

		/*-----------------------------------------------------------------------------
		| Manually stops the camera when in free-look mode.
		-----------------------------------------------------------------------------*/
		virtual void manualStop();

		virtual bool frameRenderingQueued(const Ogre::FrameEvent& evt);

		/*-----------------------------------------------------------------------------
		| Processes key presses for free-look style movement.
		-----------------------------------------------------------------------------*/
		virtual void injectKeyDown(const OIS::KeyEvent& evt);

		/*-----------------------------------------------------------------------------
		| Processes key releases for free-look style movement.
		-----------------------------------------------------------------------------*/
		virtual void injectKeyUp(const OIS::KeyEvent& evt);

		/*-----------------------------------------------------------------------------
		| Processes mouse movement differently for each style.
		-----------------------------------------------------------------------------*/
		virtual void injectMouseMove(const OIS::MouseEvent& evt);

		/*-----------------------------------------------------------------------------
		| Processes mouse presses. Only applies for orbit style.
		| Left button is for orbiting, and right button is for zooming.
		-----------------------------------------------------------------------------*/
		virtual void injectMouseDown(const OIS::MouseEvent& evt, OIS::MouseButtonID id);


		/*-----------------------------------------------------------------------------
		| Processes mouse releases. Only applies for orbit style.
		| Left button is for orbiting, and right button is for zooming.
		-----------------------------------------------------------------------------*/
		virtual void injectMouseUp(const OIS::MouseEvent& evt, OIS::MouseButtonID id);
			
	protected:

		Ogre::Camera*		mCamera;
		CameraStyle			mStyle;
		Ogre::SceneNode*	mTarget;
		bool				mOrbiting;
		bool				mZooming;
		Ogre::Real			mTopSpeed;
		Ogre::Vector3		mVelocity;
		bool				mGoingForward;
		bool				mGoingBack;
		bool				mGoingLeft;
		bool				mGoingRight;
		bool				mGoingUp;
		bool				mGoingDown;
		bool				mFastMove;
	};
}

#endif
