/*
 * \file GuiProgression.h
 *
 *  Created on: \date 15 ao�t 2013
 *      Author: \author joda
 *  \brief :
 */

#ifndef GUIPROGRESSION_H_
#define GUIPROGRESSION_H_


#include "Interface/Interface.h"

#include "GameState/GameStateManager.h"

/*
 *
 */
class GuiProgression : public GuiInterface
{
public:
	GuiProgression();
	virtual ~GuiProgression();

    bool connexionAnnuler(const CEGUI::EventArgs &e);

    void processProgression(Event * event);

	void update();

};

#endif /* GUIPROGRESSION_H_ */
