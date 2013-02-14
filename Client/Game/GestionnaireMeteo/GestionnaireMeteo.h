/*
 * \file GestionnaireMeteo.h
 *
 *  Created on: \date 14 f�vr. 2013
 *      Author: \author joda
 *  \brief :
 */

#ifndef GESTIONNAIREMETEO_H_
#define GESTIONNAIREMETEO_H_

#include "XsiliumFramework.h"

#include "HydraxRttListener/HydraxRttListener.h"


/*
 *
 */
class GestionnaireMeteo :  public Ogre::FrameListener {
public:
	GestionnaireMeteo(Ogre::SceneManager *sm, Ogre::Camera *c);
	virtual ~GestionnaireMeteo();

	void create();

    bool frameStarted(const Ogre::FrameEvent& evt);

    void updateEnvironmentLighting();
    void updateShadowFarDistance();

private:
	Ogre::SceneManager*			m_pSceneMgr;
	Ogre::Camera*				m_pCamera;


    SkyX::SkyX* mSkyX ;
    SkyX::BasicController* mBasicController;
    Hydrax::Hydrax* mHydrax;


	// Color gradients
	SkyX::ColorGradient mWaterGradient,
		                mSunGradient,
						mAmbientGradient;

	Ogre::Real mLastPositionLength;

};

#endif /* GESTIONNAIREMETEO_H_ */
