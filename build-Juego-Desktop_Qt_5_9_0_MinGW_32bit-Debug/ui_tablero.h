/********************************************************************************
** Form generated from reading UI file 'tablero.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLERO_H
#define UI_TABLERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tablero
{
public:
    QWidget *centralwidget;
    QLabel *lb_titulo;
    QPushButton *pB_start;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Tablero)
    {
        if (Tablero->objectName().isEmpty())
            Tablero->setObjectName(QStringLiteral("Tablero"));
        Tablero->resize(725, 693);
        Tablero->setStyleSheet(QStringLiteral("background-image: url(:/Sprites/slayer2.jpg);"));
        centralwidget = new QWidget(Tablero);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lb_titulo = new QLabel(centralwidget);
        lb_titulo->setObjectName(QStringLiteral("lb_titulo"));
        lb_titulo->setGeometry(QRect(290, 20, 151, 31));
        lb_titulo->setMinimumSize(QSize(151, 0));
        lb_titulo->setMaximumSize(QSize(151, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        lb_titulo->setFont(font);
        lb_titulo->setStyleSheet(QStringLiteral("background-image: url(:/Sprites/zyro-image.png);"));
        pB_start = new QPushButton(centralwidget);
        pB_start->setObjectName(QStringLiteral("pB_start"));
        pB_start->setGeometry(QRect(340, 610, 75, 24));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(60, 70, 630, 530));
        graphicsView->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Tablero->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Tablero);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 725, 21));
        Tablero->setMenuBar(menubar);
        statusbar = new QStatusBar(Tablero);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Tablero->setStatusBar(statusbar);

        retranslateUi(Tablero);

        QMetaObject::connectSlotsByName(Tablero);
    } // setupUi

    void retranslateUi(QMainWindow *Tablero)
    {
        Tablero->setWindowTitle(QApplication::translate("Tablero", "Tablero", Q_NULLPTR));
        lb_titulo->setText(QApplication::translate("Tablero", "RUST IN METAL", Q_NULLPTR));
        pB_start->setText(QApplication::translate("Tablero", "Comenzar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Tablero: public Ui_Tablero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLERO_H
