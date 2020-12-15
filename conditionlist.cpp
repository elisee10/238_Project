#include <fstream>
#include "conditionlist.h"


Conflictslist::Conflictslist(string f){
    fstream datafile;
    datafile.open(f);
    string line;
    string symp;
    string solution;
    Conflicts * c;
    while(getline(datafile, line )){
        int delimintor = line.find(":");
        symp = line.substr(0, delimintor);
        int size = line.size();
        solution = line.substr(delimintor +1, size);
        c = new Conflicts();
        c -> setType_of_conflict(symp);
        c -> setSymptoms(symp);
        c -> setSolution(solution);
        appendNode(c);

    }
    datafile.close();

    
}

void Conflictslist::appendNode(Conflicts *add){
    ListNode * currentNode = head;
    while(currentNode ->  next != nullptr){
        currentNode = currentNode -> next;

    }
    currentNode -> next = new ListNode;
    currentNode -> next -> conflicts = add;
    numConditions += 1;
// going through list and when it gets to end and see nothing it will add new patient in that spot 
}

Conflicts * Conflictslist::checkcond(string symptoms){
    ListNode * currentNode = head -> next;
    while(currentNode != nullptr){
        if(currentNode -> conflicts -> getSymptoms() == symptoms){
            return currentNode -> conflicts;
            

        }
        currentNode = currentNode -> next;
    }
    return nullptr;
}