#pragma once

#include <QObject>
#include "de.h"
#include "vector"

class dehisto : public de
{
	Q_OBJECT

public:
	dehisto(int min, int max);
	~dehisto();
	std::vector<int> table;
	void jet(int n);
	virtual void operator++(int);
	void resetTable();
	
	std::vector<int> getTable();
};
