#include "dehisto.h"
#include <qdebug.h>

dehisto::dehisto(int min, int max)
	: de(min, max)
{

}

dehisto::~dehisto()
{
}

void dehisto::jet(int n)
{
	for(int i = 0; n > i; i++)
		(*this)++;
}

void dehisto::operator++(int)
{
	de::operator++(0);

	int deValeur;
	deValeur += (*this);
	if (table.size() > 6)
		table.erase(table.begin());

	table.push_back(deValeur);
}

void dehisto::resetTable()
{
	this->table.clear();
}

std::vector<int> dehisto::getTable()
{
	return table;
}


