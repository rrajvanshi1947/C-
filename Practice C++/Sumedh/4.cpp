/*4.-Write a recursive function that reverses a linked list. State the time and memory
complexity of your solution. Your function must return the head of the reversed list and
the list must of course be NULL terminated. (10 points)
Struct node { int info; struct node * next; };
Typdef struct node node_t;
Node_t * reverse_linked_list( node_t * head) {*/


node* reverse(node* head){
	node* p = head;
	if(p->next == NULL){
	head = p;
	return head;
	}
	reverse(p->next);
	node* p1 = p->next;
	p1->next = p;
	p->next = NULL;
	return head;
}
