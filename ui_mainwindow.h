/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <dialogr.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(832, 545);
        MainWindow->setMinimumSize(QSize(832, 545));
        MainWindow->setMaximumSize(QSize(832, 545));
        QPalette palette;
        QBrush brush(QColor(78, 154, 6, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral(":/iss_logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 210, 200, 200));
        pushButton->setMinimumSize(QSize(200, 200));
        pushButton->setMaximumSize(QSize(200, 200));
        QFont font;
        font.setPointSize(16);
        pushButton->setFont(font);
        pushButton->setFocusPolicy(Qt::ClickFocus);
        pushButton->setAcceptDrops(false);
        pushButton->setStyleSheet(QLatin1String("#pushButton {\n"
"background-color: url transparent;\n"
"border-image: url(:eng.png);\n"
"background: none;\n"
"border:  none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton:pressed\n"
"{\n"
"border-image: url(:engp.png);\n"
"}"));
        pushButton->setIconSize(QSize(31, 37));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(470, 210, 200, 200));
        pushButton_2->setMinimumSize(QSize(200, 200));
        pushButton_2->setMaximumSize(QSize(200, 200));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("#pushButton_2 {\n"
"background-color: transparent;\n"
"border-image: url(:rou.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_2:pressed\n"
"{\n"
"border-image: url(:roup.png);\n"
"}"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(660, 470, 141, 61));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        QBrush brush2(QColor(190, 190, 190, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_3->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Gabriola"));
        font1.setPointSize(14);
        font1.setItalic(false);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QLatin1String("#pushButton_3 {\n"
"background-color: url transparent;\n"
"border-image: url(:un3.png);\n"
"background: none;\n"
"border:  none;\n"
"background-repeat: none;\n"
"}\n"
"#pushButton_3:hover\n"
"{\n"
"border-image: url(:un1.png);\n"
"}\n"
"#pushButton_3:pressed\n"
"{\n"
"border-image: url(:un2.png);\n"
"}\n"
""));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 50, 171, 61));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label->setPalette(palette2);
        QFont font2;
        font2.setFamily(QStringLiteral("High Tower Text"));
        font2.setPointSize(26);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label->setFont(font2);
        label->setStyleSheet(QLatin1String("#label{\n"
"background-color: transparent;\n"
"border-image: none;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 140, 471, 51));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_2->setPalette(palette3);
        QFont font3;
        font3.setFamily(QStringLiteral("High Tower Text"));
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_2->setFont(font3);
        label_2->setStyleSheet(QLatin1String("#label_2 {\n"
"background-color: transparent;\n"
"border-image: none;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Main Window", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "CLOSE", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Welcome!", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Please choose your language ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
