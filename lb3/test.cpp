#include "StdAfx.h"
#include "test.h"
#include <iostream>
using namespace std;

test::test(void)
{cout<<"���������� ����������� �����"<<endl;
}

void test::setnum(int number){
this->number=number;
}

void test::getnum(){
cout<<"���-�� ��������: "<<this->number<<endl;
}

test::~test(void)
{cout<<"���������� ���������� �����"<<endl;
}
