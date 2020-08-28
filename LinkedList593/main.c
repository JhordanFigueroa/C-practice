#include "customer.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    
    //allocate memory for 1st Customer
    // customer* my_list = malloc(sizeof(customer)); 
    //     my_list->id = 1;
    //     my_list->name = malloc (strlen("Tom") + 1); 
    //     strcpy (my_list->name, "Tom");
    //     my_list->next = NULL;
    
    //create the head node pointer
    customer* my_list = NULL;

    //Add second customer using helper function
    
    my_list = add_customer (my_list, 1, "Tom"); 

    add_customer(my_list, 2, "Bob"); 

    //search for customer 2
    customer* a_customer = NULL; 
    a_customer = find_customer_by_ID(my_list, 2); 

    //print out customer details
    if (a_customer != NULL) {
        printf("Customer ID=%d, Name=%s\n", a_customer->id, a_customer->name); 
    }

    free(my_list);
    return 0;
}
