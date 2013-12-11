// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "HeaderSequenceEventArgs.pypp.hpp"

namespace bp = boost::python;

void register_HeaderSequenceEventArgs_class(){

    { //::CEGUI::HeaderSequenceEventArgs
        typedef bp::class_< CEGUI::HeaderSequenceEventArgs, bp::bases< CEGUI::WindowEventArgs > > HeaderSequenceEventArgs_exposer_t;
        HeaderSequenceEventArgs_exposer_t HeaderSequenceEventArgs_exposer = HeaderSequenceEventArgs_exposer_t( "HeaderSequenceEventArgs", "*!\n\
        \n\
           EventArgs class used for segment move (sequence changed) events.\n\
        *\n", bp::init< CEGUI::Window *, CEGUI::uint, CEGUI::uint >(( bp::arg("wnd"), bp::arg("old_idx"), bp::arg("new_idx") )) );
        bp::scope HeaderSequenceEventArgs_scope( HeaderSequenceEventArgs_exposer );
        HeaderSequenceEventArgs_exposer.def_readwrite( "d_newIdx", &CEGUI::HeaderSequenceEventArgs::d_newIdx );
        HeaderSequenceEventArgs_exposer.def_readwrite( "d_oldIdx", &CEGUI::HeaderSequenceEventArgs::d_oldIdx );
    }

}
