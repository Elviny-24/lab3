#include "StdAfx.h"
#include "exam.h"
#include <iostream>
using namespace std;

exam::exam(void)
{
}

void exam::setdate(int day,int month){
this->day=day;
this->month=month;
}

void exam::getdate(){
cout<<"���� ��������: "<<this->day<<"."<<this->month;
cout<<endl;
}

void exam::setstud(int num){
this->num=num;
}

void exam::getstud(){
cout<<"����� ����������: "<<this->num;
cout<<endl;
}

exam::~exam(void)
{
}
