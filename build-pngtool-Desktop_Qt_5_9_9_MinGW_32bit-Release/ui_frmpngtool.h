/********************************************************************************
** Form generated from reading UI file 'frmpngtool.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMPNGTOOL_H
#define UI_FRMPNGTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmPngTool
{
public:
    QGridLayout *gridLayout;
    QLineEdit *txtFile;
    QPushButton *btnOk;
    QLineEdit *txtDir;
    QPushButton *btnDir;
    QPushButton *btnFile;
    QProgressBar *progress;
    QTextEdit *txtMain;

    void setupUi(QWidget *frmPngTool)
    {
        if (frmPngTool->objectName().isEmpty())
            frmPngTool->setObjectName(QStringLiteral("frmPngTool"));
        frmPngTool->resize(800, 600);
        gridLayout = new QGridLayout(frmPngTool);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        txtFile = new QLineEdit(frmPngTool);
        txtFile->setObjectName(QStringLiteral("txtFile"));

        gridLayout->addWidget(txtFile, 0, 0, 1, 1);

        btnOk = new QPushButton(frmPngTool);
        btnOk->setObjectName(QStringLiteral("btnOk"));

        gridLayout->addWidget(btnOk, 2, 1, 1, 1);

        txtDir = new QLineEdit(frmPngTool);
        txtDir->setObjectName(QStringLiteral("txtDir"));

        gridLayout->addWidget(txtDir, 1, 0, 1, 1);

        btnDir = new QPushButton(frmPngTool);
        btnDir->setObjectName(QStringLiteral("btnDir"));

        gridLayout->addWidget(btnDir, 1, 1, 1, 1);

        btnFile = new QPushButton(frmPngTool);
        btnFile->setObjectName(QStringLiteral("btnFile"));

        gridLayout->addWidget(btnFile, 0, 1, 1, 1);

        progress = new QProgressBar(frmPngTool);
        progress->setObjectName(QStringLiteral("progress"));
        progress->setValue(0);
        progress->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(progress, 2, 0, 1, 1);

        txtMain = new QTextEdit(frmPngTool);
        txtMain->setObjectName(QStringLiteral("txtMain"));

        gridLayout->addWidget(txtMain, 3, 0, 1, 2);


        retranslateUi(frmPngTool);

        QMetaObject::connectSlotsByName(frmPngTool);
    } // setupUi

    void retranslateUi(QWidget *frmPngTool)
    {
        frmPngTool->setWindowTitle(QApplication::translate("frmPngTool", "Form", Q_NULLPTR));
        btnOk->setText(QApplication::translate("frmPngTool", "\346\211\247\350\241\214\350\275\254\346\215\242", Q_NULLPTR));
        btnDir->setText(QApplication::translate("frmPngTool", "\351\200\211\346\213\251\347\233\256\345\275\225", Q_NULLPTR));
        btnFile->setText(QApplication::translate("frmPngTool", "\351\200\211\346\213\251\346\226\207\344\273\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class frmPngTool: public Ui_frmPngTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMPNGTOOL_H
