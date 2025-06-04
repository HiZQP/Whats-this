#include <string>

#pragma once
class Actor
{
private:
	std::string name;
	int id;
public:
	Actor(int id, int health, std::string s) : id(id), health(health), name(s){}
	~Actor(){}

	int health;
	double x = 0.0f, y = 0.0f, z = 0.0f;
	double rotation = 0.0f;
	double velocity = 0.0f;

};