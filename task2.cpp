#include<iostream>
using namespace std;
class ExamMember {
    private:
        string name;
        string id;
        string department;

    public:

        void setName(string n) {
            name = n;
        }
        void setID(string i) {
            id = i;
        }
        void setDept(string d) {
            department = d;
        }
        string getName() {
            return name;
        }
        string getDept() {
            return department;
        }
        string getID() {
            return id;
        }
        void displayMemberInfo() {
            cout << "Name:  " << getName() << endl;
            cout << "ID:  " << getID() << endl;
            cout << "Department:  " << getDept() << endl;
        }
};

class UndergraduateStudent : public ExamMember {
    private:
        int semester;
        double CGPA;
        string major;

    public:
        void setSem(int s) {
            semester = s;
        }
        void setCGPA(double g) {
            CGPA = g;
        }
        void setMajor(string m) {
            major = m;
        }
        int getSem() {
            return semester;
        }
        double getCGPA() {
            return CGPA;
        }
        string getMajor() {
            return major;
        }

        void displayUndergradInfo() {
            displayMemberInfo();
            cout << "Semester:  " << getSem() << endl; 
            cout << "CGPA:  " << getCGPA() << endl; 
            cout << "Major:  " << getMajor() << endl; 
        }
};
class GraduateStudent : public ExamMember {
    private: 
        string researchTopic;
        string superVisor;
        string thesisStatus;
        
    public:
        void setResearchTopic(string r) {
            researchTopic = r;
        }
        void setSuperVisor(string v) {
            superVisor = v;
        }
        void setThesisStatus(string t) {
            thesisStatus = t;
        }

        string getThesisStatus() {
            return thesisStatus;
        }
        string getSuperVisor() {
            return superVisor;
        }
        string getResearchTopic() {
            return researchTopic;
        }
        void displayGraduateInfo(){
            displayMemberInfo();
            cout << "Research Topic:  " << getResearchTopic() << endl;
            cout << "SuperVisor:  " << getSuperVisor() << endl;
            cout << "Thesis Status:  " << getThesisStatus() << endl;
        }
};

class ExamOfficer : public ExamMember {
    private:    
        string location;
        int yearsOfService;
        int assignedExams;
    public:
        void setLocation(string l) {
            location = l;
        }
        void setYearsOfExp(int y) {
            yearsOfService = y;
        }
        void setAssignedExams(int a) {
            assignedExams = a;
        }
        string getLocation() {
            return location;
        }
        int getAssignedExams() {
            return assignedExams;
        }
        int getYearsOfService() {
            return yearsOfService;
        }
        void displayOfficerInfo() {
            displayMemberInfo();
            cout << "Location:  " << getLocation() << endl;
            cout << "Years Of Service:  " << getYearsOfService() << endl;
            cout << "Assigned Exams:  " << getAssignedExams() << endl;
        }
};

int main(){
    UndergraduateStudent u1,u2;
    GraduateStudent g1,g2;
    ExamOfficer e1,e2;

    u1.setName("Muhammad Hussain");
    u1.setID("26k-0615");
    u1.setDept("Computer Science");
    u1.setSem(1);
    u1.setCGPA(3.78);
    u1.setMajor("Software Engineering");
    cout << "====UNDERGRADUATE STUDENTS RECORDS====" << endl;
    u1.displayUndergradInfo();
    cout<< endl;
    
    u2.setName("Hamza");
    u2.setID("26k-0600");
    u2.setDept("Electrical Engineering");
    u2.setSem(4);
    u2.setCGPA(3.5);
    u2.setMajor("Embedded Systems");
    u2.displayUndergradInfo();
    cout<< endl;

    g1.setName("Zainab Tariq");
    g1.setID("GS-2025-012");
    g1.setDept("Computer Science");
    g1.setResearchTopic("Lightweight Cryptography for IoT");
    g1.setSuperVisor("Dr. Kamran Siddiqui");
    g1.setThesisStatus("Proposal Approved");
    cout<< "====GRADUATE STUDENTS RECORDS====" << endl;
    g1.displayGraduateInfo();
    cout<< endl;
    
    g2.setName("Hamza Raza");
    g2.setID("GS-2024-029");
    g2.setDept("Mechanical Engineering");
    g2.setResearchTopic("Thermal Efficiency in Solar Panels");
    g2.setSuperVisor("Dr. Nadia Farooq");
    g2.setThesisStatus("Data Collection");
    g2.displayGraduateInfo();
    cout<< endl;

    e1.setName("Tariq Mahmood");
    e1.setID("EO-104");
    e1.setDept("Examination Control");
    e1.setLocation("Admin Block, Room 202");
    e1.setYearsOfExp(8);
    e1.setAssignedExams(14);
    cout<< "====EXAM OFFICER RECORDS====" << endl;
    e1.displayOfficerInfo();
    cout << endl;

    e2.setName("Sana Javed");
    e2.setID("EO-118");
    e2.setDept("Academic Affairs");
    e2.setLocation("Science Wing, Room 105");
    e2.setYearsOfExp(4);
    e2.setAssignedExams(9);
    e2.displayOfficerInfo();
    cout << endl;
    return 0;
}