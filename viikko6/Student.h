#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;


class Student{
    public:
        Student(string name, int age);

        string getName() const;
        int getAge() const;

        void printStudentInfo() const;

    private:

        string name;
        int age;

};

#endif // STUDENT_H
