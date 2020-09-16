#include "mainGame.h"


mainGame::mainGame()
{
	_activity = new activity;// 액티비티 생성
	cout << endl;
	cout << "게임ㄱㄱ" << endl;
	cout << endl;
	cout << "ㄷㄷ죽음의 다마복치ㄷㄷ" << endl;
	cout << "이름 입력 : ";
	cin >> _name;
	_activity->setName(_name);
	cout << endl;
	cout << "Tip:죽지 않게 조심ㅋ" << endl;
	cout << "레벨 3 찍으면 엄청난 보상이.." << endl;
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

		if (_key > 4 || _key < 1)//키값 비교
		{
			
			cout << endl;
			cout << "잘못눌러서 " << _name << " 이(가) 죽어버렸다ㄷㄷ" << endl;
			cout << endl;
			break;
		}
		if (_key == 4)
		{
			cout << "펑! zz" << endl;
			break;
		}

		if (_activity->getHappy() == 50)
		{
			_activity->setAge(_activity->getAge() + 1);
		}

		if (_key == 1)//밥먹었을떄
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
				cout << "렙업 ㅋ;" << endl;
				cout << endl;
				cout << endl;
				cout << "!!!!!!!!!!!!!!" << endl;
				
			}
			
			

				

				if (_activity->getAge() > 3)
				{
					cout <<"렙 3 ㅊㅊ 하지만 늙어서 죽어버렸다ㄷㄷ" << endl;
				
					break;
				}
			
			if (_activity->getFull() >= 160)
			{
				cout << "배가 불러 터져 죽었다ㄷㄷ" << endl;
				break;
			}
			cout << "밥을먹는다" << endl;
			cout << "행복도가 " << _activity->getHappy() << " 이됬고 " << " 피로도가 " << _activity->getFatigability() << "이 됬다" << endl;
			cout << "배부름도 " << _activity->getFull() << " 이 됬다" << endl;
			Sleep(1500);
			cout << "죽지 않게 조심ㅋ" << endl;
			
			
		}

		if (_key == 2)//잘때
		{
			_activity->setDefecation(_activity->getDefecation() == 0);
			
			_activity->setFatigability(_activity->getFatigability() + 10);
			cout << "잠을 잔다" << endl;
			cout << "잠을 잘못자서 피로도가 " << _activity->getFatigability() << " 이 됬다" << endl;
			
			Sleep(1500);
			system("cls");
			cout << "죽지 않게 조심ㅋ" << endl;
		}

		if (_key == 3)//배변
		{
			_activity->setDefecation(_activity->getDefecation() + 1);
			cout << "싸는중..." << endl;
			Sleep(1500);
			cout << "굳" << endl;
			if (_activity->getDefecation() > 2)
			{
				Sleep(1500);
				system("cls");
				cout << "!!!!!!!!!!!!!!!!!!" << endl;
				Sleep(1500);

				cout << "모든걸 쏟아 부어서 죽어버렸다" << endl;
				cout << "!!!!!!!!!!!!!!!!!!" << endl;
				break;


			}

			Sleep(1500);
			cout << "죽지 않게 조심ㅋ" << endl;

			if (_activity->getHappy() <= 30)
			{

				_activity->setFull(_activity->getFull() - 30);
				if (_activity->getFull() <= 0)
				{
					_activity->setFull(_activity->getFull() == 0);//배고픔 초기화
				}
				Sleep(1500);
				cout << "배부름이 " << _activity->getFull() << " 으로 줄어들었다" << endl;
				cout << endl;
				cout << "죽지 않게 조심zz" << endl;

				Sleep(1500);
				system("cls");






			}
		}
			


		

		

		if (_activity->getFatigability() >= 40)
		{
			cout << "!!!!!!!!!!!" << endl;
			cout << "피로가 쌓여 죽어벼렸다 ㄷㄷ" << endl;
			break;
		}
		if (_activity->getHappy() >= 70)
		{
			
			Sleep(1500);
			
			cout << "!!!!!!!!!!!" << endl;
			cout << "행복하게 웃다가 죽어버렸다 ㄷㄷ" << endl;
			break;
		}

		

			//if (_activity->getAge() == 3 || _activity->getFull() > 20 || _activity->getDefecation() > 50)
			//{
			//
			//	cout << "죽어버렸다" << endl;
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
	delete _activity;//액티비티 소멸 
    };


