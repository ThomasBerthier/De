#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Affichage.h"
#include "de.h"
#include "dehisto.h"

class Affichage : public QMainWindow
{
	Q_OBJECT

public:
	Affichage(QWidget *parent = Q_NULLPTR);
	de *selectedDe;
	de *De;
	dehisto *DeHisto;
	
	

private:
	Ui::AffichageClass ui;

public slots:
	void pageDe();
	void pageDeHisto();
	void lancerDe();
	void updateView();
	void reset();
	void plusieurLancer();
};