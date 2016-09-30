#include "StdAfx.h"
#include "ispytanie.h"
#include <iostream>
using namespace std;

ispytanie::ispytanie(void)
{cout<<"вызывается конструктор испытания"<<endl;
}

void ispytanie::setObject(char *object)
{
this->object=object;
}
void ispytanie::getObject()
{
cout<<"Название предмета: "<<this->object<<endl;
}

ispytanie::~ispytanie(void)
{cout<<"вызывается деструктор испытания..."<<endl;
}
