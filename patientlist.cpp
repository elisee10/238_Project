#include "patientlist.h"

void Patientlist::appendNode(Patient *add){
    ListNode * currentNode = head;
    while(currentNode ->  next != nullptr){
        currentNode = currentNode -> next;

    }
    currentNode -> next = new ListNode;
    currentNode -> next -> patient = add;
    numPatients += 1;
// going through list and when it gets to end and see nothing it will add new patient in that spot 
}

void Patientlist::displayList(){
    ListNode * currentNode = head -> next;
    int patientnumber = 1;
    while(currentNode != nullptr){
        Patient * currentpatient = currentNode -> patient;
        cout << patientnumber << ". " << currentpatient -> getName() << endl;
        cout<< "Symptoms: " << currentpatient -> getSymptoms() << endl;
        cout<< "Pain level: " << currentpatient -> getPain_level() << endl;
        cout << "Patient arrival time: " << currentpatient -> getArrival_time() << endl;
        cout << endl;
        patientnumber += 1;
        currentNode = currentNode->next;
        // print every patient in list w info of name arival time symptoms and pain level
    }
}

void Patientlist:: sortList(){
    bool sorting = true;
    ListNode * currentNode = head;
    ListNode * nextNode =  head -> next;
    while(sorting){
        sorting = false;
        currentNode = head;
        nextNode =  head -> next;
        while(nextNode != nullptr && nextNode->next != nullptr){
            ListNode * afternode = nextNode -> next;
            if(nextNode -> patient -> getPain_level() < afternode -> patient -> getPain_level()){
                ListNode * tempnode = afternode -> next;
                currentNode -> next = afternode;
                afternode -> next = nextNode;
                nextNode -> next = tempnode;
                sorting = true;
            }
            currentNode = currentNode -> next;
            nextNode = currentNode -> next;
        }
        // staritng from head node will go through entire list and will swap items and go through list and go back to top until eveything is sort and it will break loop if false
    }
}

Patient * Patientlist:: toppatient(){
    ListNode * currentNode = head;
    ListNode * nextNode = currentNode -> next;
    if(nextNode != nullptr){
        ListNode * afternode = nextNode -> next;
        currentNode -> next = afternode;
        nextNode -> next = nullptr;
        numPatients -= 1;
        return nextNode -> patient;

    }
    return nullptr;
}