typedef struct cust_struct {
    int id;
    char* name;
    struct cust_struct *next;
} customer;

customer* add_customer (customer* list, int id, char* name);
    //int add_customer2 (customer** list, int id, char* name); //Pointer to Pointer - internally updates the "head" pointer

customer* find_customer_by_ID (customer* list, int id); 