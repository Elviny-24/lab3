#pragma once
#include "ispytanie.h"
class exam:
public	ispytanie
{int day;
int month;
int num;
public:
void	setdate(int day, int month);
void getdate();
void setstud(int num);
void getstud();
	exam(void);
	~exam(void);
};

