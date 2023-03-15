#include <iostream>
#include <vector>
using namespace std;

typedef int Item;
struct node
{
    Item item; node* l, * r;
    node(int newItem)
    {
        item = newItem; l = 0; r = 0;
    };
};
typedef node* link;
class BTree
{
private:
    link root;

public:
    BTree()
        : root(0)
    {
    }
    BTree(vector<Item>& items)
    {
        root = build(items, 0, items.size() - 1);
    }
    ~BTree()
    {
        destroy(root);
    }

private:
    link build(vector<Item>& items, int l, int r)
    {
        if (l > r)
            return NULL;
        int m = (l + r) / 2;
        link x = new node(items[m]);

        x->l = build(items, l, m - 1);
        x->r = build(items, m + 1, r);

        return x;
    }
    void traverse(link h, void visit(link))
    {
        if (h == 0) return;
        visit(h);
        traverse(h->l, visit);
        traverse(h->r, visit);
    }
    static void destroy(link h)
    {
        if (h)
        {
            destroy(h->l);
            destroy(h->r);
            delete h;
        }
    }
    int count(link h)
    {
        if (h == 0) return 0;
        return count(h->l) + count(h->r) + 1;
    }
    int height(link h)
    {
        if (h == 0) return -1;
        int u = height(h->l), v = height(h->r);
        if (u > v) return u + 1; else return v + 1;
    }
    void printnode(Item x, int h)
    {
        for (int i = 0; i < h; i++) cout << "  ";
        cout << x << endl;
    }
    void show(link t, int h)
    {
        if (t == 0) { printnode(0, h); return; }
        show(t->r, h + 1);
        printnode(t->item, h);
        show(t->l, h + 1);
    }

public:

    int height()
    {
        return height(root);
    }
    int count()
    {
        return count(root);
    }
    void insert(int x)
    {
        link* cur = &root;
        while (*cur)
        {
            node& node = **cur;
            if (x < node.item)
            {
                cur = &node.l;
            }
            else if (x > node.item)
            {
                cur = &node.r;
            }
            else
            {
                return;
            }
        }
        *cur = new node(x);
    }
    void printnode()
    {
        printnode(root->item, height(root));
    }
    void show()
    {
        show(root, height(root));
    }
};

int main()
{
    vector<Item> Items = { 7,6,5,4,3,2,1 };
    BTree newTree(Items);
    newTree.show();
    cout << "Height: " << newTree.height() << endl;
    cout << "Count: " << newTree.count() << endl;
    newTree.insert(8);
    newTree.show();
    cout << "Height: " << newTree.height() << endl;
    cout << "Count: " << newTree.count() << endl;
    return 0;
}
