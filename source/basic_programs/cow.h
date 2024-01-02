/**
 * 
#pragma once is a preprocessor directive in C and C++ that serves as an 
include guard. Its purpose is to prevent a header file from being included more than 
once in a translation unit. This is a mechanism to avoid issues related to multiple inclusions
 of the same header file, which can lead to problems like redefinition errors.
*/
//#pragma once

#ifndef COW_H
#define COW_H
#endif // COW_H
#include<string>
#include<iostream>

enum cow_purpose { dairy, meat, hide, pet};

class Cow{
    private:
        std::string name;
        int age;
        unsigned char purpose;
    public:
        Cow(std::string name_i, int age_i, unsigned char purpose_i);
        std::string get_name();
        int get_age();
        int get_purpose();
};

