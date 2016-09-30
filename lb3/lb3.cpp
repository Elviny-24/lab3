#include "stdafx.h"
#include "exam.h"
#include "finexam.h"
#include "test.h"
#include "ispytanie.h"
#include "question.h"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
setlocale(LC_ALL,"rus");
ispytanie a;
//испытание
a.setObject("Математика");
a.getObject();
cout<<endl;

exam b;
//испытание
b.setObject("Физика");
b.getObject();
//экзамен
b.setdate(21,3);
b.getdate();
b.setstud(200);
b.getstud();
cout<<endl;

test c;
//испытание
c.setObject("История");
c.getObject();
//экзамен
c.setdate(1,8);
c.getdate();
c.setnum(20);
c.getnum();
cout<<endl;

question d;
//испытание
d.setObject("Философия");
d.getObject();
//тест
d.setnum(3);
d.getnum();
//вопрос
d.setQuestion("Определение");
d.getQuestion();
cout<<endl;

finexam f;
//испытание
f.setObject("Химия");
f.getObject();
//экзамен
f.setdate(15,6);
f.getdate();
f.setstud(150);
f.getstud();
return 0;
}