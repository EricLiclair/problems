// This is template generated by CPCLI [https://github.com/ericliclair/cpcli]
// problem link [https://leetcode.com/problems/reverse-linked-list/]

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

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
    // iterative
    ListNode *_reverseList(ListNode *head)
    {
        ListNode *ptr = head;
        ListNode *prev = NULL;
        while (ptr)
        {
            ListNode *next = ptr->next;
            ptr->next = prev;
            prev = ptr;
            ptr = next;
        }
        head = prev;
        return head;
    }

    // recursive
    ListNode *_reverseRecurse(ListNode *node, ListNode *prev)
    {
        if (!node)
        {
            return prev;
        }

        ListNode *next = node->next;
        node->next = prev;
        return _reverseRecurse(next, node);
    }

    ListNode *reverseList(ListNode *head)
    {
        return _reverseRecurse(head, NULL);
    }
};

int main()
{
    cout << "Hey champ!";
    return 0;
}