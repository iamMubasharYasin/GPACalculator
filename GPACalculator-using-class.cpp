#include <iostream>
using namespace std;
class Student 
{
	private:
    	float totalGPA;
    	float totalCreditHours;
    	int numSubjects;

	public:
    void getMarks()
	{
        cout<<"Enter the number of subjects: ";
        cin>>numSubjects;
        
        float obtainedMarks, totalMarks, creditHours;
        totalGPA = 0.0;
        totalCreditHours = 0.0;
		
        for (int i=0;i<numSubjects; i++) 
		{
            cout<<"Enter obtained marks for subject "<<i+1<<": ";
            cin>>obtainedMarks;
            cout<<"Enter total marks for subject "<<i+1<<": ";
            cin>>totalMarks;
            cout<<"Enter credit hours for subject "<<i+1<< ": ";
            cin>>creditHours;
            cout << "\n";

            float percentage = (obtainedMarks / totalMarks) * 100;
            
            float subjectGPA = calculateGPA(percentage);//calling percentage and store a value in subjectGPA
            string grade = getGrade(subjectGPA);

            totalGPA += subjectGPA * creditHours;
            totalCreditHours += creditHours;

            cout<<"Subject "<<i+1<<": Percentage = "<<percentage<< "%, Grade = " <<grade<< ", Subject GPA = "<<subjectGPA<<endl;
        }
    }

	private:
    float calculateGPA(float percentage) {
        if (percentage >= 90) 
		{
            return 4.0;
        } 
		else if (percentage >= 80 && percentage <=89.9)
		{
            return 4.0;
        } 
		else if (percentage >= 72 && percentage <=79.9)
		{
            return 3.5;
        } 
		else if (percentage >= 65 && percentage <=71.9 )
		{
            return 3.0;
        } 
		else if (percentage >= 50 && percentage <=64.9)  
		{
            return 2.0;
        } 
		else 
		{
            return 0.0;
        }
    }

	private:
    string getGrade(float gpa)
	 {
        if (gpa == 4.0)
		{
            return "A+";
        } 
		else if (gpa >= 3.5)
		{
            return "A";
        } 
		else if (gpa >= 3.0)
		{
            return "B+";
        } 
		else if (gpa >= 2.0)
		{
            return "C";
        } 
		else
		{
            return "F";
        }
    }

	public:
    void print_Semester_GPA()
	{
        float semesterGPA = totalGPA / totalCreditHours;
        cout << "\nYour semester GPA is: " << semesterGPA << endl;
    }
};
