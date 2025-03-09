class MyLinkedList {
public:
    struct LinkedNode {
        int val;
        LinkedNode *next;
        LinkedNode(int val) : val(val), next(nullptr){}
    };

    MyLinkedList() {
        _dummyHead = new LinkedNode(0);
        _size = 0;
    }

    int get(int index) {
        if (index > (_size - 1) || index < 0) {
            return -1;
        }
        LinkedNode* cur = _dummyHead->next;
        while(index--){ 
            cur = cur->next;
        }
        return cur->val;
    }
    
    void addAtHead(int val) {
        LinkedNode *n = new LinkedNode(val);
        n->next = _dummyHead->next;
        _dummyHead->next = n;
        _size++;
        return;
    }
    
    void addAtTail(int val) {
        LinkedNode *n = new LinkedNode(val);
        LinkedNode *cur = _dummyHead;
        while(cur->next != nullptr){
            cur = cur->next;
        }
        cur->next = n;
        _size++;
        return;
    }
    
    void addAtIndex(int index, int val) {
        if(index > _size) return;
        if(index < 0) index = 0;
        LinkedNode *n = new LinkedNode(val);
        LinkedNode *cur = _dummyHead;
        while(index--){
            cur = cur->next;
        }
        n->next = cur->next;
        cur->next = n;
        _size++;
        return;
    }
    
    void deleteAtIndex(int index) {
        if(index < 0 || index >= _size) return;
        LinkedNode *cur = _dummyHead;
        while(index--){
            cur = cur->next;
        }
        LinkedNode *temp = cur->next;
        cur->next = cur->next->next;
        _size--;
        delete(temp);
        temp = nullptr;
        return;
    }
private:
    LinkedNode* _dummyHead;
    int _size;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
