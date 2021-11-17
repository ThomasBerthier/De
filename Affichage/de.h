#pragma once

#include <QObject>
#include <cstdlib>

class de : public QObject
{
	Q_OBJECT

public:
	de(int min, int max, QObject *parent = Q_NULLPTR);
	~de();
	int min, max;
	int score;
	int scoreTotal = 0;
	int n;

	virtual void operator++(int AAA);
	friend void operator+=(int &n, de &de);
	void operator=(int n);
	friend void operator<(int &n, de &de);

};
