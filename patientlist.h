#pragma once
#include <iostream>
#include <string> 
#include "patient.h"

using namespace std;

class Patientlist{
    private:
        struct ListNode{
            
            Patient * patient = nullptr;
            struct ListNode *next = nullptr;
           
        };
       
        ListNode *head;
    public:    
        Patientlist()    
            {head = new ListNode;}  
            ~Patientlist();    
            int numPatients = 0;
            void appendNode(Patient *);        
            void displayList();
            void sortList();
            Patient * toppatient();
            

};

