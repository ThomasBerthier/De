#include "Affichage.h"
#include <qdebug.h>

Affichage::Affichage(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	De = new de(1, 6);
	DeHisto = new dehisto(1, 6);

	selectedDe = De;
	
	ui.table->setVisible(false);
	ui.plusieurLancerNombre->setVisible(false);
	ui.plusieurLancerStart->setVisible(false);
}

void Affichage::pageDe()
{
	this->selectedDe = De;
	ui.table->setVisible(false);
	ui.plusieurLancerNombre->setVisible(false);
	ui.plusieurLancerStart->setVisible(false);
	
}
void Affichage::pageDeHisto()
{
	this->selectedDe = DeHisto;
	ui.table->setVisible(true);
	ui.plusieurLancerNombre->setVisible(true);
	ui.plusieurLancerStart->setVisible(true);

}

void Affichage::lancerDe()
{
	(*selectedDe)++;
	std::vector<int> table = this->DeHisto->getTable();
	this->updateView();
}

void Affichage::plusieurLancer()
{
	DeHisto->jet(ui.plusieurLancerNombre->value());
	this->updateView();
}

void Affichage::reset()
{
	(*selectedDe) = 0;

	ui.deValeur->setText("0");
	ui.deTotal->setText("0");
	this->DeHisto->resetTable();
	this->updateView();
}

void Affichage::updateView()
{
	int deValeur;
	deValeur += (*selectedDe);
	ui.deValeur->setText(QString::number(deValeur));

	int deTotal;
	deTotal < (*selectedDe);
	ui.deTotal->setText(QString::number(deTotal));

	std::vector<int> table = this->DeHisto->getTable();
	ui.table->setRowCount(table.size());
	for (int i = 0; i < table.size(); i++)
	{
		QTableWidgetItem *element = new QTableWidgetItem(QString::number(table.at(i)));
		ui.table->setItem(i, 0, element);
	}

}

