#pragma once
#include "exam.h"
class test:
	public exam
{ int number;
public:
	void setnum(int number);
	void getnum();
	test(void);
	~test(void);
};

