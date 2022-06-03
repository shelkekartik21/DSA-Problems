ListNode *reverseKGroup(ListNode *head, int k)
{
    ListNode *temp = head;
    int i = 0;
    while (i < k)
    {
        if (temp == NULL)
            return head;
        temp = temp->next;
        i++;
    }

    ListNode *curr = head;
    ListNode *prev = NULL;
    ListNode *nxtptr;

    int j = 0;
    while (j < k)
    {
        nxtptr = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nxtptr;
        j++;
    }

    head->next = reverseKGroup(curr, k);
    return prev;
}