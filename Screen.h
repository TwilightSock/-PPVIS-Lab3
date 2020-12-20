#pragma once

#include <iostream>

using namespace std;

class Screen
{
public:
	virtual void Show() = 0;
};

class Screen_operation : public Screen
{
public:
	void Show();
};

class Screen_pin : public Screen
{
public:
	void Show();
};

class Screen_transfer : public Screen
{
public:
	void Show();
};