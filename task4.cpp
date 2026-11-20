#include<iostream>
using namespace std;
class UniversityMember{
    private:
        string name;
        int age;
        string id;

    public:
        void setAge(int a) {
            age = a; 
        }
        void setName(string n) {
            name = n;
        }
        void setId(string i) {
            id = i;
        }
        string getName() {
            return name;
        }
        int getAge() {
            return age;
        }
        string getId() {
            return id;
        }
        void displayInfo() {
            cout << "Name:  " << getName() << endl;
            cout << "Age:  " << getAge() << endl;
            cout << "ID:  " << getId() << endl;
        }      
};
class Student : public UniversityMember {
    private:
        string rollNumber;
        string course;

    public:
        void setRollNumber(string r) {
            rollNumber = r;
        }
        void setCourse (string c) {
            course = c;
        }
        string getRollNumber() {
            return rollNumber;
        }
        string getCourse() {
            return course;
        }
        void displayStudentInfo() {
            displayInfo();
            cout << "RollNumber:  " << getRollNumber() << endl;
            cout << "Course:  " << getCourse() << endl;
        }
};
class Teacher : public UniversityMember {
    private: 
        string employeeId;
        string subject;
    public:
        void setEmployeeId(string e) {
            employeeId = e;
        } 
        void setSubject(string s) {
            subject = s;
        }
        string getSubject() {
            return subject;
        }
        string getEmployeeId() {
            return employeeId;
        }

        void displayTeacherInfo() {
            displayInfo();
            cout << "Employee ID:  " << getEmployeeId() << endl;
            cout << "Subject:  " << getSubject() << endl;
        }
};
int main() {
    Student s1,s2;
    Teacher t1,t2;
    cout << "===STUDENTS OBJECTS===" << endl;

    s1.setName("Muhammad Hussain");
    s1.setCourse("Computer Science");
    s1.setId("1");
    s1.setAge(19);
    s1.setRollNumber("26K-0615");
    s1.displayStudentInfo();
    cout << endl;
    

    s2.setName("Ali Asif");
    s2.setCourse("Business Administration");
    s2.setId("2");
    s2.setAge(17);
    s2.setRollNumber("26K-1221");
    s2.displayStudentInfo();
    cout << endl;


    cout << "===TEACHER OBJECTS===" << endl;    
    t1.setName("Aftab");
    t1.setAge(55);
    t1.setId("1");
    t1.setSubject("Mathematics");
    t1.setEmployeeId("E001");
    t1.displayTeacherInfo();
    cout << endl;
      
    t2.setName("Hashim");
    t2.setAge(33);
    t2.setId("2");
    t2.setSubject("Physics");
    t2.setEmployeeId("E002");
    t2.displayTeacherInfo();
    cout << endl;
    return 0;
}