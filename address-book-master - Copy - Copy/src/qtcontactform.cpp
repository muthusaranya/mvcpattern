#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        cityField(new QLineEdit())
{
    addRow("<font style = 'color:turquoise'>First Name</font>", firstNameField);
    addRow("<font style = 'color:blue'>Last Name</font>", lastNameField);
    addRow("<font style = 'color:turquoise'>Address</font>", addressField);
    addRow("<font style = 'color:blue'>Phone Number</font>", phoneNumberField);
    addRow("<font style = 'color:turquoise'>Email</font>", emailField);
    addRow("<font style = 'color:blue'>city</font>", cityField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    cityField->setText("");
}
