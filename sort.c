
#include"push_swap.h"

void sort_two_element(t_deq *deq_a)
{
    int *lst;

    lst = deq_a->content;
    if (lst > (lst + 1))
        sa(deq_a);
    return ;
}

void sort_three_element(t_deq *deq_a)
{
    int *lst;

    lst = deq_a->content;
    if (lst > (lst + 1) && (lst + 1) < (lst + 2) && (lst + 2) < lst)
        sa(deq_a);
    else if (lst < (lst + 1) && (lst + 1) < (lst + 2) && (lst + 2) > lst)
    {
        sa(deq_a);
        rra(deq_a);
    }
    else if (lst > (lst + 1) && (lst + 1) < (lst + 2) && (lst + 2) > lst)
        ra(deq_a);
    else if (lst < (lst + 1) && (lst + 1) > (lst + 2) && (lst + 2) < lst)
    {
        sa(deq_a);
        ra(deq_a);
    }
    else if (lst < (lst + 1) && (lst + 1) > (lst + 2) && (lst + 2) > lst)
        rra(deq_a);
}


void    sort(t_deq *deq_a, t_deq *deq b)
{
    if (deq_a->size == 1)
        return ;
    else if (deq_a->size == 2)
        sort_two_element(deq_a);
    else if (deq_a->size == 3)
        sort_three_element(deq_a);
    else
        greedy(deq_a, deq_b);
}


// sorting에서 명령어를 실행하는 부분, 꼭, 꼭 만들어야 한다.
// pa 나 pb 그런식으로요.

void get_min_rotation(int *a, int *b)
{
    int a_loc;
    int b_loc;
    t_deq *deq;
    int num;

    i = 0;
    stack_b = b_top;


    while(idx < deq->size_b)
    {
        num = deq_b->content;
        a_loc = set_a_loc(num, t_deq);
        if (idx >= (deq_b + 1) / 2)
            b_loc = (t_deq->b_size - idx) * -1;
        else 
            b_loc = idx;
        if (idx == 0 || ft_get_bigger(*a, *b, a_loc, b_loc)
        {
            *a = a_loc;
            *b = b_loc;
        }
        deq_b = deq_b->next;
        idx++;
    }






}


