/*
 * @Author: ykdsir
 * @Date: 2020-06-22 12:39:57
 * @LastEditTime: 2020-06-27 17:05:30
 * @LastEditors: ykdsir
 * @Description: 
 * @FilePath: /algorithms/DS/linked_list.cpp
 * @
 */ 


// 常见链表类
class Node {
public:
    int val;
    Node* next;
    Node* pre;
    Node(int val, Node *p = nullptr, Node *q = nullptr) {
        this -> val = val; 
        this -> next = p;
        this -> pre = q;
    }
};

class List {
public:
    Node* head, tail;
    List( ){
        head = nullptr;
        tail =  nullptr;
    }
}



/************************************************************************* 
* 数组模拟链表
*/
// head存储链表头，e[]存储节点的值，ne[]存储节点的next指针，idx表示当前用到了哪个节点
int head, e[N], ne[N], idx;

// 初始化
void init()
{
    head = -1;
    idx = 0;
}

// 在链表头插入一个数a
void insert(int a)
{
    e[idx] = a, ne[idx] = head, head = idx ++ ;
}

// 将头结点删除，需要保证头结点存在
void remove()
{
    head = ne[head];
}


/************************************************************************
* 双向链表
*/
// e[]表示节点的值，l[]表示节点的左指针，r[]表示节点的右指针，idx表示当前用到了哪个节点
int e[N], l[N], r[N], idx;

// 初始化
void init()
{
    //0是左端点，1是右端点
    r[0] = 1, l[1] = 0;
    idx = 2;
}

// 在节点a的右边插入一个数x
void insert(int a, int x)
{
    e[idx] = x;
    l[idx] = a, r[idx] = r[a];
    l[r[a]] = idx, r[a] = idx ++ ;
}

// 删除节点a
void remove(int a)
{
    l[r[a]] = l[a];
    r[l[a]] = r[a];
}