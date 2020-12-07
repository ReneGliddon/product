#ifndef "PROJECT_H"
#define "PROJECT_H"
using namespace std;
#include <vector>

class project
{
public:
    project(int pNumber, string pLecturer, string pDescription);
    ~project();

    int getProjectNumber() const;
    string getLecturer() const;
    void addStudent(string pStdNum, pName);
    int nrStuds() const;
    void displayStuds() const;

private:
    int number;
    string description;
    string lecturer;
    vector <string> studentNumbers;
    vector <string> studentNames;

};


#endif

