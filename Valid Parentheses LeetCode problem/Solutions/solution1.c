typedef struct Node{
    char data;
    struct Node* next;
}Node;

Node* head = NULL;

// linked list
void addAtBegining(char x){
    if(head == NULL){
        Node* temp = (Node*) malloc(sizeof(Node));
        temp -> data = x;
        temp -> next = NULL;
        head = temp;
        return;
    }
    else{
        Node* temp = (Node*) malloc(sizeof(Node));
        temp -> data = x;
        temp -> next = head;
        head = temp;
    }
}

void getFromBegining(char* x){
    if(head == NULL) return;
    
    *x = head -> data;

    Node * temp = head;
    head = head -> next;

    free(temp);
}

void deleteStack(void){
    Node* temp;
    while(head){
        temp = head;
        head = head -> next;
        free(temp);
    }
}

bool isStackFree(void){
    return !(bool)head;
}

bool isValid(char* s) {
    while (*s) {
        if (*s == '(' || *s == '[' || *s == '{') {
            addAtBegining(*s);
        } else {
            if(isStackFree()) {return false;}
            char c;
            getFromBegining(&c);
            if(c == '(' && *s != ')' || c == '[' && *s != ']' || c == '{' && *s != '}'){
                deleteStack();
                return false;
            }
        }
        s++;
    }

    if(!isStackFree()){
        deleteStack();
        return false;
    } 

    deleteStack();
    return true;
}