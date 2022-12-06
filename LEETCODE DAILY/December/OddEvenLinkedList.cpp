#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *oddEvenList(ListNode *head)
{

    ListNode *head2;
    ListNode *tail2;
    ListNode *head1;
    ListNode *tail1;

    if (!head)
        return head;

    if (head)
    {
        head1 = head;
        tail1 = head;
    }

    if (head->next)
    {
        head2 = head->next;
        tail2 = head2;
    }
    else
        return head;
    ListNode *ptr = head2->next;
    head1->next = NULL;
    head2->next = NULL;
    while (ptr)
    {
        tail1->next = ptr;
        ptr = ptr->next;
        tail1 = tail1->next;
        tail1->next = NULL;

        if (ptr)
        {
            tail2->next = ptr;
            ptr = ptr->next;
            tail2 = tail2->next;
            tail2->next = NULL;
        }
    }
    tail1->next = head2;
    return head1;
}
ListNode *oddEvenList(ListNode *head)
{

    if (!head)
        return nullptr;

    ListNode *odd = head;
    ListNode *even = odd->next;

    ListNode *evenHead = even;

    while (even && even->next)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;

    return head;
}
ListNode *oddEvenList(ListNode *head)
{
    if (!head || !head->next)
        return head;
    ListNode *oddHead = head;
    ListNode *evenHead = head->next;
    ListNode *odd = oddHead, *even = evenHead;

    while (odd->next && even->next)
    {
        odd->next = odd->next->next;
        odd = odd->next;
        even->next = even->next->next;
        even = even->next;
    }

    odd->next = evenHead;
    return oddHead;
}

int main()
{

    return 0;
}