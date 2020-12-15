#pragma once
#include <iostream>
#include <string> 
#include "patient.h"
using namespace std;

class Conflictslist{
    private:
        struct ListNode{
            
            Conflicts * conflicts = nullptr;
            struct ListNode *next = nullptr;
           
        };
        int numConditions = 0;
        ListNode *head = new ListNode;
        void appendNode(Conflicts *); 
    public:    
        Conflictslist(string f);    
            ~Conflictslist();         
            Conflicts * checkcond(string symptoms);
    

};