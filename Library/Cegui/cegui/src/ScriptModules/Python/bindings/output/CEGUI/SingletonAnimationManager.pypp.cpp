// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "SingletonAnimationManager.pypp.hpp"

namespace bp = boost::python;

void register_SingletonAnimationManager_class(){

    { //::CEGUI::Singleton< CEGUI::AnimationManager >
        typedef bp::class_< CEGUI::Singleton< CEGUI::AnimationManager >, boost::noncopyable > SingletonAnimationManager_exposer_t;
        SingletonAnimationManager_exposer_t SingletonAnimationManager_exposer = SingletonAnimationManager_exposer_t( "SingletonAnimationManager", bp::init< >() );
        bp::scope SingletonAnimationManager_scope( SingletonAnimationManager_exposer );
        { //::CEGUI::Singleton< CEGUI::AnimationManager >::getSingleton
        
            typedef CEGUI::Singleton< CEGUI::AnimationManager > exported_class_t;
            typedef ::CEGUI::AnimationManager & ( *getSingleton_function_type )(  );
            
            SingletonAnimationManager_exposer.def( 
                "getSingleton"
                , getSingleton_function_type( &::CEGUI::Singleton< CEGUI::AnimationManager >::getSingleton )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        SingletonAnimationManager_exposer.staticmethod( "getSingleton" );
    }

}
