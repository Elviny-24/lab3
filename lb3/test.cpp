#include "StdAfx.h"
#include "test.h"
#include <iostream>
using namespace std;

test::test(void)
{cout<<"вызывается конструктор теста"<<endl;
}

void test::setnum(int number){
this->number=number;
}

void test::getnum(){
cout<<"Кол-во вопросов: "<<this->number<<endl;
}

test::~test(void)
{cout<<"вызывается деструктор теста"<<endl;
}
