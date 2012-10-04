#include "LoginState.h"
#include "CEGUI/CEGUI.h"


using namespace Ogre;

LoginState::LoginState()
{
    m_bQuit         = false;
    m_FrameEvent    = Ogre::FrameEvent();
}

void LoginState::enter()
{
    OgreFramework::getSingletonPtr()->m_pLog->logMessage("Entering LoginState...");
    CEGUI::WindowManager& winMgr(CEGUI::WindowManager::getSingleton());

    CEGUI::Window* base = winMgr.createWindow("DefaultWindow", "CEGUIApp/XsiliumLogin");

    CEGUI::Window* sheet = winMgr.loadLayoutFromFile("XsiliumLogin.layout");
    // attach this to the 'real' root
    base->addChild(sheet);

	CEGUI::Window *frame = sheet->getChild("CEGUIApp");
	frame->activate();

    CEGUI::System::getSingleton().getDefaultGUIContext().setRootWindow(sheet);

    m_pSceneMgr = OgreFramework::getSingletonPtr()->m_pRoot->createSceneManager(ST_GENERIC, "LoginSceneMgr");
    m_pSceneMgr->setAmbientLight(Ogre::ColourValue(0.7f, 0.7f, 0.7f));

    m_pCamera = m_pSceneMgr->createCamera("MenuCam");
    m_pCamera->setPosition(Vector3(0, 50, 100));
    m_pCamera->lookAt(Vector3(0, 0, 0));
    m_pCamera->setNearClipDistance(1);


    m_pCamera->setAspectRatio(Real(OgreFramework::getSingletonPtr()->m_pViewport->getActualWidth()) /
        Real(OgreFramework::getSingletonPtr()->m_pViewport->getActualHeight()));

    OgreFramework::getSingletonPtr()->m_pViewport->setCamera(m_pCamera);

    createScene();
}

void LoginState::createScene()
{
    ParticleSystem* ps;
    ps = m_pSceneMgr->createParticleSystem("Nimbus", "Xsilium/GreenyNimbus");
    		m_pSceneMgr->getRootSceneNode()->attachObject(ps);
}

void LoginState::exit()
{
    OgreFramework::getSingletonPtr()->m_pLog->logMessage("Leaving LoginState...");

    m_pSceneMgr->destroyCamera(m_pCamera);
    if(m_pSceneMgr)
        OgreFramework::getSingletonPtr()->m_pRoot->destroySceneManager(m_pSceneMgr);

}

bool LoginState::keyPressed(const OIS::KeyEvent &keyEventRef)
{
    if(OgreFramework::getSingletonPtr()->m_pKeyboard->isKeyDown(OIS::KC_ESCAPE))
    {
        m_bQuit = true;
        return true;
    }
    CEGUI::System& gui_system(CEGUI::System::getSingleton());


     // do event injection
     CEGUI::GUIContext& ctx = CEGUI::System::getSingleton().getDefaultGUIContext();

     // key down
     ctx.injectKeyDown(static_cast<CEGUI::Key::Scan>(keyEventRef.key));

     // now character
     ctx.injectChar(keyEventRef.text);
    OgreFramework::getSingletonPtr()->keyPressed(keyEventRef);
    return true;
}

bool LoginState::keyReleased(const OIS::KeyEvent &keyEventRef)
{
    CEGUI::System::getSingleton().getDefaultGUIContext().
        injectKeyUp(static_cast<CEGUI::Key::Scan>(keyEventRef.key));
    OgreFramework::getSingletonPtr()->keyReleased(keyEventRef);
    return true;
}

bool LoginState::mouseMoved(const OIS::MouseEvent &evt)
{
	CEGUI::GUIContext& ctx = CEGUI::System::getSingleton().getDefaultGUIContext();

	   ctx.injectMouseMove(evt.state.X.rel, evt.state.Y.rel);
	   ctx.injectMouseWheelChange(evt.state.Z.rel / 120.0f);
    return true;
}

bool LoginState::mousePressed(const OIS::MouseEvent &evt, OIS::MouseButtonID id)
{
    CEGUI::System::getSingleton().getDefaultGUIContext().
        injectMouseButtonDown(convertOISButtonToCegui(id));
    return true;
}

bool LoginState::mouseReleased(const OIS::MouseEvent &evt, OIS::MouseButtonID id)
{
    CEGUI::System::getSingleton().getDefaultGUIContext().
        injectMouseButtonUp(convertOISButtonToCegui(id));
    return true;
}

void LoginState::update(double timeSinceLastFrame)
{
    m_FrameEvent.timeSinceLastFrame = timeSinceLastFrame;

    CEGUI::System& gui_system(CEGUI::System::getSingleton());

    gui_system.injectTimePulse(timeSinceLastFrame);
    gui_system.getDefaultGUIContext().injectTimePulse(timeSinceLastFrame);

    if(m_bQuit == true)
    {
        shutdown();
        return;
    }
}

CEGUI::MouseButton LoginState::convertOISButtonToCegui(int buttonID)
{
   using namespace OIS;

   switch (buttonID)
    {
   case OIS::MB_Left:
        return CEGUI::LeftButton;
   case OIS::MB_Right:
        return CEGUI::RightButton;
   case OIS::MB_Middle:
        return CEGUI::MiddleButton;
    default:
        return CEGUI::LeftButton;
    }
}




