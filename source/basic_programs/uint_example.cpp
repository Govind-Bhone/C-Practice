#include <iostream>
#include <cstdint>

class Course {
private:
    std::string name;
    uint8_t credits;

public:
    Course(const std::string& courseName, const uint8_t courseCredits) 
        : name(courseName), credits(courseCredits) {}

    void displayCourseInfo() const {
        std::cout << "Course: " << name << "\n";
        std::cout << "Credits: " << static_cast<int>(credits) << "\n";
    }
};

int main() {
    // Creating a Course object with 4 credits
    Course programmingCourse("Programming 101", 4);

    // Displaying course information
    programmingCourse.displayCourseInfo();

    return 0;
}
