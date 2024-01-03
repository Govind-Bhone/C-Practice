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

void StudentRecords::add_student(const unsigned int id_t, const std::string name_t){
    Student student(id_t, name_t);
    students.push_back(student);
}

void StudentRecords::add_course(const unsigned int id_t, const std::string name_t, uint8_t credits_t){
    Course course(id_t, name_t, credits_t);
    courses.push_back(course);
}

void StudentRecords::add_grade(const unsigned int student_id_t, const unsigned int course_id_t, const unsigned char grade_t){
    Grade grade(student_id_t, course_id_t, grade_t);
    grades.push_back(grade);
}

float StudentRecords::get_numeric_grade(char letter){
    switch(letter){
        case 'A':
            return 4.0f;
        case 'B':
            return 3.0f;
        case 'C':
            return 2.0f;
        case 'D':
            return 1.0f;
        default:
            return 0.0f;
    }
}

std::string StudentRecords::get_student_name(unsigned int student_id_t){
    int i=0;

    while(i< students.size() && students[i].get_id() != student_id_t){
        i++;
    }
    return students[i].get_name();
}

std::uint8_t StudentRecords::get_course_credits(unsigned int course_id_t){
    int j=0;
    while( j < courses.size() && courses[j].get_id() != course_id_t){
        j++;
    }
    return courses[j].get_credits();
}
float StudentRecords::get_GPA(int student_id_t){
    float total_credits = 0.0f;
    float total_grade_points = 0.0f;

    float GPA = 0.0f;

    for(auto grade_ptr= grades.begin(); grade_ptr != grades.end(); grade_ptr++){
        if(grade_ptr-> get_student_id() == student_id_t){
            float grade_points = get_numeric_grade(grade_ptr->get_grade());
            total_grade_points +=grade_points * get_course_credits(grade_ptr->get_course_id());
            total_credits += get_course_credits(grade_ptr->get_course_id());
        }
    }
    GPA = total_grade_points / total_credits;
    return GPA;
}

void StudentRecords::report_card(int sid){
    std::cout << "Report card for student " << get_student_name(sid) << std::endl;
    std::cout << "Course\t\tGrade" << std::endl;
    for(auto grade_ptr= grades.begin(); grade_ptr != grades.end(); grade_ptr++){
        if(grade_ptr-> get_student_id() == sid){
            std::cout << get_student_name(grade_ptr->get_student_id()) << "\t\t" << grade_ptr->get_grade() << std::endl;
        }
    }
    std::cout << "GPA: " << get_GPA(sid) << std::endl;
}

// int main(){
//     Student mystudent(1, "Hilda Jones");
//     Course my_course(7, "Physics 101", 4);
//     Grade my_grade(1,7,'B');

//     std::cout << my_course.get_credits() << std:: endl;
//     std::cout << "Student: "<<mystudent.get_name() <<std::endl;
//     std::cout << "Course: "<<my_course.get_name() <<std::endl;
//     std::cout << "Credits: "<<static_cast<int>(my_course.get_credits()) <<std::endl;
//     std::cout << "Grade: "<<my_grade.get_grade() <<std::endl;
//     return 0;
// }