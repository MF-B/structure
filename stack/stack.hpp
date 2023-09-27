#include <iostream>
using namespace std;

//以下为链栈的实现
//栈节点定义
class snode{
    friend class stack;
    int data;
    snode* next;
};
//栈定义
class stack{
    snode* head;
    int size;
public:
    //初始化
    stack(){
        head = new snode();
        size = 0;
    }

    // //push(尾插)
    // void push(int x){
    //     snode* s = new snode();
    //     s->data = x;
    //     s->next = NULL;
    //     snode* p = head;
    //     while(p->next!=NULL){
    //         p = p->next;
    //     }
    //     p->next = s;
    //     size++;
    // }

    // //尾插删除
    // void pop(int &x){
    //     snode* p1,*p2 = head;
    //     //p1指向最后一个节点的前一个结点
    //     while(p1->next->next!=NULL){
    //         p1=p1->next;
    //     }
    //     //p2指向最后一个节点
    //     p2 = p1->next;
    //     x = p2->data;
    //     p1->next = NULL;
    //     delete p2;
    // }


    //头插
    void headinsert(int x){
        snode* s = new snode();
        s->data = x;
        s->next = head->next;
        head->next = s;
    }

    //头插删除
    void pop(int &x){
        //s为要删除的头节点后的第一个节点
        snode* s = head->next;
        head->next = s->next;
        x = s->data;
        delete s;
    }

    //获取栈顶元素
    int get_top(){
        return head->next->data;
    }
    //判断栈是否为空
    bool is_empty(){
        if(head->next == NULL){
            return true;
        }
        return false;
    }
    //判断栈是否满
    //链栈应该没有这种情况，故不考虑
    
    //获取目前栈内元素个数
    int get_size(){
        return size;
    }
};
