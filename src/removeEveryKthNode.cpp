/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	if (head != NULL && K > 1){
		int count = 1;
		struct node* temp = head;
		//removeEveryKthNode(createList(12345678), 3), 124578)
		while (temp != NULL){
			count++;
			if (count == K){
				if (temp->next == NULL){
					return head;
				}
				else{
					temp->next = temp->next->next;
				}
				count = 1;
			}
			
			temp = temp->next;
		}
		return head;
	}
	return NULL;
}