// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "ImageIterator.pypp.hpp"

namespace bp = boost::python;

struct ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__std_scope_pair_less_CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr__greater__comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__std_scope_pair_less_CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr__greater___greater___greater___greater___greater__wrapper : CEGUI::ConstMapIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > > >, bp::wrapper< CEGUI::ConstMapIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > > > > {

    ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__std_scope_pair_less_CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr__greater__comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__std_scope_pair_less_CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr__greater___greater___greater___greater___greater__wrapper(CEGUI::ConstMapIterator<std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > > > const & arg )
    : CEGUI::ConstMapIterator<std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > > >( arg )
      , bp::wrapper< CEGUI::ConstMapIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > > > >(){
        // copy constructor
        
    }

    virtual ::std::pair< CEGUI::Image*, CEGUI::ImageFactory* > getCurrentValue(  ) const  {
        if( bp::override func_getCurrentValue = this->get_override( "getCurrentValue" ) )
            return func_getCurrentValue(  );
        else{
            return this->CEGUI::ConstMapIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > > >::getCurrentValue(  );
        }
    }
    
    ::std::pair< CEGUI::Image*, CEGUI::ImageFactory* > default_getCurrentValue(  ) const  {
        return CEGUI::ConstMapIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > > >::getCurrentValue( );
    }

};

void Iterator_next(::CEGUI::ConstMapIterator<std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > > >& t)
{
    t++;
}

void Iterator_previous(::CEGUI::ConstMapIterator<std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > > >& t)
{
    t--;
}

void register_ImageIterator_class(){

    { //::CEGUI::ConstMapIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > > >
        typedef bp::class_< ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__std_scope_pair_less_CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr__greater__comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__std_scope_pair_less_CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr__greater___greater___greater___greater___greater__wrapper, bp::bases< CEGUI::ConstBaseIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > >, std::pair< CEGUI::Image*, CEGUI::ImageFactory* > > > > ImageIterator_exposer_t;
        ImageIterator_exposer_t ImageIterator_exposer = ImageIterator_exposer_t( "ImageIterator", bp::no_init );
        bp::scope ImageIterator_scope( ImageIterator_exposer );
        { //::CEGUI::ConstMapIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > > >::getCurrentKey
        
            typedef CEGUI::ConstMapIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > > > exported_class_t;
            typedef ::CEGUI::String ( exported_class_t::*getCurrentKey_function_type )(  ) const;
            
            ImageIterator_exposer.def( 
                "getCurrentKey"
                , getCurrentKey_function_type( &::CEGUI::ConstMapIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > > >::getCurrentKey )
                , "*!\n\
            \n\
                Return the key for the item at the current iterator position.\n\
            *\n" );
        
        }
        { //::CEGUI::ConstMapIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > > >::getCurrentValue
        
            typedef CEGUI::ConstMapIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > > > exported_class_t;
            typedef ::std::pair< CEGUI::Image*, CEGUI::ImageFactory* > ( exported_class_t::*getCurrentValue_function_type )(  ) const;
            typedef ::std::pair< CEGUI::Image*, CEGUI::ImageFactory* > ( ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__std_scope_pair_less_CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr__greater__comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__std_scope_pair_less_CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr__greater___greater___greater___greater___greater__wrapper::*default_getCurrentValue_function_type )(  ) const;
            
            ImageIterator_exposer.def( 
                "getCurrentValue"
                , getCurrentValue_function_type(&::CEGUI::ConstMapIterator< std::map<CEGUI::String, std::pair<CEGUI::Image*, CEGUI::ImageFactory*>, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, std::pair<CEGUI::Image*, CEGUI::ImageFactory*> > > > >::getCurrentValue)
                , default_getCurrentValue_function_type(&ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__std_scope_pair_less_CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr__greater__comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__std_scope_pair_less_CEGUI_scope_Image_ptr__comma__CEGUI_scope_ImageFactory_ptr__greater___greater___greater___greater___greater__wrapper::default_getCurrentValue) );
        
        }
        ImageIterator_exposer.def("next", &::Iterator_next);
        ImageIterator_exposer.def("previous", &::Iterator_previous);
    }

}
