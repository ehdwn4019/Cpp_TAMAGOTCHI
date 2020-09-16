#pragma once
#include <iostream>
#include <time.h>
#include <string>
#include <Windows.h>
using namespace std;

class activity
{
private:
	int _key; //번호 키값
	int _eat;//먹는거 
	int _happy;//행복감
	int _sleep;//자는거
	int _defecation;//배변 활동
	int _age; //나이 
	int _fatigability;//피로도
	int _full; //배부름
	string _name;//이름
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

