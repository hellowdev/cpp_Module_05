#pragma once
#include <iostream>
class  Form
{
    private:
        const std::string name;
        bool b;
        const int gradeToSign;     // Grade needed to SIGN the form
        const int gradeToExecute;  // Grade needed to EXECUTE the form

    public:
        Form(/* args */);
        ~ Form();
};


