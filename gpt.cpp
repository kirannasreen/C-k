#include <iostream>
#include <limits>  // For std::numeric_limits

using namespace std;
void calculateGPA();
void calculateCGPA();
void method();
int main()
 {
    int input;

    cout << "***************************************************************************" << endl;
    cout << "                    GPA & CGPA Calculator (Developed by Shoaib)             " << endl;
    cout << "****************************************************************************\n" << endl;
    cout << "            MENU:" << endl;
    cout << "                   1. Calculate GPA (Grade Point Average)" << endl;
    cout << "                   2. Calculate CGPA (Cumulative Grade Point Average)" << endl;
    cout << "                   3. Method that is applied here for calculating (GPA & CGPA)" << endl;
    cout << "                   4. Exit Application" << endl;
    cout << "******************************************************************************" << endl;

    while (true) { // Loop to handle invalid inputs
        cout << "Enter your choice: ";
        cin >> input;

        // Check if the input is valid and numeric
        if (cin.fail()) {
            cin.clear(); // Clear error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the input
            cout << "You have entered a non-numeric value. Please try again.\n" << endl;
            continue;
        }

        // If input is outside the valid range (1-4), inform the user
        switch(input) {
            case 1:
                calculateGPA();
                return 0; // Exit after valid option is processed

            case 2:
                calculateCGPA();
                return 0; // Exit after valid option is processed

            case 3:
                method();
                return 0; // Exit after valid option is processed

            case 4:
                cout << "Exiting the application...\n";
                return 0; // Exit after valid option is processed

            default:
                cout << "You have entered a wrong input. Try again!\n" << endl;
                break; // Will continue asking for input
        }
    }

    return 0;
}
void calculateGPA()
{
    int q;
    system("cls");
    cout<<"-------------- GPA Calculating -----------------"<<endl;
    cout<<" How many subject's points do you want to calculate? : ";
    cin>>q;

    float credit [q];
    float point [q];

    cout<<endl;
    for(int i=0;i<q;i++)
    {
        cout<<"Enter the credit for the subject "<<i+1<<": ";
        cin>>credit[i];
        cout<<endl;
        cout<<"Enter the point of the subject "<<i+1<<": ";
        cin>>point[i];
        cout<<"-----------------------------------\n\n"<<endl;
    }

    float sum=0;
    float tot;
    for(int j=0;j<q;j++)
    {
        tot=credit[j]*point[j];
        sum=sum+tot;
    }

    float totCr=0;
    for(int k=0;k<q;k++)
    {
        totCr=totCr+credit[k];
    }

    cout<<"\n\n\nTotal Points: "<<sum<<" . Total Credits: "<<totCr<<" .Total GPA: "<<sum/totCr<<" ."<<endl;


    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculateGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
}
void calculateCGPA()
{
    system("cls");
    int l;
    cout<<"-------------- CGPA Calculating -----------------\n\n"<<endl;
    cout<<"How many semester results do you want input? :";
    cin>>l;
    cout<<"\n\n"<<endl;
    float semrs[l];
    int i;

    for(i=0;i<l;i++)
    {
        cout<<" Enter Semester "<<i+1<<" Result(GPA): ";
        cin>>semrs[i];
        cout<<"\n"<<endl;
    }

    float semtot=0;
    for(int j=0;j<l;j++)
    {
        semtot=semtot+semrs[j];
    }

    cout<<"******** Your CGPA is "<<semtot/l<<" **********"<<endl;


    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculateCGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }

}

void method()
{
    system("cls");
    cout<<"--------------- Method of Calculating GPA & CGPA ---------------\n\n"<<endl;
    cout<<" GPA= Sum of (Credit*Point) / total of credits \n"<<endl;
    cout<<" CGPA=  Sum of GPA / number of semesters "<<endl;
    cout<<"-----------------------------------------------------------------\n\n"<<endl;

    sub:
    int inmenu;
    cout<<"1. Go Back to Main Menu"<<endl;
    cout<<"2. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                main();
                break;
        case 2:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
    
};