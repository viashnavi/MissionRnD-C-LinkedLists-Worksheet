/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	int arr[3] = {0};
	struct node* temp = head;
	while (temp != NULL){
		arr[temp->data]++;
		temp = temp->next;
	}
	temp = head;
	while (arr[0]>0){
		temp->data = 0;
		temp = temp->next;
		arr[0]--;
	}
	while (arr[1]>0){
		temp->data = 1;
		temp = temp->next;
		arr[1]--;
	}
	while (arr[2]>0){
		temp->data = 2;
		temp = temp->next;
		arr[2]--;
	}
}