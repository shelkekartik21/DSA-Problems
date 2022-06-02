ListNode *reverseList(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *nxtptr;

    while (curr != NULL)
    {
        nxtptr = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nxtptr;
    }

    return prev;
}