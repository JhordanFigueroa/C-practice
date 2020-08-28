//Stack: any local variables within a function are allocated on the stack 
//Global and Heap: variables continue to exist past the exiting of a function. Need to allocate appropriate number of bits in the memory. Can be more but cannot be less 

#define MAXSTRLEN 100

char greeting[MAXSTRLEN]; 

char *string_function_dynamic(char *astring) {
    char *s;
    s = malloc(MAXSTRLEN);
    s[0] = 0; //need this to initialize the buffer created by malloc. Need to have a null terminating string before doing any concatination
    strcat(s, "hello ");
    strcat(s, astring);
    strcat(s, "\n"); 

    return s;
}

char *string_function(char astring[]) {
    strcat(greeting, "hello ");
    strcat(greeting, astring); 
    strcat(greeting, "\n");
    return greeting; 
}

int main(int argc, char **argv) {
    printf(string_function("Jhordan"));
    printf(string_function_dynamic("John")); 
    return 0;
}