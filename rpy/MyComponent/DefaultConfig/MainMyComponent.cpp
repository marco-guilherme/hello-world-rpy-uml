/********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: MyComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Fri, 16, Jun 2023  
	File Path	: MyComponent\DefaultConfig\MainMyComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainMyComponent.h"
//## auto_generated
#include "MyClass.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            MyClass * p_MyClass;
            p_MyClass = new MyClass;
            //#[ configuration MyComponent::DefaultConfig 
            //#]
            OXF::start();
            delete p_MyClass;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: MyComponent\DefaultConfig\MainMyComponent.cpp
*********************************************************************/
