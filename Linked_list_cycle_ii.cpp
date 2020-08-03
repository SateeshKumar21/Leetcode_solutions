class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        unordered_set<ListNode*> node_set;
        int y = 0;
        ListNode* ptr = head;
        
        while(ptr != NULL){
            
            if (node_set.find(ptr) == node_set.end()){
                
                node_set.insert(ptr);
                
            }
            else
                return ptr;
            ptr = ptr -> next;
        }
        
        return NULL;
        
    }
};