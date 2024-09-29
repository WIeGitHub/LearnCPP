#include "Public/20240927/AddTwoNumbers.h"
#include "Public/20240927/TwoSum.h"

int main(int argc, char* argv[])
{
    SolutionTwoSum solution_two_sum;
    std::vector<int> numbs = {1, 2, 3};
    
    std::vector<int> result = solution_two_sum.twoSum(numbs, 6);
    
    if (!result.empty()) {
        for (auto item : result)
        {
            std::cout << item << "\n";
        }
    } else {
        std::cout << "No solution found.\n";
    }

    SolutionAddTwoNumbers solution_add_two_numbers;
    
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);


    printList(solution_add_two_numbers.addTwoNumbers(l1,l2));
    
    
    return 0;
}
