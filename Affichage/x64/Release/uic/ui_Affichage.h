/********************************************************************************
** Form generated from reading UI file 'Affichage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFFICHAGE_H
#define UI_AFFICHAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AffichageClass
{
public:
    QAction *actionde;
    QAction *actiondehisto;
    QWidget *centralWidget;
    QPushButton *lancerDe;
    QPushButton *reset;
    QLabel *label;
    QLabel *deValeur;
    QLabel *deTotal;
    QPushButton *plusieurLancerStart;
    QTableWidget *table;
    QSpinBox *plusieurLancerNombre;
    QMenuBar *menuBar;
    QMenu *menuchoisir;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AffichageClass)
    {
        if (AffichageClass->objectName().isEmpty())
            AffichageClass->setObjectName(QString::fromUtf8("AffichageClass"));
        AffichageClass->resize(600, 400);
        actionde = new QAction(AffichageClass);
        actionde->setObjectName(QString::fromUtf8("actionde"));
        actiondehisto = new QAction(AffichageClass);
        actiondehisto->setObjectName(QString::fromUtf8("actiondehisto"));
        centralWidget = new QWidget(AffichageClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lancerDe = new QPushButton(centralWidget);
        lancerDe->setObjectName(QString::fromUtf8("lancerDe"));
        lancerDe->setGeometry(QRect(90, 20, 75, 23));
        reset = new QPushButton(centralWidget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(90, 100, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 30, 47, 13));
        deValeur = new QLabel(centralWidget);
        deValeur->setObjectName(QString::fromUtf8("deValeur"));
        deValeur->setGeometry(QRect(190, 30, 47, 13));
        deTotal = new QLabel(centralWidget);
        deTotal->setObjectName(QString::fromUtf8("deTotal"));
        deTotal->setGeometry(QRect(190, 110, 47, 13));
        plusieurLancerStart = new QPushButton(centralWidget);
        plusieurLancerStart->setObjectName(QString::fromUtf8("plusieurLancerStart"));
        plusieurLancerStart->setGeometry(QRect(90, 250, 151, 23));
        table = new QTableWidget(centralWidget);
        if (table->columnCount() < 1)
            table->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        table->setObjectName(QString::fromUtf8("table"));
        table->setGeometry(QRect(480, 10, 101, 261));
        plusieurLancerNombre = new QSpinBox(centralWidget);
        plusieurLancerNombre->setObjectName(QString::fromUtf8("plusieurLancerNombre"));
        plusieurLancerNombre->setGeometry(QRect(90, 210, 151, 22));
        plusieurLancerNombre->setAcceptDrops(false);
        AffichageClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AffichageClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuchoisir = new QMenu(menuBar);
        menuchoisir->setObjectName(QString::fromUtf8("menuchoisir"));
        AffichageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AffichageClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        AffichageClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AffichageClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        AffichageClass->setStatusBar(statusBar);

        menuBar->addAction(menuchoisir->menuAction());
        menuchoisir->addAction(actionde);
        menuchoisir->addAction(actiondehisto);

        retranslateUi(AffichageClass);
        QObject::connect(lancerDe, SIGNAL(clicked()), AffichageClass, SLOT(lancerDe()));
        QObject::connect(reset, SIGNAL(clicked()), AffichageClass, SLOT(reset()));
        QObject::connect(actionde, SIGNAL(triggered()), AffichageClass, SLOT(pageDe()));
        QObject::connect(actiondehisto, SIGNAL(triggered()), AffichageClass, SLOT(pageDeHisto()));
        QObject::connect(plusieurLancerStart, SIGNAL(clicked()), AffichageClass, SLOT(plusieurLancer()));

        QMetaObject::connectSlotsByName(AffichageClass);
    } // setupUi

    void retranslateUi(QMainWindow *AffichageClass)
    {
        AffichageClass->setWindowTitle(QCoreApplication::translate("AffichageClass", "Affichage", nullptr));
        actionde->setText(QCoreApplication::translate("AffichageClass", "de", nullptr));
        actiondehisto->setText(QCoreApplication::translate("AffichageClass", "dehisto", nullptr));
        lancerDe->setText(QCoreApplication::translate("AffichageClass", "Lancer le d\303\251", nullptr));
        reset->setText(QCoreApplication::translate("AffichageClass", "Reset", nullptr));
        label->setText(QString());
        deValeur->setText(QCoreApplication::translate("AffichageClass", "0", nullptr));
        deTotal->setText(QCoreApplication::translate("AffichageClass", "0", nullptr));
        plusieurLancerStart->setText(QCoreApplication::translate("AffichageClass", "Lancer le tirage", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AffichageClass", "Lancer", nullptr));
        menuchoisir->setTitle(QCoreApplication::translate("AffichageClass", "choisir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AffichageClass: public Ui_AffichageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFFICHAGE_H
