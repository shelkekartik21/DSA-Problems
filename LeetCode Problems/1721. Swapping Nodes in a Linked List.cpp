ListNode *swapNodes(ListNode *head, int k)
{
    ListNode *tmp1 = head;
    ListNode *tmp2 = head;
    ListNode *tmp = head;
    int count = 0;

    while (tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }

    int r = count - k + 1;
    while (k > 1)
    {
        tmp1 = tmp1->next;
        k--;
    }

    while (r > 1)
    {
        tmp2 = tmp2->next;
        r--;
    }

    int tp = tmp1->val;
    tmp1->val = tmp2->val;
    tmp2->val = tp;

    return head;
}