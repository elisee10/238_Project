#include "conditionlist.h"
#include "patientlist.h"



int main() {
    Conflictslist * type_of_conflict = new Conflictslist("info.txt");
    Conflicts * matchconflict;
    Patientlist * listofpatients = new Patientlist();
    Patient * patient;
    string answer;
    string patientname;
    string patientsymptoms;
    int patientpainlevel;
    string medical_history;

    cout<< "Are you registering as a new patient? Yes or No: ";
    cin >> answer;
    while(answer == "yes" || answer == "Yes"){
        cout<<"What is your name: ";
        cin>> patientname;
        cout<<"What symptoms are you having?(replace spaces with undrscores(_): ";
        cin>> patientsymptoms;
        cout<<"How much pain do you feel on an scale 1-10?: ";
        cin>> patientpainlevel;
        cout<<"State any past major medical procedures: ";
        cin>>medical_history;
        patient = new Patient;
        patient -> setName(patientname);
        patient -> setSymptoms(patientsymptoms);
        patient -> setPain_level(patientpainlevel);
        listofpatients -> appendNode(patient);
        cout<<"\n";
        cout<<"Are you registering another patient? Yes or No: ";
        cin>> answer;
    }

    cout<<"The current amout of patients is " << listofpatients -> numPatients << endl;
    listofpatients -> sortList();
    cout<<"Here is the current amount of patients waiting to be checked in which who will be seen from highest pain level to lowest pain level : " << endl;
    listofpatients -> displayList();
    while(listofpatients -> numPatients != 0){
        patient = listofpatients -> toppatient();
        cout<<"Well " << patient -> getName() << " it seems as though your symptoms is " << patient -> getSymptoms() << endl;
        matchconflict = type_of_conflict -> checkcond(patient -> getSymptoms());
        if(matchconflict != nullptr){
            cout<<"The solution to your symptoms is: " << matchconflict -> getSolution() << endl;
            cout<< endl;

        }
        else{
            cout<<"your symptoms doesn't match what we have in our records, please visit a different hospital" << endl;
            cout<< endl;
        }
    }
    
}