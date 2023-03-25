typedef int Item;
struct node {
	Item item; node* next;
    node(int x, node* t) { item = x; next = t; }
    node() { item = 0; next = 0; }
};
typedef node* link;
typedef link Node;

link reverse(link x);
void construct(int);
Node newNode(int);
void deleteNode(Node);
void insert(Node, Node);
Node remove(Node);
Node next(Node);
Item item(Node);
