#include<iostream>
using namespace std;
class LibraryItem {
    private:
        string title;
        string publisher;

    public:
        void setTitle(string t) {
            title = t;
        }
        void setPublisher(string p) {
            publisher = p;
        }
        string getPublisher() {
            return publisher;
        }
        string getTitle() {
            return title;
        }
        void displayInfo(){
            cout << "Title:  " << getTitle() << endl;
            cout << "Publisher:  " << getPublisher() << endl;
        }
};
class Book : public LibraryItem {
    private: 
        string author;
        int pages;
    public: 
        void setAuthor(string a) {
            author = a;
        }
        void setPages(int p) {
            pages = p;
        }
        string getAuthor() {
            return author;
        }
        int getPages() {
            return pages;
        }
        void displayBookInfo() {
            displayInfo();
            cout << "Author:  " << getAuthor() << endl;
            cout << "Pages:  " << getPages() << endl;
        }
};
class Magazine : public LibraryItem {
    private: 
        int month;
        string issueNumber;
    public:
        void setMonth(int a) {
            month = a;
        }
        void setIssueNumber(string i) {
            issueNumber = i;
        }
        string getIssueNumber() {
            return issueNumber;
        }
        int getMonth() {
            return month;
        }
        void displayMagazineInfo() {
            displayInfo();
            cout << "Month:  " << getMonth() << endl;
            cout << "Issue Number:  " << getIssueNumber() << endl;
        }  

};
int main() {
    Book b1;
    Magazine m1;
    cout << "===BOOK OBJECT===" << endl;
    b1.setTitle("Atomic Habits");
    b1.setPublisher("Oxford");
    b1.setAuthor("Noor ul Hassan");
    b1.setPages(300);
    b1.displayBookInfo();

    cout << "===MAGAZINE OBJECT===" << endl;
    m1.setTitle("100 DAYS 100 RECIPIES");
    m1.setPublisher("HUM Masala");
    m1.setIssueNumber("101");
    m1.setMonth(6);
    m1.displayMagazineInfo();
   return 0;
}