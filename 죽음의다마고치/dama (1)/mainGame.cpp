#include "mainGame.h"


mainGame::mainGame()
{
	_activity = new activity;// ��Ƽ��Ƽ ����
	cout << endl;
	cout << "���Ӥ���" << endl;
	cout << endl;
	cout << "���������� �ٸ���ġ����" << endl;
	cout << "�̸� �Է� : ";
	cin >> _name;
	_activity->setName(_name);
	cout << endl;
	cout << "Tip:���� �ʰ� ���ɤ�" << endl;
	cout << "���� 3 ������ ��û�� ������.." << endl;
	_activity->setAge(0);
	_activity->setHappy(0);
	_activity->setFull(0);
	_activity->setFatigability(0);
	_activity->setDefecation(0);
	_activity->setFatigability(0);
	
	while (1)
	{
		Sleep(1500);
		system("cls");
		//_activity->setAge(_activity->getAge());

		_activity->status();
		cin >> _key;

		if (_key > 4 || _key < 1)//Ű�� ��
		{
			
			cout << endl;
			cout << "�߸������� " << _name << " ��(��) �׾���ȴ٤���" << endl;
			cout << endl;
			break;
		}
		if (_key == 4)
		{
			cout << "��! zz" << endl;
			break;
		}

		if (_activity->getHappy() == 50)
		{
			_activity->setAge(_activity->getAge() + 1);
		}

		if (_key == 1)//��Ծ�����
		{
			
			_activity->setDefecation(_activity->getDefecation() == 0);
			_activity->setHappy(_activity->getHappy() + 30);
			_activity->setFatigability(_activity->getFatigability() + 10);
			_activity->setFull(_activity->getFull() + 50);
			if (_activity->getHappy() >= 30)
			{
				_activity->setAge(_activity->getAge() + 1);
				cout << endl;
				cout << "!!!!!!!!!!!!!!" << endl;
				cout << "���� ��;" << endl;
				cout << endl;
				cout << endl;
				cout << "!!!!!!!!!!!!!!" << endl;
				
			}
			
			

				

				if (_activity->getAge() > 3)
				{
					cout <<"�� 3 ���� ������ �ľ �׾���ȴ٤���" << endl;
				
					break;
				}
			
			if (_activity->getFull() >= 160)
			{
				cout << "�谡 �ҷ� ���� �׾��٤���" << endl;
				break;
			}
			cout << "�����Դ´�" << endl;
			cout << "�ູ���� " << _activity->getHappy() << " �̉�� " << " �Ƿε��� " << _activity->getFatigability() << "�� ���" << endl;
			cout << "��θ��� " << _activity->getFull() << " �� ���" << endl;
			Sleep(1500);
			cout << "���� �ʰ� ���ɤ�" << endl;
			
			
		}

		if (_key == 2)//�߶�
		{
			_activity->setDefecation(_activity->getDefecation() == 0);
			
			_activity->setFatigability(_activity->getFatigability() + 10);
			cout << "���� �ܴ�" << endl;
			cout << "���� �߸��ڼ� �Ƿε��� " << _activity->getFatigability() << " �� ���" << endl;
			
			Sleep(1500);
			system("cls");
			cout << "���� �ʰ� ���ɤ�" << endl;
		}

		if (_key == 3)//�躯
		{
			_activity->setDefecation(_activity->getDefecation() + 1);
			cout << "�δ���..." << endl;
			Sleep(1500);
			cout << "��" << endl;
			if (_activity->getDefecation() > 2)
			{
				Sleep(1500);
				system("cls");
				cout << "!!!!!!!!!!!!!!!!!!" << endl;
				Sleep(1500);

				cout << "���� ��� �ξ �׾���ȴ�" << endl;
				cout << "!!!!!!!!!!!!!!!!!!" << endl;
				break;


			}

			Sleep(1500);
			cout << "���� �ʰ� ���ɤ�" << endl;

			if (_activity->getHappy() <= 30)
			{

				_activity->setFull(_activity->getFull() - 30);
				if (_activity->getFull() <= 0)
				{
					_activity->setFull(_activity->getFull() == 0);//����� �ʱ�ȭ
				}
				Sleep(1500);
				cout << "��θ��� " << _activity->getFull() << " ���� �پ�����" << endl;
				cout << endl;
				cout << "���� �ʰ� ����zz" << endl;

				Sleep(1500);
				system("cls");






			}
		}
			


		

		

		if (_activity->getFatigability() >= 40)
		{
			cout << "!!!!!!!!!!!" << endl;
			cout << "�Ƿΰ� �׿� �׾�ȴ� ����" << endl;
			break;
		}
		if (_activity->getHappy() >= 70)
		{
			
			Sleep(1500);
			
			cout << "!!!!!!!!!!!" << endl;
			cout << "�ູ�ϰ� ���ٰ� �׾���ȴ� ����" << endl;
			break;
		}

		

			//if (_activity->getAge() == 3 || _activity->getFull() > 20 || _activity->getDefecation() > 50)
			//{
			//
			//	cout << "�׾���ȴ�" << endl;
			//	break;
			//}
			//	while (1)
			//	{
			//		if (_activity->setDethcount(_activity->getAge(),_activity->getFull(),_activity->getDefecation()) == 1)
			//		{
			//			Sleep(1500);
			//			system("cls");
			//			break;
			//		}
			//	}

		

	}
};
	mainGame::~mainGame()
    {
	delete _activity;//��Ƽ��Ƽ �Ҹ� 
    };


