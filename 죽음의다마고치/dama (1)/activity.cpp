#include "activity.h"

//int activity::setDethcount(int age, int defecation, int full)
//{
//	if (age == 3)
//	{
//		_dethCount = 0;
//		cout << endl;
//		cout << "���̰� ���� �׾���Ƚ��ϴ� " << endl;
//		cout << endl;
//		_dethCount++;
//	}
//	if (defecation > 20)
//	{
//		_dethCount = 0;
//		cout << endl;
//		cout << "�躯�� ���� �׾���Ƚ��ϴ�" << endl;
//		cout << endl;
//		_dethCount++;
//
//	}
//	if (full == 30)
//	{
//		_dethCount = 0;
//		cout << endl;
//		cout << "��ҷ��� �׾� ���Ƚ��ϴ�" << endl;
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
	
	cout << "�ٸ���ġ�� ���� ����" << endl;
	cout << endl;
	cout << "�̸� : " << _name << endl;
	cout << "���� : " << _age << endl;
	cout <<"�ູ�� : " << _happy << endl;
	cout << "��θ� : " << _full << endl;
	cout << "�Ƿε� : " << _fatigability << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "���� ������ �ູ���� 30�����ϰ� �Ƿε��� 10����,��θ��� 50���� " << endl;
	cout << "���� �԰� �ູ���� 50�� �Ǹ� ���̸� �ѻ� �Դ´�" << endl;
	cout << "��θ��� 100�� �Ǳ����� �躯 Ȱ���� �ؾ� �Ѵ�" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << "������ �ұ�" << endl;
	cout << "��. �԰� ��. �ڰ� �� �ΰ� ��. ????" << endl;
	
	
	}


