#include using namespace std;

float getGradePoint(char grade) {
switch(grade) { case 'A': return 10; case 'B': return 8; case 'C': return 6; case 'D': return 4; case 'F': return 0; default: return 0; } }

int main() { 
int semesters; cout << "Enter number of semesters: "; cin >> semesters;

float totalCGPA = 0;

for(int s = 1; s <= semesters; s++) {
    int subjects;
    cout << "\nEnter number of subjects in Semester " << s << ": ";
    cin >> subjects;

    float totalCredits = 0, totalPoints = 0;

    for(int i = 1; i <= subjects; i++) {
        int credit;
        char grade;

        cout << "\nSubject " << i << ":\n";
        cout << "Enter credit hours: ";
        cin >> credit;

        cout << "Enter grade (A/B/C/D/F): ";
        cin >> grade;

        float gradePoint = getGradePoint(grade);

        totalCredits += credit;
        totalPoints += gradePoint * credit;
    }

    float GPA = totalPoints / totalCredits;
    cout << "\nGPA of Semester " << s << " = " << GPA << endl;

    totalCGPA += GPA;
}

float CGPA = totalCGPA / semesters;
cout << "\nFinal CGPA = " << CGPA << endl;

return 0;
}
