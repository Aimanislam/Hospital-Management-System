#include <iostream>
using namespace std;

class booking
{
public:
     // DATA MEMBERS
     string p_name, p_problem, address, date;
     int age, number;

     // DATA FUNCTIONS
     void patient_appoint()
     {
          cout << "\t\t\t\t\t\tPatient Name: ";
          cin >> p_name;
          cout << "\t\t\t\t\t\tPatient Age:  ";
          cin >> age;
          cout << "\t\t\t\t\t\tPatient Problem: ";
          cin >> p_problem;
          cout << "\t\t\t\t\t\tYour Address: ";
          cin >> address;
          cout << "\t\t\t\t\t\tEnter Your Mobile Number : ";
          cin >> number;
          cout << "\n\t\t\t\t\t\tPatient Successfully Booked!" << endl
               << endl;
     }
};

class list
{
public:
     int doc;
     // Array addded of "string type" to store all doctor name information
     string doctorList[20000] = {"\t\t\t\t\t1. Dr. Abdullah Al Siraj\t*Eye Specialist", "\t\t\t\t\t2. Dr. Altaf Uddin Khan\t\t*Heart Specialist", "\t\t\t\t\t3. Dr. Emdadul Hoque\t\t*Diabetic Specialist", "\t\t\t\t\t4. Dr. Mostofa Zia\t\t*Heart Surgoen", "\t\t\t\t\t5. Dr. Shorif Uddin\t\t*Neuro Surgoen"};
     void doctor_list()
     {
          cout << doctorList[0] << endl
               << endl;
          cout << doctorList[1] << endl
               << endl;
          cout << doctorList[2] << endl
               << endl;
          cout << doctorList[3] << endl
               << endl;
          cout << doctorList[4] << endl
               << endl;
          cout << "\t\t\t\t\tSelect a doctor for Appointment: (1,2,3,4 or 5) ";
          cin >> doc;

          switch (doc)
          {
          case 1:
               system("cls");
               // array index starts with  0
               cout << doctorList[0] << endl;
               break;
          case 2:
               system("cls");
               cout << doctorList[1] << endl;
               break;
          case 3:
               system("cls");
               cout << doctorList[2] << endl;
               break;
          case 4:
               system("cls");
               cout << doctorList[3] << endl;
               break;
          case 5:
               system("cls");
               cout << doctorList[4] << endl;
               break;
          default:
               cout << "\t\t\t\t\t\tIncorrect option Try Again!" << endl;
          }
     }
};

class selection : public booking
{
public:
     void one()
     {
          cout << "\t\t\tOkay Thank You, We calling you for confirmed Appoint after sometimes!" << endl;
          cout << endl;
     }
};

class hospital
{
public:
     void hospital_details()
     {
          cout << "\t\t\t\t\t\tHospital Details" << endl;
          cout << "\t\t\t\t\t\t_____________________________" << endl
               << endl;
          cout << "\t\t\tHospital is a place where the sick and the injured are taken for treatment." << endl;
          cout << "\t\t\tThe doctors and nurses are readily available there for admitting and attending" << endl;
          cout << "\t\t\ton their patients. The dedicated teams of doctors and nurses delivers the message" << endl;
          cout << "\t\t\tof hope to their patients in the hospitals. All over the world, hospitals are built" << endl;
          cout << "\t\t\tto treat and cure thousands of the sick patients. As these hospitals, there are very" << endl;
          cout << "\t\t\ttwell-equipped facilities and expert doctors. These hospitals are considered the best" << endl;
          cout << "\t\t\tplaces for effective treatment.The doctors and nurses do their work with a dedication" << endl;
          cout << "\t\t\tand maintains the pleasant atmosphere of the hospital so that the patients feel" << endl;
          cout << "\t\t\tcomfortable and better" << endl
               << endl;
     }
};

// Adding new function to render main menu
int renderMainMenu()
{
     int answer;
     system("cls");
     cout << "\t\t\t\t\t\tHospital Management System" << endl;
     cout << "\t\t\t\t\t\t_____________________________" << endl
          << endl;
     cout << "\t\t\t\t\t\t1. Booking" << endl
          << endl;
     cout << "\t\t\t\t\t\t2. Doctor List & Appoint" << endl
          << endl;
     cout << "\t\t\t\t\t\t3. Hospital Details" << endl
          << endl;
     cout << "\t\t\t\t\t\t4. Exit" << endl
          << endl;
     cout << "\n\t\t\t\t\tSelect An Option from here 1/2/3/4: ";
     cin >> answer;
     return answer;
}

int main()
{
     int renderMenuAnswer = renderMainMenu();

     // Object initialization
     booking book;
     list lis;
     selection select;
     hospital hospital;

     switch (renderMenuAnswer)
     {
     case 1:
          book.patient_appoint();
          break;
     case 2:
          lis.doctor_list();
          book.patient_appoint();
          select.one();
          break;

     case 3:
          hospital.hospital_details();
          break;
     }

     // int x;
     // cout << "\n\t\t\t\t\tSelect An Option Again: yes or no => ";
     // if (x == 'n' || x == 'N')
     // {
     //      exit(0);
     // }
     // else
     // {
     //      int renderMenuAnswer = renderMainMenu();
     // }
     return 0;
}