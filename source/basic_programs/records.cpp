#include "records.h"

Student:: Student(const unsigned int id_t, const std::string name_t)
    :id(id_t), name(name_t){}

void Student::set_id(unsigned int id_t){
    id = id_t;
}
void Student::set_name(std::string name_t){
    name = name_t;
}
unsigned int Student::get_id(){
    return id;
}
std::string Student:: get_name(){
    return name;
}

Course:: Course(const unsigned int id_t, const std::string name_t, uint8_t credits_t)
    :id(id_t),name(name_t),credits(credits_t){}

void Course:: set_id(unsigned int id_t){
    id = id_t;
}
void Course:: set_name(std::string name_t){
    name = name_t;
}
void Course:: set_credits(uint8_t credits_t){
    credits = credits_t;
}
unsigned int Course::get_id(){
    return id;
}
std::string Course::get_name(){
    return name;
}
uint8_t Course:: get_credits(){
    return credits;
}
Grade:: Grade(const unsigned int student_id_t, const unsigned int course_id_t, const unsigned char grade_t)
        :student_id(student_id_t), course_id(course_id_t), grade(grade_t){};

void Grade::set_student_id(const unsigned int student_id_t){
    student_id = student_id_t;
}
void Grade:: set_course_id(const unsigned int course_id_t){
    course_id = course_id_t;
}
void Grade::set_grade(const unsigned char grade_t){
    grade = grade_t;

}
unsigned int Grade:: get_student_id(){
    return student_id;
}
unsigned int Grade:: get_course_id(){
    return course_id;
}
unsigned char Grade:: get_grade(){
    return grade;
}

int main(){
    Student mystudent(1, "Hilda Jones");
    Course my_course(7, "Physics 101", 4);
    Grade my_grade(1,7,'B');

    std::cout << my_course.get_credits() << std:: endl;
    std::cout << "Student: "<<mystudent.get_name() <<std::endl;
    std::cout << "Course: "<<my_course.get_name() <<std::endl;
    std::cout << "Credits: "<<static_cast<int>(my_course.get_credits()) <<std::endl;
    std::cout << "Grade: "<<my_grade.get_grade() <<std::endl;
    return 0;
}