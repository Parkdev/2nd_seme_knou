#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int data[10];
    struct ListNode* link;
} listNode;

typedef struct {
    listNode* head;
}  linkedList_h;

linkedList_h* createLinkedList_h(void) {
    linkedList_h* H;
    H = (linkedList_h*)malloc(sizeof(linkedList_h));
    H -> head = NULL;
    return H;
}

void addNode(linkedList_h* H, int x) { // 리스트 마지막 노드에 삽입 연산
    listNode* NewNode;
    listNode* LastNode;
    NewNode = (listNode*)malloc(sizeof(listNode));
    NewNode -> data = x;
    NewNode -> link = NULL;
    if( H -> head == NULL) { // 현재 리스트가 공백인 경우
        H -> head = NewNode;
        return;
    }
    LastNode = H -> head;
    while( LastNode -> link != NULL) LastNode = LastNode -> link;
    LastNode -> link = NewNode;
}

void deleteNode(linkedList_h* H) { //리스트의 마지막 노드 삭제 연산
    listNode* prevNode;
    listNode* delNode;
    if (H -> head == NULL) return; //공백 리스트인 경우, 삭제 연산 중단
    if (H -> head -> link == NULL) { // 리스트에 노드가 한 개인 경우
        free(H -> head);    // 첫번째 노드의 메모리를 해제
        H -> head = NULL;
        return;
    }
    else {
        prevNode = H -> head;
        delNode = H -> head -> link;
        while(delNode -> link != NULL) {
            prevNode = delNode;
            delNode = delNode -> link;
        }
        free(delNode);
        prevNode -> link = NULL;
    }

}

void deleteitNode(linkedList_h* H, listNode* prevNode, listNode* delNode) {
    prevNode -> link = delNode -> link;
    free(delNode);
    return;
}

void additNode(linkedList_h* H, listNode* prevNode, int itdata) {
    // 리스트 마지막 노드에 삽입 연산하며, itdata 값은 150이라고 가정함
    listNode* NewNode;
    NewNode = (listNode*)malloc(sizeof(listNode));
    NewNode -> data = itdata;
    NewNode -> link = NULL;

    NewNode -> link = prevNode -> link;
    prevNode -> link = NewNode;
    return;
}

void searchNode(linkedList_h* H, int itdata) {
    // 연결 리스트에서 특정 노드를 검색하여 반환하고자 하는 연산, itdata=200
    listNode* tempNode;
    tempNode = H -> head;

    while(tempNode -> data != itdata) {
        tempNode = tempNode -> link;
    }
    printf("Search successful!! \n");
}

void main() {
    addNode(createLinkedList_h, 100);
    printf("Finish");
    return 0;
}
