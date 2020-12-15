#include "patient.h"

void Patient::setName(string n){
    name = n;
}

void Patient::setSymptoms(string s){
    symptoms = s;
}

void Patient::setPain_level(int pl){
    pain_level = pl;
}

void Patient::setArrival_time(int at){
    arrival_time = at;
}

string Patient::getName(){
    return name;
}

string Patient::getSymptoms(){
    return symptoms;
}

int Patient::getPain_level(){
    return pain_level;
}

int Patient::getArrival_time(){
    return arrival_time;
}



void Conflicts::setType_of_conflict(string tc){
    type_of_conflict = tc;
}

void Conflicts::setSymptoms(string s){
    symptoms = s;
}

void Conflicts::setSolution(string sol){
    solution = sol;
}


string Conflicts::getType_of_conflict(){
    return type_of_conflict;
}
string Conflicts::getSymptoms(){
    return symptoms;
}

string Conflicts::getSolution(){
    return solution;
}

bool Conflicts::compare(string s){
    if(symptoms == s)
        return true;
    else{
        return false;

}
// see what symptons a person has 
}



