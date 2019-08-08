/*-- main.cpp------------------------------------------------------------
   This file is the driver for testing StarterClass
-------------------------------------------------------------------------*/
#include "StarterClass.h"
#include <iostream>
using namespace std;

/* main is the entrypoint into every C++ program */
int main()
{
	// Create object with new
	StarterClass* sc = new StarterClass();
	sc->method1();
	sc->display();
	// Delete object
	delete sc;
	return 0;
}