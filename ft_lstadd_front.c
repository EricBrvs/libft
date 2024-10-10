#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(lst && new)
    {
        new->next = *lst;
        *lst = new;
    }
}

void print_list(t_list *lst)
{
    while (lst != NULL)
    {
        printf("Content : %d\n", *(int *)(lst->content));
        lst = lst->next;
    }
}

int main() {
    t_list *head = NULL;
    int x = 42;
    int y = 21;

    t_list *node1 = ft_lstnew(&x);
    t_list *node2 = ft_lstnew(&y);

    ft_lstadd_front(&head, node1);
    ft_lstadd_front(&head, node1);

    print_list(head);
    return (0);
}