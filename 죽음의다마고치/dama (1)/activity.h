#pragma once
#include <iostream>
#include <time.h>
#include <string>
#include <Windows.h>
using namespace std;

class activity
{
private:
	int _key; //��ȣ Ű��
	int _eat;//�Դ°� 
	int _happy;//�ູ��
	int _sleep;//�ڴ°�
	int _defecation;//�躯 Ȱ��
	int _age; //���� 
	int _fatigability;//�Ƿε�
	int _full; //��θ�
	string _name;//�̸�
	//int _dethCount;
	
	 







public:
	int getEat() { return _eat; }
	void setEat(int eat) { _eat = eat; }

	int getHappy() { return _happy; }
	void setHappy(int happy) { _happy = happy; }

	int getSleep() { return _sleep;}
	void setSleep(int sleep) { _sleep = sleep; }

	int getDefecation() { return _defecation; }
	void setDefecation(int defecation) { _defecation = defecation; }

	int getAge() { return _age; }
	void setAge(int age) { _age = age; }

	int getFatigability() { return _fatigability; }
	void setFatigability(int fatigability) { _fatigability = fatigability; }
	
	int getFull() { return _full; }
	void setFull(int full) { _full = full; }

	int getKey() { return _key; }
	void setKey(int key) { _key = key; }

	string getName() { return _name; }
	void setName(string name) { _name = name; }

//	int getDethcount(){ return _dethCount; }
//	int setDethcount(int age, int defecation, int full);

	






	activity();
	~activity();
	void status();
	

};

