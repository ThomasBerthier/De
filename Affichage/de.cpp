#include "de.h"

de::de(int min, int max, QObject *parent)
	: QObject(parent)
{
	this->min = min;
	this->max = max;
}

de::~de()
{
}

void de::operator++(int AAA)
{
	score = rand() % 6 + 1;
	scoreTotal += score;
}

void de::operator=(int n)
{
	score = n;
	scoreTotal = n;
}

void operator+=(int &n, de &de)
{
	n = de.score;
}

void operator<(int &n, de &de)
{
	n = de.scoreTotal;
}

