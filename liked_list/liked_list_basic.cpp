# include <iostream>
using namespace std;
// tạo một cấu trúc dữ liệu (struct) Node;
struct Node 
{
    int values;
    Node *next; //con trỏ dùng để trỏ đến phần tử tiếp theo
};

//*head là con trỏ trỏ đến danh sách đầu tiên
void init(Node *head)
{
    head = NULL;
}

Node* createNode(int x)
{
    Node *p= new Node; //tạo ra 1 con trỏ p và cấp phát vùng nhớ là Node
    p->values=x;
    return p;
}
//truyền một node có giá trị là x và danh sách
void addFirst(Node *&head,int x)
{
    Node *p = createNode(x);
    p->next=head;
    head = p;
}
//thêm con trỏ vào cuối danh sách
void addlast(Node *&head,int x)
{
    Node *p= createNode(x);
    //xác định con trỏ cuối cùng (last)
    if(head==NULL) //kiểm tra danh sách rỗng
    { 
        head=p;
    }
    else{
    Node *last= head;
    while (last->next !=NULL)
        last=last->next;
    //chèn con trỏ vào cuối
    last->next=p;
    }
}
//chèn 1 một con trỏ
void addAfter(Node*head,int v,int x) //v là Node mà mình muốn chuyền vào phía sau
{
    Node*p = createNode(x);
    //tìm một Node có giá trị là v
    Node *q=head;
    while(q !=NULL && q->values!=v)
        q=q->next; //q là Node đại diện cho v trong danh sách
    if(q!=NULL) //trong phần tử có giá trị v
    {
        p->next=q->next;
        q->next=p; 
    }
}

void output(Node *head)
{
    Node *p=head;
    while (p !=NULL)
    {
        cout<<p->values<<"\t";
        p=p->next;
    }
    
}

int main()
{
    Node *head;
    init(head);

    addlast(head,30);
    addFirst(head,10);
    addFirst(head,15);
    addFirst(head,20);
    addlast(head,5);

    addAfter(head,10,100);

    output(head);

    return 0;
}