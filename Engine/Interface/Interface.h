#ifndef INTERFACE_H_
#define INTERFACE_H_

#include <CEGUI/CEGUI.h>
#include <CEGUI/RendererModules/Ogre/Renderer.h>

#include "EventManager/EventManager.h"

class Interface
{

public:
	Interface();
	~Interface();

	void toggleVisibility();
	bool isVisible() const;

	bool isActive();

	void update();

    void initialisationInterface();
	void interfacePrincipal();
	void deleteInterfacePrincipal();


protected:
    CEGUI::Window* d_root;
    CEGUI::Window* parent;
    EventManager * eventManager ;

    bool isActived;
};

#endif /* INTERFACE_H_ */
