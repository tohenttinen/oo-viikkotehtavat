#include <iostream>
#include <vector>
#include <algorithm>

#include "Student.h"


using namespace std;


bool compareByName(const Student& a, const Student& b){

    return a.getName() < b.getName();
}


bool compareByAge(const Student& a, const Student& b){

    return a. getAge() < b.getAge();
}




int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
        {
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            string name;
            int age;


            cout << "students name :";
            cin >> name;

            cout << "give students age";
            cin >> age;

            studentList.push_back(Student(name, age));

            break;
        }

        case 1:
        {
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.

            for(unsigned int i = 0; i < studentList.size(); i++){
                studentList[i].printStudentInfo();
            }

            break;
        }
        case 2:
        {
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            sort(studentList.begin(), studentList.end(), compareByName);

            for(unsigned int i = 0; i < studentList.size(); i++){
                studentList[i].printStudentInfo();
            }

            break;
        }
        case 3:
        {
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            sort(studentList.begin(), studentList.end(), compareByAge);

            for(unsigned int i = 0; studentList.size(); i++){
                studentList[i].printStudentInfo();
            }


            break;
        }

        case 4:
        {
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            string searchName;


            cout << "search a name: ";
            cin >> searchName;

            vector<Student>::iterator it =
                find_if(studentList.begin(), studentList.end(),
                        [searchName](Student s)
                        {
                            return s.getName() == searchName;
                        });

            if (it != studentList.end())
            {
                it->printStudentInfo();
            }
            break;
        }
        default:
        {
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }

    }while(selection < 5);

return 0;
}
