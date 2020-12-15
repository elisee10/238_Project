#pragma once
#include <iostream>
#include <string> 
using namespace std;

class Patient{
    public:
    string name;
    string symptoms;
    int pain_level;
    int arrival_time;  

    void setName(string);
    void setSymptoms(string);
    void setPain_level(int);
    void setArrival_time(int);

    string getName();
    string getSymptoms();
    int getPain_level();
    int getArrival_time();

};

class Conflicts{
    public:
    string type_of_conflict;
    string symptoms;
    string solution;

    void setType_of_conflict(string);
    void setSymptoms(string);
    void setSolution(string);

    string getType_of_conflict();
    string getSymptoms();
    string getSolution();

    bool compare(string s);
    


};