#include<iostream>
#include<fstream>
#include "records.cpp"

using namespace std;

vector<Student> students;
vector<Course> courses;
vector<Grade> grades;

float GPA = 0.0f;

int student_id;

void initialize();

int main(){

    students.push_back(Student(1, "John") );
    students.push_back(Student(2, "Mary") );
    students.push_back(Student(3, "Peter") );

    courses.push_back(Course(1, "Math", 5) );
    courses.push_back(Course(2, "Physics", 4) );
    courses.push_back(Course(3, "Chemistry", 3) );

    grades.push_back(Grade(1, 1, 'B') );
    grades.push_back(Grade(1, 2, 'A') );
    grades.push_back(Grade(1, 3, 'C') );
    grades.push_back(Grade(2, 1, 'A') );
    grades.push_back(Grade(2, 2, 'A') );
    grades.push_back(Grade(2, 3, 'A') );
    grades.push_back(Grade(3, 1, 'C') );
    grades.push_back(Grade(3, 2, 'C') );
    grades.push_back(Grade(3, 3, 'C') );

    cout << "Enter student id: ";
    cin >> student_id;

    float total_credits = 0.0f;
    float total_grade_points = 0.0f;

    for( auto grade_ptr = grades.begin();grade_ptr!=grades.end();grade_ptr++){
        if(grade_ptr->get_student_id() == student_id){
            float grade_points = 0.0f;
            switch (grade_ptr->get_grade())
            {
            case 'A':
                grade_points = 4.0f;
                break;
            case 'B':
                grade_points = 3.0f;
                break;
            case 'C':
                grade_points = 2.0f;
                break;
            case 'D':
                grade_points = 1.0f;
                break;
            default:
                break;
            }

            int j=0;
            while( j < courses.size() && courses[j].get_id() != grade_ptr->get_course_id()){
                j++;
            }
            total_credits += courses[j].get_credits();
            total_grade_points += grade_points * courses[j].get_credits();
        }
    }
    GPA = total_grade_points / total_credits;

    cout << "GPA of student " << student_id << " is " << GPA << endl;

    string student_str ;
    int i=0;

    while(i< students.size() && students[i].get_id() != student_id){
        i++;
    }
    student_str = students[i].get_name();

    cout << "GPA of student " << student_str << " is " << GPA << endl;

    //return 0;


    int student_id_2;
    StudentRecords* records_ptr = new StudentRecords();
    records_ptr->add_student(1, "John");
    records_ptr->add_student(2, "Mary");

    records_ptr->add_course(1, "Math", 5);
    records_ptr->add_course(2, "Physics", 4);

    records_ptr->add_grade(1, 1, 'B');
    records_ptr->add_grade(1, 2, 'A');
    records_ptr->add_grade(2, 1, 'A');
    records_ptr->add_grade(2, 2, 'A');

    cout << "Enter student id: ";
    cin >> student_id_2;
    float gpa2 = records_ptr->get_GPA(student_id_2);
    cout << "GPA of student " << student_id_2 << " is " << gpa2 << endl;
    cout << "GPA of student " << records_ptr->get_student_name(student_id_2) << " is " << gpa2 << endl;

    int student_id_3;
    cout << "Enter student id: ";
    cin >> student_id_3;
    records_ptr->report_card(student_id_3);

    delete records_ptr;
    initialize();

    return 0;
}

void initialize(){
    students.push_back(Student(1, "John") );
    students.push_back(Student(2, "Mary") );
    students.push_back(Student(3, "Peter") );

    courses.push_back(Course(1, "Math", 5) );
    courses.push_back(Course(2, "Physics", 4) );
    courses.push_back(Course(3, "Chemistry", 3) );

    grades.push_back(Grade(1, 1, 'B') );
    grades.push_back(Grade(1, 2, 'A') );
    grades.push_back(Grade(1, 3, 'C') );
    grades.push_back(Grade(2, 1, 'A') );
    grades.push_back(Grade(2, 2, 'A') );
    grades.push_back(Grade(2, 3, 'A') );
    grades.push_back(Grade(3, 1, 'C') );
    grades.push_back(Grade(3, 2, 'C') );
    grades.push_back(Grade(3, 3, 'C') );
}

