//#include <iostream>
//#include <utility>
//#include <vector>
//#include <fmt/ranges.h>
//#include <algorithm>
//#include <ranges>
//#include <set>
//#include <map>
//
//struct Student {
//    Student(std::string first_name, std::string last_name, int student_number, int semester)
//            : first_name(std::move(first_name)), last_name(std::move(last_name)), student_number(student_number), semester(semester) {}
//
//
//private:
//    std::string first_name;
//    std::string last_name;
//    int student_number;
//    int semester;
//
//public:
//    std::string getFirstName() {
//        return first_name;
//    }
//
//    void setFirstName(std::string &first_name) {
//        Student::first_name = first_name;
//    }
//
//    std::string &getLastName() {
//        return last_name;
//    }
//
//    void setLastName(std::string &last_name) {
//        Student::last_name = last_name;
//    }
//
//    int getStudentNumber() {
//        return student_number;
//    }
//
//    void setStudentNumber(int student_number) {
//        Student::student_number = student_number;
//    }
//
//    int getSemester() {
//        return semester;
//    }
//
//    void setSemester(int semester) {
//        Student::semester = semester;
//    }
//};
//
//auto isTheSameSemester(std::vector<Student> vec) {
//    auto semester = vec[0].getSemester();
//
//    for (int i = 0; i < vec.size(); ++i) {
//        if (vec[i].getSemester() != semester)
//            return false;
//    }
//    return true;
//}
//
//enum class SortBy {
//    FirstName,
//    LastName,
//    StudentNumber,
//    Semester
//};
//
//auto sort(std::vector<Student> &vec, SortBy sort) {
//    if (sort == SortBy::FirstName) {
//        std::ranges::sort(vec, [](Student s1, Student s2) {
//            return s1.getFirstName() < s2.getFirstName();
//        });
//    }
//    if (sort == SortBy::LastName) {
//        std::ranges::sort(vec, [](Student s1, Student s2) {
//            return s1.getLastName() < s2.getLastName();
//        });
//    }
//    if (sort == SortBy::StudentNumber) {
//        std::ranges::sort(vec, [](Student s1, Student s2) {
//            return s1.getStudentNumber() < s2.getStudentNumber();
//        });
//    }
//    if (sort == SortBy::Semester) {
//        std::ranges::sort(vec, [](Student s1, Student s2) {
//            return s1.getSemester() < s2.getSemester();
//        });
//    }
//}
//
//auto format_as(Student p) {
//    return fmt::format("({}, {}, {})", p.getFirstName(), p.getLastName(), p.getStudentNumber(), p.getSemester());
//}
//
//
//auto main() -> int {
//    auto listOfStudents = std::vector<Student>();
//    Student student1("Michael", "Smith", 123, 6);
//    Student student2("Anna", "Brown", 124, 5);
//    Student student3("Arthur", "Jones", 125, 5);
//    Student student4("Marceline", "Johnson", 126, 5);
//
//    listOfStudents.push_back(student1);
//    listOfStudents.push_back(student2);
//    listOfStudents.push_back(student3);
//    listOfStudents.push_back(student4);
//
//    fmt::println("{}", isTheSameSemester(listOfStudents));
//    fmt::println("{}", listOfStudents);
//
//    sort(listOfStudents, SortBy::FirstName);
//    fmt::println("{}", listOfStudents);
//
//    sort(listOfStudents, SortBy::LastName);
//    fmt::println("{}", listOfStudents);
//
//    sort(listOfStudents, SortBy::StudentNumber);
//    fmt::println("{}", listOfStudents);
//
//    sort(listOfStudents, SortBy::Semester);
//    fmt::println("{}", listOfStudents);
//
//}
