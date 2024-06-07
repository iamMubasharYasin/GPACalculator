#include<iostream>
using namespace std;
int main()
{
	float semesterGPA;
	float GPA = 0.0;
    float totalCreditHours = 0.0;
    int numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;
	    
    float obtainedMarks[numSubjects];
    float totalMarks[numSubjects];
    float creditHours[numSubjects];
    
    for (int i = 1; i<numSubjects+1; i++) 
	{
        cout << "Enter obtained marks for subject " <<i<< ": ";
        cin >> obtainedMarks[i];
        cout << "Enter total marks for subject " <<i<< ": ";
        cin >> totalMarks[i];
        cout << "Enter credit hours for subject " <<i<< ": ";
        cin >> creditHours[i];
        cout<<"\n";
    }
    
    for (int i = 1; i<numSubjects+1; i++)
	 {
        float percentage = (obtainedMarks[i] / totalMarks[i]) * 100;
        float  subjectGPA;
        string grade;

        if (percentage >= 90) 
		{
            subjectGPA = 4.0;
            grade = "A+";
        }
		 else if (percentage >= 80 && percentage <=89.9)
		{
            subjectGPA = 4.0;
            grade = "A";
        } 
		else if (percentage >= 72 && percentage <=79.9) 
		{
            subjectGPA = 3.5;
            grade = "B+";
        }
		 else if (percentage >= 65 && percentage<=71.9)  
		 {
            subjectGPA = 3.0;
            grade = "B";
        } 
		else if(percentage>=50 && percentage<=64.9)
		{
            subjectGPA = 2.0;
            grade = "C";
        }
        else
        {
        	subjectGPA=0.0;
        	grade="F";
		}

        GPA += subjectGPA * creditHours[i];
        totalCreditHours += creditHours[i];

        cout << "Subject " << i << ": Percentage = " << percentage << "%, Grade = " << grade << ", Subject GPA = " <<subjectGPA<< endl;
    }
		cout<<"\n";
     
    semesterGPA =  GPA / totalCreditHours;
    cout << "Your semester GPA is: " << semesterGPA << endl;

    
}
