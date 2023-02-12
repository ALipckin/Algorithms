void printnode(Item x, int h)
{
    for (int i = 0; i < h; i++) cout << " ";
    cout << x << endl;
}
void show(link t, int h)
{
    if (t == 0) { printnode('*', h); return; }
    show(t->r, h + 1);
    printnode(t->item, h);
    show(t->l, h + 1);
}
