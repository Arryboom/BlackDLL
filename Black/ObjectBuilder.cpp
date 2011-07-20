#include "stdafx.h"
#include "ObjectBuilder.h"
#include <List>
#include "Logger.h"

using namespace std;
char * ObjectBuilder::buildBooleanObject( bool value, int & size  )
{
	eveobjects::BooleanObject eveobject;
	eveobject.set_istrue(value);
	char * output = putToByteArray(eveobject, size);
	return output;
}

char * ObjectBuilder::buildOverViewObject(list<overViewEntry *> & labels, int & size)
{
	eveobjects::overview overviewObject;
	int temps = overviewObject.ByteSize();

	for(list<overViewEntry *>::iterator it = labels.begin(); it != labels.end(); it++)
	{
		log.elog("Iterating through the overViewEntry list in objectbuilder");
		eveobjects::label * overviewLabel = overviewObject.add_overviewentry();
		overviewLabel->set_text((*it)->text);
		overviewLabel->set_height((*it)->height);
		overviewLabel->set_width((*it)->width);
		overviewLabel->set_topleftx((*it)->topLeftX);
		overviewLabel->set_toplefty((*it)->topLeftY);
		
	}

	
	if(overviewObject.ByteSize() > temps)
	{
		log.elog("overviewObject increased in size");
	}
	return putToByteArray(overviewObject, size);
	
}

			
			

char * ObjectBuilder::buildInterfaceObject(string name, int posX, int posY, int width, int height, int & size)
{
	eveobjects::Interface interfaceObject;
	interfaceObject.set_name(name);
	interfaceObject.set_topleftx(posX);
	interfaceObject.set_toplefty(posY);
	interfaceObject.set_width(width);
	interfaceObject.set_height(height);
	char * output = putToByteArray(interfaceObject, size);
	return output;
}