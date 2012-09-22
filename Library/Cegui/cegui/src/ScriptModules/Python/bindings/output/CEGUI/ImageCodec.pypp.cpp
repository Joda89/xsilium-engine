// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "ImageCodec.pypp.hpp"

namespace bp = boost::python;

struct ImageCodec_wrapper : CEGUI::ImageCodec, bp::wrapper< CEGUI::ImageCodec > {

    ImageCodec_wrapper(::CEGUI::String const & name )
    : CEGUI::ImageCodec( boost::ref(name) )
      , bp::wrapper< CEGUI::ImageCodec >(){
        // constructor
    
    }

    virtual ::CEGUI::Texture * load( ::CEGUI::RawDataContainer const & data, ::CEGUI::Texture * result ){
        bp::override func_load = this->get_override( "load" );
        return func_load( boost::ref(data), boost::python::ptr(result) );
    }

};

void register_ImageCodec_class(){

    { //::CEGUI::ImageCodec
        typedef bp::class_< ImageCodec_wrapper, boost::noncopyable > ImageCodec_exposer_t;
        ImageCodec_exposer_t ImageCodec_exposer = ImageCodec_exposer_t( "ImageCodec", bp::no_init );
        bp::scope ImageCodec_scope( ImageCodec_exposer );
        ImageCodec_exposer.def( bp::init< CEGUI::String const & >(( bp::arg("name") ), "*\n\
           \n\
          Constructor \n\
          \n\
          @param name of the codec \n\
        *\n") );
        { //::CEGUI::ImageCodec::getIdentifierString
        
            typedef ::CEGUI::String const & ( ::CEGUI::ImageCodec::*getIdentifierString_function_type )(  ) const;
            
            ImageCodec_exposer.def( 
                "getIdentifierString"
                , getIdentifierString_function_type( &::CEGUI::ImageCodec::getIdentifierString )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                   \n\
                  Return the name of the image codec object \n\
                  \n\
                  Return the name of the image codec \n\
            \n\
                  @return a string containing image codec name \n\
                *\n" );
        
        }
        { //::CEGUI::ImageCodec::getSupportedFormat
        
            typedef ::CEGUI::String const & ( ::CEGUI::ImageCodec::*getSupportedFormat_function_type )(  ) const;
            
            ImageCodec_exposer.def( 
                "getSupportedFormat"
                , getSupportedFormat_function_type( &::CEGUI::ImageCodec::getSupportedFormat )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*! \n\
                  \n\
                  Return the list of image file format supported \n\
            \n\
                  Return a list of space separated image format supported by this\n\
                  codec\n\
            \n\
                  @return \n\
                  list of supported image file format separated with space \n\
                *\n" );
        
        }
        { //::CEGUI::ImageCodec::load
        
            typedef ::CEGUI::Texture * ( ::CEGUI::ImageCodec::*load_function_type )( ::CEGUI::RawDataContainer const &,::CEGUI::Texture * ) ;
            
            ImageCodec_exposer.def( 
                "load"
                , bp::pure_virtual( load_function_type(&::CEGUI::ImageCodec::load) )
                , ( bp::arg("data"), bp::arg("result") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                   \n\
                  Load an image from a memory buffer \n\
            \n\
                  @param data the image data \n\
            \n\
                  @param result the texture to use for storing the image data \n\
                 \n\
                  @return result on success or 0 if the load failed \n\
                *\n" );
        
        }
    }

}
