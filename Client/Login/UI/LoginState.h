#ifndef LOGIN_STATE_H
#define LOGIN_STATE_H

#include "AppState.h"
#include "Authentification.h"
#include "string.h"
#include "ListOfMessage/ListOfMessage.h"

class Authentification;

class LoginState : public OIS::KeyListener,public AppState
{
public:
    LoginState();

	DECLARE_APPSTATE_CLASS(LoginState)

	void enter();
	void createScene();
	void exit();

	bool PushConnexion(const CEGUI::EventArgs &e);
	bool CloseButton(const CEGUI::EventArgs &e);
	bool handleSubmit(const CEGUI::EventArgs& args);

	bool keyPressed(const OIS::KeyEvent &keyEventRef);
	bool keyReleased(const OIS::KeyEvent &keyEventRef);

	void update(double timeSinceLastFrame);


	void setMessage(int typeMessage,int message);
private:
	bool m_bQuit;
	CEGUI::Window* frame;
	CEGUI::Window* popupLogin;
	Authentification * auth;
	InputManager * inputManager;
	bool messageFlag;
};


#endif /* LOGIN_STATE_H */