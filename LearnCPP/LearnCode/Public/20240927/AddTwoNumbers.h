#pragma once
#include <iostream>

struct ListNode
{
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr)
    {
    }

    ListNode(int x) : val(x), next(nullptr)
    {
    }

    ListNode(int x, ListNode* next) : val(x), next(next)
    {
    }

};

inline void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp) {
        std::cout << temp->val << " -> ";
        temp = temp->next;
    }
    std::cout << "nullptr" << '\n';
}

class SolutionAddTwoNumbers
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* Head = new ListNode(-1);
        ListNode* Next = Head;
        
        int i =0;

        while (l1 != nullptr || l2 != nullptr || i!=0)
        {
            if (l1 != nullptr)
            {
                i += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr)
            {
                i += l2->val;
                l2 = l2->next;
            }
            Next->next = new ListNode(i % 10);
            Next = Next->next;
            i /= 10;
            
        }
        return Head->next;
    }
};
