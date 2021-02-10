/********************************************************************************
** Form generated from reading UI file 'ViewField.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWFIELD_H
#define UI_VIEWFIELD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewField
{
public:
    QGridLayout *gridLayout;
    QLabel *label_7;
    QRadioButton *rangeRadioButton;
    QRadioButton *depthRadioButton;
    QRadioButton *mixedRadioButton;
    QRadioButton *noBoxRadioButton;
    QLabel *label_6;
    QCheckBox *followBottomCheckBox;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *ViewField)
    {
        if (ViewField->objectName().isEmpty())
            ViewField->setObjectName(QString::fromUtf8("ViewField"));
        ViewField->resize(211, 221);
        gridLayout = new QGridLayout(ViewField);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        label_7 = new QLabel(ViewField);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(0, 0));
        label_7->setMargin(4);
        label_7->setIndent(0);

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        rangeRadioButton = new QRadioButton(ViewField);
        buttonGroup = new QButtonGroup(ViewField);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(rangeRadioButton);
        rangeRadioButton->setObjectName(QString::fromUtf8("rangeRadioButton"));

        gridLayout->addWidget(rangeRadioButton, 0, 1, 1, 1);

        depthRadioButton = new QRadioButton(ViewField);
        buttonGroup->addButton(depthRadioButton);
        depthRadioButton->setObjectName(QString::fromUtf8("depthRadioButton"));

        gridLayout->addWidget(depthRadioButton, 1, 1, 1, 1);

        mixedRadioButton = new QRadioButton(ViewField);
        buttonGroup->addButton(mixedRadioButton);
        mixedRadioButton->setObjectName(QString::fromUtf8("mixedRadioButton"));

        gridLayout->addWidget(mixedRadioButton, 2, 1, 1, 1);


        noBoxRadioButton = new QRadioButton(ViewField);
        noBoxRadioButton->setObjectName(QString::fromUtf8("noBoxRadioButton"));

        gridLayout->addWidget(noBoxRadioButton, 3, 1, 1, 1);


        label_6 = new QLabel(ViewField);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(0, 0));
        label_6->setMargin(4);
        label_6->setIndent(0);

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        followBottomCheckBox = new QCheckBox(ViewField);
        followBottomCheckBox->setObjectName(QString::fromUtf8("followBottomCheckBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(followBottomCheckBox->sizePolicy().hasHeightForWidth());
        followBottomCheckBox->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(followBottomCheckBox, 7, 1, 1, 1, Qt::AlignHCenter);


        retranslateUi(ViewField);

        QMetaObject::connectSlotsByName(ViewField);
    } // setupUi

    void retranslateUi(QWidget *ViewField)
    {
        ViewField->setWindowTitle(QCoreApplication::translate("ViewField", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("ViewField", "Gate Mode", nullptr));
        rangeRadioButton->setText(QCoreApplication::translate("ViewField", "Range", nullptr));
        depthRadioButton->setText(QCoreApplication::translate("ViewField", "Depth", nullptr));
        mixedRadioButton->setText(QCoreApplication::translate("ViewField", "Mixed", nullptr));
        noBoxRadioButton->setText(QCoreApplication::translate("ViewField", "No Box Group", nullptr));
        label_6->setText(QCoreApplication::translate("ViewField", "Automatic Zoom", nullptr));
        followBottomCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ViewField: public Ui_ViewField {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWFIELD_H
