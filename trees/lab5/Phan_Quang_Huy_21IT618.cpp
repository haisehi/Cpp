#include <bits/stdc++.h>
using namespace std;
#define max 1000
typedef struct
{
    char data;
} element;
bool DD[max];
int value[max];
typedef struct stack1 *stack_pointer;

struct stack1
{
    element item;
    stack_pointer link;
};
typedef struct stack2 *stack_pointer2;
struct stack2
{
    double num;
    stack_pointer2 link;
};
typedef struct node *pnode;
struct node
{
    element num; // dữ liệu chứa trong 1 cái node
    pnode next;  // con trỏ liên kết giữ các cái node vs nhau
};
typedef struct Tree_node *Tnode;
struct Tree_node{
    char data;
    Tnode Left;
    Tnode Right;
};
pnode createNode(element value)
{
    pnode temp;
    temp = new node;
    temp->next = NULL;
    temp->num = value;
    return temp;
}
pnode addhead(pnode head, element value)
{
    if (head == NULL)
    {
        head = createNode(value);
        return head;
    }
    pnode temp = createNode(value);
    temp->next = head;
    head = temp;
    return head;
}

pnode insertlast(pnode head, element value)
{
    if (head == NULL)
    {
        head = createNode(value);
        return head;
    }
    pnode temp, p;
    p = head;
    temp = createNode(value);
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = temp;
    return head;
}
void push(stack_pointer *top, element item)
{
    stack_pointer temp = new stack1;
    temp->item = item;
    temp->link = *top;
    *top = temp;
}
element pop(stack_pointer *top)
{
    stack_pointer temp = *top;
    element item;
    item = temp->item;
    *top = temp->link;
    delete (temp);
    return item;
}
void push2(stack_pointer2 *top, double item)
{
    stack_pointer2 temp = new stack2;
    temp->num = item;
    temp->link = *top;
    *top = temp;
}
double pop2(stack_pointer2 *top)
{
    stack_pointer2 temp = *top;
    double item;
    item = temp->num;
    *top = temp->link;
    delete (temp);
    return item;
}
int check2(char ch)
{
    return value[ch];
}
bool is_Empty(stack_pointer top)
{
    if (top == NULL)
    {
        return true;
    }
    return false;
}
int check(char ch)
{
    if(ch=='^'){
        return 3;
    }
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    if (ch == '*' || ch == '/')
    {
        return 2;
    }
    if (ch == '(' || ch == ')')
        return 0;
}

pnode HT(string s)
{
    stack_pointer top = NULL;
    pnode head = NULL;
    element item;

    for (int i = 0; i < s.length(); i++)
    {
        item.data = s[i];
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            head = insertlast(head, item);
        }
        else if (s[i] == '(')
        {
            push(&top, item);
            // cout<<pop(&top).data;
        }
        else if (s[i] == ')')
        {
            while (true)
            {
                item = pop(&top);
                if (item.data == '(')
                {
                    break;
                }
                else
                {
                    head = insertlast(head, item);
                }
            }
        }
        else
        {
            if (is_Empty(top) == true)
            {
                item.data = s[i];
                push(&top, item);
            }
            else if (check(top->item.data) >= check(s[i]))
            {
                item = pop(&top);
                head = insertlast(head, item);
                item.data = s[i];
                push(&top, item);
            }
            else
            {

                push(&top, item);
            }
        }
    }
    while (top != NULL)
    {
        head = insertlast(head, pop(&top));
    }
    return head;
}
pnode TT(string s)
{
    string p = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        p = p + s[i];
    }
    for (int i = 0; i < p.length(); i++)
    {
        if (p[i] == '(')
        {
            p[i] = ')';
        }
        else if (p[i] == ')')
        {
            p[i] = '(';
        }
    }
    s = p;
    pnode head = HT(s);
    stack_pointer topTT = NULL;
    while (head != NULL)
    {
        push(&topTT, head->num);
        head = head->next;
    }
    head = NULL;
    while (is_Empty(topTT) == false)
    {
        head = insertlast(head, pop(&topTT));
    }
    return head;
}


string display(pnode head)
{
    string s = "";
    pnode p = head;
    while (p != NULL)
    {
        s=s+ p->num.data;
        p = p->next;
    }
    return s;
}
Tnode Leaf(char ch){
    Tnode p = new Tree_node;
    p->Left = NULL;
    p->Right = NULL;
    p->data = ch;
    return p;
}
string str;
int index1 = 0;
Tnode createTree(){
    Tnode Tr = Leaf(str[index1]);
    char ch = str[index1];
    index1++;
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
        //cout << index << endl;
       Tr->Left = createTree();
       Tr->Right = createTree();
    }
    return Tr;
}
bool check(Tnode p) {
    if (p->Left == NULL)
        return false;
    return true;
}
void inorder(Tnode p){
    if(p!=NULL){
        if (check(p)){
            cout << "(";
            inorder(p->Left);
           
        }else
            inorder(p->Left);
        cout<<(p->data)<<"";
        if (check(p)){
           
            inorder(p->Right);
            cout << ")";
        }else
            inorder(p->Right);
    }
}
void preorder(Tnode p){
    if(p!=NULL){
        cout<<(p->data)<<" ";
        preorder(p->Left);
        
        preorder(p->Right);
    }
}
void postorder(Tnode p){
    if(p!=NULL){
        
        postorder(p->Left);
        postorder(p->Right);
        cout<<(p->data)<<" ";
    }
}


int main()
{
    pnode head = NULL;
    string s;
    cout<<"Moi nhap bieu thuc ";
    getline(cin, s);
    head = TT(s);
    str = display(head);
    
    //cout<<str<<endl;

    Tnode t = createTree();
    cout<<"chuoi hau to ";
    postorder(t);
    cout<<endl;
    cout<<"Chuoi trung to ";
    inorder(t);
    cout<<endl;
    cout<<"chuoi tien to ";
    preorder(t);
    cout<<endl;

}