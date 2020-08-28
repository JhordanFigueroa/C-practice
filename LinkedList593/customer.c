#include "customer.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

customer* add_customer (customer* list, int id, char* name) {
    //allocate memory for a customer

    customer* new_cust = malloc(sizeof(customer));
    if (new_cust == NULL) {
        printf("new_cust = NULL");
    }

    new_cust->id = id;
    new_cust->name = malloc (strlen(name) + 1);
    strcpy(new_cust->name, name);
    new_cust->next = NULL;

    //if list was empty, return new customer as the head!
    if (list == NULL) {
        return (new_cust);
    }

    //otherwise, tranverse list to the end, glue on new cust 
    customer* head = list; //save start of list first, this is a temp argument, won't affect the true head of the list 
    //transverse to the end
    while (list->next != NULL) {
        list = list->next;
    }

    list->next = new_cust; 
    return (head);
}

/* args: pointer to head of linked list + customer ID to find
    returns: pointer to matching customer on heap if found (else NULL)
*/
customer* find_customer_by_ID (customer* list, int id) { //passing a copy of the address of the list and not the actual one 
    //traverse the list until we find first node with matching ID

    while ((list != NULL) && (list->id != id)) {
        list = list->next; //advance to the next node to check the id
    }
    return(list);
}

/*args: pointer to head of linked list + customer ID to delete
returns: pointer to head of list

customer* delete_customer_by_ID (customer* list, int id) {

}
*/