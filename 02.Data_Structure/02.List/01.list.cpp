#include <iostream>

int main(void) {
    std::cout << "연결 리스트 구현" << std::endl;   
    return 0;
}

struct linked_list_node {
    int data;
    struct linked_list_node *link;
};

// void addNode(linkedList_h)