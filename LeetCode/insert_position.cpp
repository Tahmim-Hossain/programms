Node* insertHead(Node* head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    return newNode;
}

Node* insert(Node* head, int n, int pos, int val) {
    if (pos == 0) {
        return insertHead(head, val);
    }
    
    Node* newNode = new Node(val);
    Node* temp = head;
    
    for (int i = 0; i < pos - 1 && temp != nullptr; ++i) {
        temp = temp->next;
    }
    
    if (temp != nullptr) {
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
    return head;
}
