#include "StdAfx.h"
#include "ispytanie.h"
#include <iostream>
using namespace std;

ispytanie::ispytanie(void)
{cout<<"���������� ����������� ���������"<<endl;
}

void ispytanie::setObject(char *object)
{
this->object=object;
}
void ispytanie::getObject()
{
cout<<"�������� ��������: "<<this->object<<endl;
}

ispytanie::~ispytanie(void)
{cout<<"���������� ���������� ���������..."<<endl;
}
