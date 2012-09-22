// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUIOpenGLRenderer.h"
#include "OpenGLRenderer.pypp.hpp"

namespace bp = boost::python;

struct OpenGLRenderer_wrapper : CEGUI::OpenGLRenderer, bp::wrapper< CEGUI::OpenGLRenderer > {

    OpenGLRenderer_wrapper(::CEGUI::OpenGLRenderer::TextureTargetType const tt_type )
    : CEGUI::OpenGLRenderer( tt_type )
      , bp::wrapper< CEGUI::OpenGLRenderer >(){
        // constructor
    
    }

    OpenGLRenderer_wrapper(::CEGUI::Sizef const & display_size, ::CEGUI::OpenGLRenderer::TextureTargetType const tt_type )
    : CEGUI::OpenGLRenderer( boost::ref(display_size), tt_type )
      , bp::wrapper< CEGUI::OpenGLRenderer >(){
        // constructor
    
    }

    virtual void beginRendering(  ) {
        if( bp::override func_beginRendering = this->get_override( "beginRendering" ) )
            func_beginRendering(  );
        else{
            this->CEGUI::OpenGLRenderer::beginRendering(  );
        }
    }
    
    void default_beginRendering(  ) {
        CEGUI::OpenGLRenderer::beginRendering( );
    }

    void cleanupExtraStates(  ){
        CEGUI::OpenGLRenderer::cleanupExtraStates(  );
    }

    virtual ::CEGUI::TextureTarget * createTextureTarget(  ) {
        if( bp::override func_createTextureTarget = this->get_override( "createTextureTarget" ) )
            return func_createTextureTarget(  );
        else{
            return this->CEGUI::OpenGLRenderer::createTextureTarget(  );
        }
    }
    
    ::CEGUI::TextureTarget * default_createTextureTarget(  ) {
        return CEGUI::OpenGLRenderer::createTextureTarget( );
    }

    virtual void destroyAllGeometryBuffers(  ) {
        if( bp::override func_destroyAllGeometryBuffers = this->get_override( "destroyAllGeometryBuffers" ) )
            func_destroyAllGeometryBuffers(  );
        else{
            this->CEGUI::OpenGLRenderer::destroyAllGeometryBuffers(  );
        }
    }
    
    void default_destroyAllGeometryBuffers(  ) {
        CEGUI::OpenGLRenderer::destroyAllGeometryBuffers( );
    }

    virtual void destroyAllTextureTargets(  ) {
        if( bp::override func_destroyAllTextureTargets = this->get_override( "destroyAllTextureTargets" ) )
            func_destroyAllTextureTargets(  );
        else{
            this->CEGUI::OpenGLRenderer::destroyAllTextureTargets(  );
        }
    }
    
    void default_destroyAllTextureTargets(  ) {
        CEGUI::OpenGLRenderer::destroyAllTextureTargets( );
    }

    virtual void destroyAllTextures(  ) {
        if( bp::override func_destroyAllTextures = this->get_override( "destroyAllTextures" ) )
            func_destroyAllTextures(  );
        else{
            this->CEGUI::OpenGLRenderer::destroyAllTextures(  );
        }
    }
    
    void default_destroyAllTextures(  ) {
        CEGUI::OpenGLRenderer::destroyAllTextures( );
    }

    virtual void destroyGeometryBuffer( ::CEGUI::GeometryBuffer const & buffer ) {
        if( bp::override func_destroyGeometryBuffer = this->get_override( "destroyGeometryBuffer" ) )
            func_destroyGeometryBuffer( boost::ref(buffer) );
        else{
            this->CEGUI::OpenGLRenderer::destroyGeometryBuffer( boost::ref(buffer) );
        }
    }
    
    void default_destroyGeometryBuffer( ::CEGUI::GeometryBuffer const & buffer ) {
        CEGUI::OpenGLRenderer::destroyGeometryBuffer( boost::ref(buffer) );
    }

    virtual void destroyTexture( ::CEGUI::Texture & texture ) {
        if( bp::override func_destroyTexture = this->get_override( "destroyTexture" ) )
            func_destroyTexture( boost::ref(texture) );
        else{
            this->CEGUI::OpenGLRenderer::destroyTexture( boost::ref(texture) );
        }
    }
    
    void default_destroyTexture( ::CEGUI::Texture & texture ) {
        CEGUI::OpenGLRenderer::destroyTexture( boost::ref(texture) );
    }

    virtual void destroyTexture( ::CEGUI::String const & name ) {
        if( bp::override func_destroyTexture = this->get_override( "destroyTexture" ) )
            func_destroyTexture( boost::ref(name) );
        else{
            this->CEGUI::OpenGLRenderer::destroyTexture( boost::ref(name) );
        }
    }
    
    void default_destroyTexture( ::CEGUI::String const & name ) {
        CEGUI::OpenGLRenderer::destroyTexture( boost::ref(name) );
    }

    virtual void destroyTextureTarget( ::CEGUI::TextureTarget * target ) {
        if( bp::override func_destroyTextureTarget = this->get_override( "destroyTextureTarget" ) )
            func_destroyTextureTarget( boost::python::ptr(target) );
        else{
            this->CEGUI::OpenGLRenderer::destroyTextureTarget( boost::python::ptr(target) );
        }
    }
    
    void default_destroyTextureTarget( ::CEGUI::TextureTarget * target ) {
        CEGUI::OpenGLRenderer::destroyTextureTarget( boost::python::ptr(target) );
    }

    virtual void endRendering(  ) {
        if( bp::override func_endRendering = this->get_override( "endRendering" ) )
            func_endRendering(  );
        else{
            this->CEGUI::OpenGLRenderer::endRendering(  );
        }
    }
    
    void default_endRendering(  ) {
        CEGUI::OpenGLRenderer::endRendering( );
    }

    virtual ::CEGUI::uint getMaxTextureSize(  ) const  {
        if( bp::override func_getMaxTextureSize = this->get_override( "getMaxTextureSize" ) )
            return func_getMaxTextureSize(  );
        else{
            return this->CEGUI::OpenGLRenderer::getMaxTextureSize(  );
        }
    }
    
    ::CEGUI::uint default_getMaxTextureSize(  ) const  {
        return CEGUI::OpenGLRenderer::getMaxTextureSize( );
    }

    void initialiseTextureTargetFactory( ::CEGUI::OpenGLRenderer::TextureTargetType const tt_type ){
        CEGUI::OpenGLRenderer::initialiseTextureTargetFactory( tt_type );
    }

    virtual bool isTextureDefined( ::CEGUI::String const & name ) const  {
        if( bp::override func_isTextureDefined = this->get_override( "isTextureDefined" ) )
            return func_isTextureDefined( boost::ref(name) );
        else{
            return this->CEGUI::OpenGLRenderer::isTextureDefined( boost::ref(name) );
        }
    }
    
    bool default_isTextureDefined( ::CEGUI::String const & name ) const  {
        return CEGUI::OpenGLRenderer::isTextureDefined( boost::ref(name) );
    }

    static void logTextureCreation( ::CEGUI::String const & name ){
        CEGUI::OpenGLRenderer::logTextureCreation( boost::ref(name) );
    }

    static void logTextureDestruction( ::CEGUI::String const & name ){
        CEGUI::OpenGLRenderer::logTextureDestruction( boost::ref(name) );
    }

    virtual void setDisplaySize( ::CEGUI::Sizef const & sz ) {
        if( bp::override func_setDisplaySize = this->get_override( "setDisplaySize" ) )
            func_setDisplaySize( boost::ref(sz) );
        else{
            this->CEGUI::OpenGLRenderer::setDisplaySize( boost::ref(sz) );
        }
    }
    
    void default_setDisplaySize( ::CEGUI::Sizef const & sz ) {
        CEGUI::OpenGLRenderer::setDisplaySize( boost::ref(sz) );
    }

    void setupExtraStates(  ){
        CEGUI::OpenGLRenderer::setupExtraStates(  );
    }

};

void register_OpenGLRenderer_class(){

    { //::CEGUI::OpenGLRenderer
        typedef bp::class_< OpenGLRenderer_wrapper, bp::bases< ::CEGUI::Renderer >, boost::noncopyable > OpenGLRenderer_exposer_t;
        OpenGLRenderer_exposer_t OpenGLRenderer_exposer = OpenGLRenderer_exposer_t( "OpenGLRenderer", "*!\n\
        \n\
            Renderer class to interface with OpenGL\n\
        *\n", bp::no_init );
        bp::scope OpenGLRenderer_scope( OpenGLRenderer_exposer );
        bp::enum_< CEGUI::OpenGLRenderer::TextureTargetType>("TextureTargetType")
            .value("TTT_AUTO", CEGUI::OpenGLRenderer::TTT_AUTO)
            .value("TTT_FBO", CEGUI::OpenGLRenderer::TTT_FBO)
            .value("TTT_PBUFFER", CEGUI::OpenGLRenderer::TTT_PBUFFER)
            .value("TTT_NONE", CEGUI::OpenGLRenderer::TTT_NONE)
            .export_values()
            ;
        OpenGLRenderer_exposer.def( bp::init< CEGUI::OpenGLRenderer::TextureTargetType >(( bp::arg("tt_type") ), "*!\n\
            \n\
                Constructor for OpenGL Renderer objects\n\
        \n\
            @param tt_type\n\
                Specifies one of the TextureTargetType enumerated values indicating the\n\
                desired TextureTarget type to be used.\n\
            *\n") );
        OpenGLRenderer_exposer.def( bp::init< CEGUI::Sizef const &, CEGUI::OpenGLRenderer::TextureTargetType >(( bp::arg("display_size"), bp::arg("tt_type") ), "*!\n\
            \n\
                Constructor for OpenGL Renderer objects.\n\
        \n\
            @param display_size\n\
                Size object describing the initial display resolution.\n\
        \n\
            @param tt_type\n\
                Specifies one of the TextureTargetType enumerated values indicating the\n\
                desired TextureTarget type to be used.\n\
            *\n") );
        { //::CEGUI::OpenGLRenderer::beginRendering
        
            typedef void ( ::CEGUI::OpenGLRenderer::*beginRendering_function_type )(  ) ;
            typedef void ( OpenGLRenderer_wrapper::*default_beginRendering_function_type )(  ) ;
            
            OpenGLRenderer_exposer.def( 
                "beginRendering"
                , beginRendering_function_type(&::CEGUI::OpenGLRenderer::beginRendering)
                , default_beginRendering_function_type(&OpenGLRenderer_wrapper::default_beginRendering) );
        
        }
        { //::CEGUI::OpenGLRenderer::bootstrapSystem
        
            typedef ::CEGUI::OpenGLRenderer & ( *bootstrapSystem_function_type )( ::CEGUI::OpenGLRenderer::TextureTargetType const,int const );
            
            OpenGLRenderer_exposer.def( 
                "bootstrapSystem"
                , bootstrapSystem_function_type( &::CEGUI::OpenGLRenderer::bootstrapSystem )
                , ( bp::arg("tt_type")=::CEGUI::OpenGLRenderer::TTT_AUTO, bp::arg("abi")=(int const)(99990) )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::OpenGLRenderer::bootstrapSystem
        
            typedef ::CEGUI::OpenGLRenderer & ( *bootstrapSystem_function_type )( ::CEGUI::Sizef const &,::CEGUI::OpenGLRenderer::TextureTargetType const,int const );
            
            OpenGLRenderer_exposer.def( 
                "bootstrapSystem"
                , bootstrapSystem_function_type( &::CEGUI::OpenGLRenderer::bootstrapSystem )
                , ( bp::arg("display_size"), bp::arg("tt_type")=::CEGUI::OpenGLRenderer::TTT_AUTO, bp::arg("abi")=(int const)(99990) )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::OpenGLRenderer::cleanupExtraStates
        
            typedef void ( OpenGLRenderer_wrapper::*cleanupExtraStates_function_type )(  ) ;
            
            OpenGLRenderer_exposer.def( 
                "cleanupExtraStates"
                , cleanupExtraStates_function_type( &OpenGLRenderer_wrapper::cleanupExtraStates )
                , "! cleanup the extra GL states enabled via enableExtraStateSettings\n" );
        
        }
        { //::CEGUI::OpenGLRenderer::create
        
            typedef ::CEGUI::OpenGLRenderer & ( *create_function_type )( ::CEGUI::OpenGLRenderer::TextureTargetType const,int const );
            
            OpenGLRenderer_exposer.def( 
                "create"
                , create_function_type( &::CEGUI::OpenGLRenderer::create )
                , ( bp::arg("tt_type")=::CEGUI::OpenGLRenderer::TTT_AUTO, bp::arg("abi")=(int const)(99990) )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                \n\
                    Create an OpenGLRenderer object.\n\
            \n\
                @param tt_type\n\
                    Specifies one of the TextureTargetType enumerated values indicating the\n\
                    desired TextureTarget type to be used.\n\
            \n\
                @param abi\n\
                    This must be set to CEGUI_VERSION_ABI\n\
                *\n" );
        
        }
        { //::CEGUI::OpenGLRenderer::create
        
            typedef ::CEGUI::OpenGLRenderer & ( *create_function_type )( ::CEGUI::Sizef const &,::CEGUI::OpenGLRenderer::TextureTargetType const,int const );
            
            OpenGLRenderer_exposer.def( 
                "create"
                , create_function_type( &::CEGUI::OpenGLRenderer::create )
                , ( bp::arg("display_size"), bp::arg("tt_type")=::CEGUI::OpenGLRenderer::TTT_AUTO, bp::arg("abi")=(int const)(99990) )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::OpenGLRenderer::createGeometryBuffer
        
            typedef ::CEGUI::GeometryBuffer & ( ::CEGUI::OpenGLRenderer::*createGeometryBuffer_function_type )(  ) ;
            
            OpenGLRenderer_exposer.def( 
                "createGeometryBuffer"
                , createGeometryBuffer_function_type(&::CEGUI::OpenGLRenderer::createGeometryBuffer)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::OpenGLRenderer::createTexture
        
            typedef ::CEGUI::Texture & ( ::CEGUI::OpenGLRenderer::*createTexture_function_type )( ::CEGUI::String const & ) ;
            
            OpenGLRenderer_exposer.def( 
                "createTexture"
                , createTexture_function_type(&::CEGUI::OpenGLRenderer::createTexture)
                , ( bp::arg("name") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::OpenGLRenderer::createTexture
        
            typedef ::CEGUI::Texture & ( ::CEGUI::OpenGLRenderer::*createTexture_function_type )( ::CEGUI::String const &,::CEGUI::String const &,::CEGUI::String const & ) ;
            
            OpenGLRenderer_exposer.def( 
                "createTexture"
                , createTexture_function_type(&::CEGUI::OpenGLRenderer::createTexture)
                , ( bp::arg("name"), bp::arg("filename"), bp::arg("resourceGroup") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::OpenGLRenderer::createTexture
        
            typedef ::CEGUI::Texture & ( ::CEGUI::OpenGLRenderer::*createTexture_function_type )( ::CEGUI::String const &,::CEGUI::Sizef const & ) ;
            
            OpenGLRenderer_exposer.def( 
                "createTexture"
                , createTexture_function_type(&::CEGUI::OpenGLRenderer::createTexture)
                , ( bp::arg("name"), bp::arg("size") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::OpenGLRenderer::createTexture
        
            typedef ::CEGUI::Texture & ( ::CEGUI::OpenGLRenderer::*createTexture_function_type )( ::CEGUI::String const &,::GLuint,::CEGUI::Sizef const & ) ;
            
            OpenGLRenderer_exposer.def( 
                "createTexture"
                , createTexture_function_type( &::CEGUI::OpenGLRenderer::createTexture )
                , ( bp::arg("name"), bp::arg("tex"), bp::arg("sz") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                \n\
                    Create a texture that uses an existing OpenGL texture with the specified\n\
                    size.  Note that it is your responsibility to ensure that the OpenGL\n\
                    texture is valid and that the specified size is accurate.\n\
            \n\
                @param sz\n\
                    Size object that describes the pixel size of the OpenGL texture\n\
                    identified by  tex.\n\
            \n\
                @param name\n\
                    String holding the name for the new texture.  Texture names must be\n\
                    unique within the Renderer.\n\
            \n\
                @return\n\
                    Texture object that wraps the OpenGL texture  tex, and whose size is\n\
                    specified to be  sz.\n\
            \n\
                @exceptions\n\
                    - AlreadyExistsException - thrown if a Texture object named  name\n\
                      already exists within the system.\n\
                *\n" );
        
        }
        { //::CEGUI::OpenGLRenderer::createTextureTarget
        
            typedef ::CEGUI::TextureTarget * ( ::CEGUI::OpenGLRenderer::*createTextureTarget_function_type )(  ) ;
            typedef ::CEGUI::TextureTarget * ( OpenGLRenderer_wrapper::*default_createTextureTarget_function_type )(  ) ;
            
            OpenGLRenderer_exposer.def( 
                "createTextureTarget"
                , createTextureTarget_function_type(&::CEGUI::OpenGLRenderer::createTextureTarget)
                , default_createTextureTarget_function_type(&OpenGLRenderer_wrapper::default_createTextureTarget)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::OpenGLRenderer::destroy
        
            typedef void ( *destroy_function_type )( ::CEGUI::OpenGLRenderer & );
            
            OpenGLRenderer_exposer.def( 
                "destroy"
                , destroy_function_type( &::CEGUI::OpenGLRenderer::destroy )
                , ( bp::arg("renderer") )
                , "*!\n\
                \n\
                    Destroy an OpenGLRenderer object.\n\
            \n\
                @param renderer\n\
                    The OpenGLRenderer object to be destroyed.\n\
                *\n" );
        
        }
        { //::CEGUI::OpenGLRenderer::destroyAllGeometryBuffers
        
            typedef void ( ::CEGUI::OpenGLRenderer::*destroyAllGeometryBuffers_function_type )(  ) ;
            typedef void ( OpenGLRenderer_wrapper::*default_destroyAllGeometryBuffers_function_type )(  ) ;
            
            OpenGLRenderer_exposer.def( 
                "destroyAllGeometryBuffers"
                , destroyAllGeometryBuffers_function_type(&::CEGUI::OpenGLRenderer::destroyAllGeometryBuffers)
                , default_destroyAllGeometryBuffers_function_type(&OpenGLRenderer_wrapper::default_destroyAllGeometryBuffers) );
        
        }
        { //::CEGUI::OpenGLRenderer::destroyAllTextureTargets
        
            typedef void ( ::CEGUI::OpenGLRenderer::*destroyAllTextureTargets_function_type )(  ) ;
            typedef void ( OpenGLRenderer_wrapper::*default_destroyAllTextureTargets_function_type )(  ) ;
            
            OpenGLRenderer_exposer.def( 
                "destroyAllTextureTargets"
                , destroyAllTextureTargets_function_type(&::CEGUI::OpenGLRenderer::destroyAllTextureTargets)
                , default_destroyAllTextureTargets_function_type(&OpenGLRenderer_wrapper::default_destroyAllTextureTargets) );
        
        }
        { //::CEGUI::OpenGLRenderer::destroyAllTextures
        
            typedef void ( ::CEGUI::OpenGLRenderer::*destroyAllTextures_function_type )(  ) ;
            typedef void ( OpenGLRenderer_wrapper::*default_destroyAllTextures_function_type )(  ) ;
            
            OpenGLRenderer_exposer.def( 
                "destroyAllTextures"
                , destroyAllTextures_function_type(&::CEGUI::OpenGLRenderer::destroyAllTextures)
                , default_destroyAllTextures_function_type(&OpenGLRenderer_wrapper::default_destroyAllTextures) );
        
        }
        { //::CEGUI::OpenGLRenderer::destroyGeometryBuffer
        
            typedef void ( ::CEGUI::OpenGLRenderer::*destroyGeometryBuffer_function_type )( ::CEGUI::GeometryBuffer const & ) ;
            typedef void ( OpenGLRenderer_wrapper::*default_destroyGeometryBuffer_function_type )( ::CEGUI::GeometryBuffer const & ) ;
            
            OpenGLRenderer_exposer.def( 
                "destroyGeometryBuffer"
                , destroyGeometryBuffer_function_type(&::CEGUI::OpenGLRenderer::destroyGeometryBuffer)
                , default_destroyGeometryBuffer_function_type(&OpenGLRenderer_wrapper::default_destroyGeometryBuffer)
                , ( bp::arg("buffer") ) );
        
        }
        { //::CEGUI::OpenGLRenderer::destroySystem
        
            typedef void ( *destroySystem_function_type )(  );
            
            OpenGLRenderer_exposer.def( 
                "destroySystem"
                , destroySystem_function_type( &::CEGUI::OpenGLRenderer::destroySystem )
                , "*!\n\
                \n\
                    Convenience function to cleanup the CEGUI system and related objects\n\
                    that were created by calling the bootstrapSystem function.\n\
            \n\
                    This function will destroy the following objects for you:\n\
                    - CEGUI.System\n\
                    - CEGUI.DefaultResourceProvider\n\
                    - CEGUI.OpenGLRenderer\n\
            \n\
                \note\n\
                    If you did not initialise CEGUI by calling the bootstrapSystem function,\n\
                    you should  e not call this, but rather delete any objects you created\n\
                    manually.\n\
                *\n" );
        
        }
        { //::CEGUI::OpenGLRenderer::destroyTexture
        
            typedef void ( ::CEGUI::OpenGLRenderer::*destroyTexture_function_type )( ::CEGUI::Texture & ) ;
            typedef void ( OpenGLRenderer_wrapper::*default_destroyTexture_function_type )( ::CEGUI::Texture & ) ;
            
            OpenGLRenderer_exposer.def( 
                "destroyTexture"
                , destroyTexture_function_type(&::CEGUI::OpenGLRenderer::destroyTexture)
                , default_destroyTexture_function_type(&OpenGLRenderer_wrapper::default_destroyTexture)
                , ( bp::arg("texture") ) );
        
        }
        { //::CEGUI::OpenGLRenderer::destroyTexture
        
            typedef void ( ::CEGUI::OpenGLRenderer::*destroyTexture_function_type )( ::CEGUI::String const & ) ;
            typedef void ( OpenGLRenderer_wrapper::*default_destroyTexture_function_type )( ::CEGUI::String const & ) ;
            
            OpenGLRenderer_exposer.def( 
                "destroyTexture"
                , destroyTexture_function_type(&::CEGUI::OpenGLRenderer::destroyTexture)
                , default_destroyTexture_function_type(&OpenGLRenderer_wrapper::default_destroyTexture)
                , ( bp::arg("name") ) );
        
        }
        { //::CEGUI::OpenGLRenderer::destroyTextureTarget
        
            typedef void ( ::CEGUI::OpenGLRenderer::*destroyTextureTarget_function_type )( ::CEGUI::TextureTarget * ) ;
            typedef void ( OpenGLRenderer_wrapper::*default_destroyTextureTarget_function_type )( ::CEGUI::TextureTarget * ) ;
            
            OpenGLRenderer_exposer.def( 
                "destroyTextureTarget"
                , destroyTextureTarget_function_type(&::CEGUI::OpenGLRenderer::destroyTextureTarget)
                , default_destroyTextureTarget_function_type(&OpenGLRenderer_wrapper::default_destroyTextureTarget)
                , ( bp::arg("target") ) );
        
        }
        { //::CEGUI::OpenGLRenderer::enableExtraStateSettings
        
            typedef void ( ::CEGUI::OpenGLRenderer::*enableExtraStateSettings_function_type )( bool ) ;
            
            OpenGLRenderer_exposer.def( 
                "enableExtraStateSettings"
                , enableExtraStateSettings_function_type( &::CEGUI::OpenGLRenderer::enableExtraStateSettings )
                , ( bp::arg("setting") )
                , "*!\n\
                \n\
                    Tells the renderer to initialise some extra states beyond what it\n\
                    directly needs itself for CEGUI.\n\
            \n\
                    This option is useful in cases where you've made changes to the default\n\
                    OpenGL state and do not want to saverestore those between CEGUI\n\
                    rendering calls.  Note that this option will not deal with every\n\
                    possible state or extension - if you want a state added here, make a\n\
                    request and we'll consider it ;)\n\
                *\n" );
        
        }
        { //::CEGUI::OpenGLRenderer::endRendering
        
            typedef void ( ::CEGUI::OpenGLRenderer::*endRendering_function_type )(  ) ;
            typedef void ( OpenGLRenderer_wrapper::*default_endRendering_function_type )(  ) ;
            
            OpenGLRenderer_exposer.def( 
                "endRendering"
                , endRendering_function_type(&::CEGUI::OpenGLRenderer::endRendering)
                , default_endRendering_function_type(&OpenGLRenderer_wrapper::default_endRendering) );
        
        }
        { //::CEGUI::OpenGLRenderer::getAdjustedTextureSize
        
            typedef ::CEGUI::Sizef ( ::CEGUI::OpenGLRenderer::*getAdjustedTextureSize_function_type )( ::CEGUI::Sizef const & ) const;
            
            OpenGLRenderer_exposer.def( 
                "getAdjustedTextureSize"
                , getAdjustedTextureSize_function_type( &::CEGUI::OpenGLRenderer::getAdjustedTextureSize )
                , ( bp::arg("sz") )
                , "*!\n\
                \n\
                    Helper to return a valid texture size according to reported OpenGL\n\
                    capabilities.\n\
            \n\
                @param sz\n\
                    Size object containing input size.\n\
            \n\
                @return\n\
                    Size object containing - possibly different - output size.\n\
                *\n" );
        
        }
        { //::CEGUI::OpenGLRenderer::getDefaultRenderTarget
        
            typedef ::CEGUI::RenderTarget & ( ::CEGUI::OpenGLRenderer::*getDefaultRenderTarget_function_type )(  ) ;
            
            OpenGLRenderer_exposer.def( 
                "getDefaultRenderTarget"
                , getDefaultRenderTarget_function_type(&::CEGUI::OpenGLRenderer::getDefaultRenderTarget)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::OpenGLRenderer::getDisplayDPI
        
            typedef ::CEGUI::Vector2f const & ( ::CEGUI::OpenGLRenderer::*getDisplayDPI_function_type )(  ) const;
            
            OpenGLRenderer_exposer.def( 
                "getDisplayDPI"
                , getDisplayDPI_function_type(&::CEGUI::OpenGLRenderer::getDisplayDPI)
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::CEGUI::OpenGLRenderer::getDisplaySize
        
            typedef ::CEGUI::Sizef const & ( ::CEGUI::OpenGLRenderer::*getDisplaySize_function_type )(  ) const;
            
            OpenGLRenderer_exposer.def( 
                "getDisplaySize"
                , getDisplaySize_function_type(&::CEGUI::OpenGLRenderer::getDisplaySize)
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::CEGUI::OpenGLRenderer::getIdentifierString
        
            typedef ::CEGUI::String const & ( ::CEGUI::OpenGLRenderer::*getIdentifierString_function_type )(  ) const;
            
            OpenGLRenderer_exposer.def( 
                "getIdentifierString"
                , getIdentifierString_function_type(&::CEGUI::OpenGLRenderer::getIdentifierString)
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::CEGUI::OpenGLRenderer::getMaxTextureSize
        
            typedef ::CEGUI::uint ( ::CEGUI::OpenGLRenderer::*getMaxTextureSize_function_type )(  ) const;
            typedef ::CEGUI::uint ( OpenGLRenderer_wrapper::*default_getMaxTextureSize_function_type )(  ) const;
            
            OpenGLRenderer_exposer.def( 
                "getMaxTextureSize"
                , getMaxTextureSize_function_type(&::CEGUI::OpenGLRenderer::getMaxTextureSize)
                , default_getMaxTextureSize_function_type(&OpenGLRenderer_wrapper::default_getMaxTextureSize) );
        
        }
        { //::CEGUI::OpenGLRenderer::getNextPOTSize
        
            typedef float ( *getNextPOTSize_function_type )( float const );
            
            OpenGLRenderer_exposer.def( 
                "getNextPOTSize"
                , getNextPOTSize_function_type( &::CEGUI::OpenGLRenderer::getNextPOTSize )
                , ( bp::arg("f") )
                , "*!\n\
            \n\
                Utility function that will return  f if it's a power of two, or the\n\
                next power of two up from  f if it's not.\n\
            *\n" );
        
        }
        { //::CEGUI::OpenGLRenderer::getTexture
        
            typedef ::CEGUI::Texture & ( ::CEGUI::OpenGLRenderer::*getTexture_function_type )( ::CEGUI::String const & ) const;
            
            OpenGLRenderer_exposer.def( 
                "getTexture"
                , getTexture_function_type(&::CEGUI::OpenGLRenderer::getTexture)
                , ( bp::arg("name") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::OpenGLRenderer::grabTextures
        
            typedef void ( ::CEGUI::OpenGLRenderer::*grabTextures_function_type )(  ) ;
            
            OpenGLRenderer_exposer.def( 
                "grabTextures"
                , grabTextures_function_type( &::CEGUI::OpenGLRenderer::grabTextures )
                , "*!\n\
            \n\
                Grabs all the loaded textures from Texture RAM and stores them in a\n\
                local data buffer.  This function invalidates all textures, and\n\
                restoreTextures must be called before any CEGUI rendering is done for\n\
                predictable results.\n\
            *\n" );
        
        }
        { //::CEGUI::OpenGLRenderer::initialiseTextureTargetFactory
        
            typedef void ( OpenGLRenderer_wrapper::*initialiseTextureTargetFactory_function_type )( ::CEGUI::OpenGLRenderer::TextureTargetType const ) ;
            
            OpenGLRenderer_exposer.def( 
                "initialiseTextureTargetFactory"
                , initialiseTextureTargetFactory_function_type( &OpenGLRenderer_wrapper::initialiseTextureTargetFactory )
                , ( bp::arg("tt_type") )
                , "! initialise OGLTextureTargetFactory that will generate TextureTargets\n" );
        
        }
        { //::CEGUI::OpenGLRenderer::isTextureDefined
        
            typedef bool ( ::CEGUI::OpenGLRenderer::*isTextureDefined_function_type )( ::CEGUI::String const & ) const;
            typedef bool ( OpenGLRenderer_wrapper::*default_isTextureDefined_function_type )( ::CEGUI::String const & ) const;
            
            OpenGLRenderer_exposer.def( 
                "isTextureDefined"
                , isTextureDefined_function_type(&::CEGUI::OpenGLRenderer::isTextureDefined)
                , default_isTextureDefined_function_type(&OpenGLRenderer_wrapper::default_isTextureDefined)
                , ( bp::arg("name") ) );
        
        }
        { //::CEGUI::OpenGLRenderer::logTextureCreation
        
            typedef void ( *logTextureCreation_function_type )( ::CEGUI::String const & );
            
            OpenGLRenderer_exposer.def( 
                "logTextureCreation"
                , logTextureCreation_function_type( &OpenGLRenderer_wrapper::logTextureCreation )
                , ( bp::arg("name") )
                , "! helper to safely log the creation of a named texture\n" );
        
        }
        { //::CEGUI::OpenGLRenderer::logTextureDestruction
        
            typedef void ( *logTextureDestruction_function_type )( ::CEGUI::String const & );
            
            OpenGLRenderer_exposer.def( 
                "logTextureDestruction"
                , logTextureDestruction_function_type( &OpenGLRenderer_wrapper::logTextureDestruction )
                , ( bp::arg("name") )
                , "! helper to safely log the creation of a named texture\n\
            ! helper to safely log the destruction of a named texture\n" );
        
        }
        { //::CEGUI::OpenGLRenderer::restoreTextures
        
            typedef void ( ::CEGUI::OpenGLRenderer::*restoreTextures_function_type )(  ) ;
            
            OpenGLRenderer_exposer.def( 
                "restoreTextures"
                , restoreTextures_function_type( &::CEGUI::OpenGLRenderer::restoreTextures )
                , "*!\n\
            \n\
                Restores all the loaded textures from the local data buffers previously\n\
                created by 'grabTextures'\n\
            *\n" );
        
        }
        { //::CEGUI::OpenGLRenderer::setDisplaySize
        
            typedef void ( ::CEGUI::OpenGLRenderer::*setDisplaySize_function_type )( ::CEGUI::Sizef const & ) ;
            typedef void ( OpenGLRenderer_wrapper::*default_setDisplaySize_function_type )( ::CEGUI::Sizef const & ) ;
            
            OpenGLRenderer_exposer.def( 
                "setDisplaySize"
                , setDisplaySize_function_type(&::CEGUI::OpenGLRenderer::setDisplaySize)
                , default_setDisplaySize_function_type(&OpenGLRenderer_wrapper::default_setDisplaySize)
                , ( bp::arg("sz") ) );
        
        }
        { //::CEGUI::OpenGLRenderer::setupExtraStates
        
            typedef void ( OpenGLRenderer_wrapper::*setupExtraStates_function_type )(  ) ;
            
            OpenGLRenderer_exposer.def( 
                "setupExtraStates"
                , setupExtraStates_function_type( &OpenGLRenderer_wrapper::setupExtraStates )
                , "! init the extra GL states enabled via enableExtraStateSettings\n" );
        
        }
        { //::CEGUI::OpenGLRenderer::setupRenderingBlendMode
        
            typedef void ( ::CEGUI::OpenGLRenderer::*setupRenderingBlendMode_function_type )( ::CEGUI::BlendMode const,bool const ) ;
            
            OpenGLRenderer_exposer.def( 
                "setupRenderingBlendMode"
                , setupRenderingBlendMode_function_type( &::CEGUI::OpenGLRenderer::setupRenderingBlendMode )
                , ( bp::arg("mode"), bp::arg("force")=(bool const)(false) )
                , "! set the render states for the specified BlendMode.\n" );
        
        }
        OpenGLRenderer_exposer.staticmethod( "bootstrapSystem" );
        OpenGLRenderer_exposer.staticmethod( "create" );
        OpenGLRenderer_exposer.staticmethod( "destroy" );
        OpenGLRenderer_exposer.staticmethod( "destroySystem" );
        OpenGLRenderer_exposer.staticmethod( "getNextPOTSize" );
        OpenGLRenderer_exposer.staticmethod( "logTextureCreation" );
        OpenGLRenderer_exposer.staticmethod( "logTextureDestruction" );
    }

}
