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
//���������
a.setObject("����������");
a.getObject();
cout<<endl;

exam b;
//���������
b.setObject("������");
b.getObject();
//�������
b.setdate(21,3);
b.getdate();
b.setstud(200);
b.getstud();
cout<<endl;

test c;
//���������
c.setObject("�������");
c.getObject();
//�������
c.setdate(1,8);
c.getdate();
c.setnum(20);
c.getnum();
cout<<endl;

question d;
//���������
d.setObject("���������");
d.getObject();
//����
d.setnum(3);
d.getnum();
//������
d.setQuestion("�����������");
d.getQuestion();
cout<<endl;

finexam f;
//���������
f.setObject("�����");
f.getObject();
//�������
f.setdate(15,6);
f.getdate();
f.setstud(150);
f.getstud();
return 0;
}