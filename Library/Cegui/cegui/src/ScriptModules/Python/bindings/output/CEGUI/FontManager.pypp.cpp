// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "FontManager.pypp.hpp"

namespace bp = boost::python;

struct FontManager_wrapper : CEGUI::FontManager, bp::wrapper< CEGUI::FontManager > {

    FontManager_wrapper( )
    : CEGUI::FontManager( )
      , bp::wrapper< CEGUI::FontManager >(){
        // null constructor
    
    }

    ::CEGUI::Font & doExistingObjectAction( ::CEGUI::String const object_name, ::CEGUI::Font * object, ::CEGUI::XMLResourceExistsAction const action ){
        return CEGUI::NamedXMLResourceManager< CEGUI::Font, CEGUI::Font_xmlHandler >::doExistingObjectAction( object_name, boost::python::ptr(object), action );
    }

    virtual void doPostObjectAdditionAction( ::CEGUI::Font & arg0 ){
        if( bp::override func_doPostObjectAdditionAction = this->get_override( "doPostObjectAdditionAction" ) )
            func_doPostObjectAdditionAction( boost::ref(arg0) );
        else{
            this->CEGUI::NamedXMLResourceManager< CEGUI::Font, CEGUI::Font_xmlHandler >::doPostObjectAdditionAction( boost::ref(arg0) );
        }
    }
    
    virtual void default_doPostObjectAdditionAction( ::CEGUI::Font & arg0 ){
        CEGUI::NamedXMLResourceManager< CEGUI::Font, CEGUI::Font_xmlHandler >::doPostObjectAdditionAction( boost::ref(arg0) );
    }

    virtual void fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        if( bp::override func_fireEvent = this->get_override( "fireEvent" ) )
            func_fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        else{
            this->CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        }
    }
    
    void default_fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
    }

    void fireEvent_impl( ::CEGUI::String const & name, ::CEGUI::EventArgs & args ){
        CEGUI::EventSet::fireEvent_impl( boost::ref(name), boost::ref(args) );
    }

    ::CEGUI::ScriptModule * getScriptModule(  ) const {
        return CEGUI::EventSet::getScriptModule(  );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
    }

};

void register_FontManager_class(){

    { //::CEGUI::FontManager
        typedef bp::class_< FontManager_wrapper, bp::bases< CEGUI::Singleton< CEGUI::FontManager >, CEGUI::NamedXMLResourceManager< CEGUI::Font, CEGUI::Font_xmlHandler > >, boost::noncopyable > FontManager_exposer_t;
        FontManager_exposer_t FontManager_exposer = FontManager_exposer_t( "FontManager", bp::init< >("! Constructor.\n") );
        bp::scope FontManager_scope( FontManager_exposer );
        { //::CEGUI::FontManager::createFreeTypeFont
        
            typedef ::CEGUI::Font & ( ::CEGUI::FontManager::*createFreeTypeFont_function_type )( ::CEGUI::String const &,float const,bool const,::CEGUI::String const &,::CEGUI::String const &,::CEGUI::AutoScaledMode const,::CEGUI::Sizef const &,::CEGUI::XMLResourceExistsAction ) ;
            
            FontManager_exposer.def( 
                "createFreeTypeFont"
                , createFreeTypeFont_function_type( &::CEGUI::FontManager::createFreeTypeFont )
                , ( bp::arg("font_name"), bp::arg("point_size"), bp::arg("anti_aliased"), bp::arg("font_filename"), bp::arg("resource_group")="", bp::arg("auto_scaled")=::CEGUI::ASM_Disabled, bp::arg("native_res")=CEGUI::Size<float>(6.4e+2f, 4.8e+2f), bp::arg("action")=::CEGUI::XREA_RETURN )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::FontManager::createPixmapFont
        
            typedef ::CEGUI::Font & ( ::CEGUI::FontManager::*createPixmapFont_function_type )( ::CEGUI::String const &,::CEGUI::String const &,::CEGUI::String const &,::CEGUI::AutoScaledMode const,::CEGUI::Sizef const &,::CEGUI::XMLResourceExistsAction ) ;
            
            FontManager_exposer.def( 
                "createPixmapFont"
                , createPixmapFont_function_type( &::CEGUI::FontManager::createPixmapFont )
                , ( bp::arg("font_name"), bp::arg("imageset_filename"), bp::arg("resource_group")="", bp::arg("auto_scaled")=::CEGUI::ASM_Disabled, bp::arg("native_res")=CEGUI::Size<float>(6.4e+2f, 4.8e+2f), bp::arg("action")=::CEGUI::XREA_RETURN )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::FontManager::getIterator
        
            typedef ::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::Font*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Font*> > > > ( ::CEGUI::FontManager::*getIterator_function_type )(  ) const;
            
            FontManager_exposer.def( 
                "getIterator"
                , getIterator_function_type( &::CEGUI::FontManager::getIterator )
                , "*!\n\
            \n\
                Return a FontManager.FontIterator object to iterate over the available\n\
                Font objects.\n\
            *\n" );
        
        }
        { //::CEGUI::FontManager::notifyDisplaySizeChanged
        
            typedef void ( ::CEGUI::FontManager::*notifyDisplaySizeChanged_function_type )( ::CEGUI::Sizef const & ) ;
            
            FontManager_exposer.def( 
                "notifyDisplaySizeChanged"
                , notifyDisplaySizeChanged_function_type( &::CEGUI::FontManager::notifyDisplaySizeChanged )
                , ( bp::arg("size") )
                , "*!\n\
                \n\
                    Notify the FontManager that display size may have changed.\n\
            \n\
                @param size\n\
                    Size object describing the display resolution\n\
                *\n" );
        
        }
        { //::CEGUI::FontManager::writeFontToStream
        
            typedef void ( ::CEGUI::FontManager::*writeFontToStream_function_type )( ::CEGUI::String const &,::CEGUI::OutStream & ) const;
            
            FontManager_exposer.def( 
                "writeFontToStream"
                , writeFontToStream_function_type( &::CEGUI::FontManager::writeFontToStream )
                , ( bp::arg("name"), bp::arg("out_stream") )
                , "*!\n\
                \n\
                    Writes a full XML font file for the specified Font to the given\n\
                    OutStream.\n\
            \n\
                @param name\n\
                    String holding the name of the Font to be written to the stream.\n\
            \n\
                @param out_stream\n\
                    OutStream (std.ostream based) object where data is to be sent.\n\
                *\n" );
        
        }
        { //::CEGUI::NamedXMLResourceManager< CEGUI::Font, CEGUI::Font_xmlHandler >::doExistingObjectAction
        
            typedef CEGUI::FontManager exported_class_t;
            typedef ::CEGUI::Font & ( FontManager_wrapper::*doExistingObjectAction_function_type )( ::CEGUI::String const,::CEGUI::Font *,::CEGUI::XMLResourceExistsAction const ) ;
            
            FontManager_exposer.def( 
                "doExistingObjectAction"
                , doExistingObjectAction_function_type( &FontManager_wrapper::doExistingObjectAction )
                , ( bp::arg("object_name"), bp::arg("object"), bp::arg("action") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::NamedXMLResourceManager< CEGUI::Font, CEGUI::Font_xmlHandler >::doPostObjectAdditionAction
        
            typedef CEGUI::FontManager exported_class_t;
            typedef void ( FontManager_wrapper::*doPostObjectAdditionAction_function_type )( ::CEGUI::Font & ) ;
            
            FontManager_exposer.def( 
                "doPostObjectAdditionAction"
                , doPostObjectAdditionAction_function_type( &FontManager_wrapper::default_doPostObjectAdditionAction )
                , ( bp::arg("arg0") )
                , "----------------------------------------------------------------------------\n" );
        
        }
        { //::CEGUI::EventSet::fireEvent
        
            typedef void ( ::CEGUI::EventSet::*fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            typedef void ( FontManager_wrapper::*default_fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            
            FontManager_exposer.def( 
                "fireEvent"
                , fireEvent_function_type(&::CEGUI::EventSet::fireEvent)
                , default_fireEvent_function_type(&FontManager_wrapper::default_fireEvent)
                , ( bp::arg("name"), bp::arg("args"), bp::arg("eventNamespace")="" ) );
        
        }
        { //::CEGUI::EventSet::fireEvent_impl
        
            typedef void ( FontManager_wrapper::*fireEvent_impl_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs & ) ;
            
            FontManager_exposer.def( 
                "fireEvent_impl"
                , fireEvent_impl_function_type( &FontManager_wrapper::fireEvent_impl )
                , ( bp::arg("name"), bp::arg("args") )
                , "! Implementation event firing member\n" );
        
        }
        { //::CEGUI::EventSet::getScriptModule
        
            typedef ::CEGUI::ScriptModule * ( FontManager_wrapper::*getScriptModule_function_type )(  ) const;
            
            FontManager_exposer.def( 
                "getScriptModule"
                , getScriptModule_function_type( &FontManager_wrapper::getScriptModule )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "! Implementation event firing member\n\
            ! Helper to return the script module pointer or throw.\n" );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( FontManager_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            FontManager_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&FontManager_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( FontManager_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            
            FontManager_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&FontManager_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("group"), bp::arg("subscriber_name") ) );
        
        }
    }

}
