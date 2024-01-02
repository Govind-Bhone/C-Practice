#include<iostream>
#include<string>

class Student{
    private:
        unsigned int id;
        std::string name;

    public:
        Student(const unsigned int id_t, const std::string name_t);
        void set_id(unsigned int id_t);
        void set_name(std::string name_t);
        unsigned int get_id();
        std::string get_name();
};

class Course{
    private:
        unsigned int id;
        std::string name;
        uint8_t credits;

    public:
        Course(const unsigned int id_t, const std::string name_t, uint8_t credits_t);
        void set_id(unsigned int id_t);
        void set_name(std::string name_t);
        void set_credits(uint8_t credits);
        unsigned int get_id();
        std::string get_name();
        uint8_t get_credits();
};

class Grade{
    private:
        unsigned int student_id;
        unsigned int course_id;
        unsigned char grade;
    public:
        Grade(const unsigned int student_id_t, const unsigned int course_id_t, 
        const unsigned char grade_t);
        void set_student_id(const unsigned int student_id_t);
        void set_course_id(const unsigned int course_id_t);
        void set_grade(const unsigned char grade_t);
        unsigned int get_student_id();
        unsigned int get_course_id();
        unsigned char get_grade();
};

