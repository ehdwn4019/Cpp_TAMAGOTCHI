#include "activity.h"

//int activity::setDethcount(int age, int defecation, int full)
//{
//	if (age == 3)
//	{
//		_dethCount = 0;
//		cout << endl;
//		cout << "나이가 많아 죽어버렸습니다 " << endl;
//		cout << endl;
//		_dethCount++;
//	}
//	if (defecation > 20)
//	{
//		_dethCount = 0;
//		cout << endl;
//		cout << "배변을 못해 죽어버렸습니다" << endl;
//		cout << endl;
//		_dethCount++;
//
//	}
//	if (full == 30)
//	{
//		_dethCount = 0;
//		cout << endl;
//		cout << "배불러서 죽어 버렸습니다" << endl;
//		cout << endl;
//		_dethCount++;
//	}
//	return _dethCount;
//}

activity::activity()
{
}

activity::~activity()
{
}

void activity::status()
{
	
	cout << "다마복치의 현재 상태" << endl;
	cout << endl;
	cout << "이름 : " << _name << endl;
	cout << "나이 : " << _age << endl;
	cout <<"행복도 : " << _happy << endl;
	cout << "배부름 : " << _full << endl;
	cout << "피로도 : " << _fatigability << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "밥을 먹으면 행복도가 30증가하고 피로도가 10증가,배부름이 50증가 " << endl;
	cout << "밥을 먹고 행복도가 50이 되면 나이를 한살 먹는다" << endl;
	cout << "배부름이 100이 되기전에 배변 활동을 해야 한다" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << "무엇을 할까" << endl;
	cout << "⑴. 먹고 ⑵. 자고 ⑶ 싸고 ⑷. ????" << endl;
	
	
	}


