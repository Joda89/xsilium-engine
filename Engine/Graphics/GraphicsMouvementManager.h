/*
 * \file GraphicsMouvementManager.h
 *
 *  Created on: \date 8 janv. 2015
 *      Author: \author joda
 *  \brief :
 */
#ifndef ENGINE_GRAPHICS_GRAPHICSMOUVEMENTMANAGER_H_
#define ENGINE_GRAPHICS_GRAPHICSMOUVEMENTMANAGER_H_

#include "Event/Event.h"
#include "Input/InputManager.h"
#include "GraphicsCamera.h"

namespace Engine {

/*
 *
 */

class GraphicsMouvementManager : public OIS::MouseListener  {
public:
	GraphicsMouvementManager();
	virtual ~GraphicsMouvementManager();

	void setGraphicsCamera(GraphicsCamera * graphicsCamera);

	void processEvent(Event * event);

	void update(double timeSinceLastFrame);


	bool mouseMoved(const OIS::MouseEvent &e);
	bool mousePressed(const OIS::MouseEvent &e, OIS::MouseButtonID id);
	bool mouseReleased(const OIS::MouseEvent &e, OIS::MouseButtonID id);


private:
	GraphicsCamera * graphicsCamera;
	Ogre::Vector3 direction;

};

} /* namespace Engine */

#endif /* ENGINE_GRAPHICS_GRAPHICSMOUVEMENTMANAGER_H_ */