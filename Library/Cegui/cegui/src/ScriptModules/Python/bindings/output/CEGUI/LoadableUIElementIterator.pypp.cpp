// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "LoadableUIElementIterator.pypp.hpp"

namespace bp = boost::python;

struct ConstVectorIterator_less__std_scope_vector_less__CEGUI_scope_Scheme_scope_LoadableUIElement__greater___greater__wrapper : CEGUI::ConstVectorIterator< std::vector< CEGUI::Scheme::LoadableUIElement > >, bp::wrapper< CEGUI::ConstVectorIterator< std::vector< CEGUI::Scheme::LoadableUIElement > > > {

    ConstVectorIterator_less__std_scope_vector_less__CEGUI_scope_Scheme_scope_LoadableUIElement__greater___greater__wrapper(CEGUI::ConstVectorIterator<std::vector<CEGUI::Scheme::LoadableUIElement, std::allocator<CEGUI::Scheme::LoadableUIElement> > > const & arg )
    : CEGUI::ConstVectorIterator<std::vector<CEGUI::Scheme::LoadableUIElement, std::allocator<CEGUI::Scheme::LoadableUIElement> > >( arg )
      , bp::wrapper< CEGUI::ConstVectorIterator< std::vector< CEGUI::Scheme::LoadableUIElement > > >(){
        // copy constructor
        
    }

    virtual ::CEGUI::Scheme::LoadableUIElement getCurrentValue(  ) const  {
        if( bp::override func_getCurrentValue = this->get_override( "getCurrentValue" ) )
            return func_getCurrentValue(  );
        else{
            return this->CEGUI::ConstVectorIterator< std::vector< CEGUI::Scheme::LoadableUIElement > >::getCurrentValue(  );
        }
    }
    
    ::CEGUI::Scheme::LoadableUIElement default_getCurrentValue(  ) const  {
        return CEGUI::ConstVectorIterator< std::vector< CEGUI::Scheme::LoadableUIElement > >::getCurrentValue( );
    }

};

void Iterator_next(::CEGUI::ConstVectorIterator<std::vector<CEGUI::Scheme::LoadableUIElement, std::allocator<CEGUI::Scheme::LoadableUIElement> > >& t)
{
    t++;
}

void Iterator_previous(::CEGUI::ConstVectorIterator<std::vector<CEGUI::Scheme::LoadableUIElement, std::allocator<CEGUI::Scheme::LoadableUIElement> > >& t)
{
    t--;
}

void register_LoadableUIElementIterator_class(){

    { //::CEGUI::ConstVectorIterator< std::vector< CEGUI::Scheme::LoadableUIElement > >
        typedef bp::class_< ConstVectorIterator_less__std_scope_vector_less__CEGUI_scope_Scheme_scope_LoadableUIElement__greater___greater__wrapper, bp::bases< CEGUI::ConstBaseIterator< std::vector< CEGUI::Scheme::LoadableUIElement >, CEGUI::Scheme::LoadableUIElement > > > LoadableUIElementIterator_exposer_t;
        LoadableUIElementIterator_exposer_t LoadableUIElementIterator_exposer = LoadableUIElementIterator_exposer_t( "LoadableUIElementIterator", bp::no_init );
        bp::scope LoadableUIElementIterator_scope( LoadableUIElementIterator_exposer );
        { //::CEGUI::ConstVectorIterator< std::vector< CEGUI::Scheme::LoadableUIElement > >::getCurrentValue
        
            typedef CEGUI::ConstVectorIterator< std::vector< CEGUI::Scheme::LoadableUIElement > > exported_class_t;
            typedef ::CEGUI::Scheme::LoadableUIElement ( exported_class_t::*getCurrentValue_function_type )(  ) const;
            typedef ::CEGUI::Scheme::LoadableUIElement ( ConstVectorIterator_less__std_scope_vector_less__CEGUI_scope_Scheme_scope_LoadableUIElement__greater___greater__wrapper::*default_getCurrentValue_function_type )(  ) const;
            
            LoadableUIElementIterator_exposer.def( 
                "getCurrentValue"
                , getCurrentValue_function_type(&::CEGUI::ConstVectorIterator< std::vector< CEGUI::Scheme::LoadableUIElement > >::getCurrentValue)
                , default_getCurrentValue_function_type(&ConstVectorIterator_less__std_scope_vector_less__CEGUI_scope_Scheme_scope_LoadableUIElement__greater___greater__wrapper::default_getCurrentValue) );
        
        }
        LoadableUIElementIterator_exposer.def("next", &::Iterator_next);
        LoadableUIElementIterator_exposer.def("previous", &::Iterator_previous);
    }

}
