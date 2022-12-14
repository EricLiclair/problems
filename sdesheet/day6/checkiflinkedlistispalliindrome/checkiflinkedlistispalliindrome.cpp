// This is template generated by CPCLI [https://github.com/ericliclair/cpcli]

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *_rev(ListNode *current, ListNode *prev)
    {
        if (!current)
            return prev;

        ListNode *next = current->next;
        current->next = prev;
        return _rev(next, current);
    }

    void reverse(ListNode *start)
    {
        start->next = _rev(start->next, NULL);
    }

    bool isPalindrome(ListNode *head)
    {
        // find middle ->  (n - 1) / 2
        // reverse after middle
        // check equality from middle and start

        ListNode *fast = head;
        ListNode *slow = head;

        while (fast->next)
        {
            fast = fast->next;
            if (fast->next)
            {
                fast = fast->next;
                slow = slow->next;
            }
        }

        // slow is the middle - 1
        ListNode *middle = slow;

        // reverse after middle
        reverse(middle);

        middle = slow->next;
        fast = head;
        while (middle)
        {
            if (fast->val != middle->val)
                return false;
            fast = fast->next;
            middle = middle->next;
        }

        return true;
    }
};

int main()
{
    cout << "Hey champ!";
    return 0;
}