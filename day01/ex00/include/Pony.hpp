#ifndef PONY_H
#define PONY_H

#include <iostream>
#include <string>

class Pony
{
private:
	std::string _name;
	std::string _color;
	std::string _fav_food;

public:
	Pony(const std::string &name, const std::string &color, const std::string &fav_food);
	~Pony();

	void eat() const;
	void play() const;
	void love() const;
	const std::string &getName() const;
};

#endif
