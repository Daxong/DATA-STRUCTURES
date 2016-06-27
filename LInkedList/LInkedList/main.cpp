//
//  main.cpp
//  LInkedList
//
//  Created by ilove on 6/27/16.
//  Copyright © 2016 ilove. All rights reserved.
//

#include <iostream>
using namespace std;

struct List
{
    int num;
    List *next;
};

//在下一行建立头指针
List *head;//建立头指针

List *Create()
{
    //从下一行开始构造单链表
    List *p = NULL;//指向待插入的节点
    List *q = NULL;//q用于在其后插入节点
    head = NULL;
    for( int i=0;i<3;i++){
        p=new List;//为p节点分配空间
        cin >> p->num;//将用户输入的内容赋给p结点的结构成员num
        if( head == NULL ){
            head = p;//如果头结点为空 则将p节点赋给头指针  让头指针指向节点p
        }else{
            q->next = p;//p不是头结点，把p节点插入到q节点的后面 将p赋给q节点的结构成员next
        }
        q=p;//指针后移一位
    }
    if(head != NULL){
        q->next=NULL;
    }
    return head;
}

void displayList(List *head)
{
    while ( head != NULL ) {
        cout << head->num << endl;
        head = head->next;
    }
}

int main() {
    Create();
    displayList(head);
    return 0;
}