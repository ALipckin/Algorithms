int cout(link x)
  {
      if (x == 0) return 0;
      return 1 + cout (x->next);
  }
void traverse(link h, void visit(link))
  {
    if (h == 0) return;
    visit(h);
    traverse(h->next, visit);
  }
void traverseR(link h, void visit(link))
  {
    if (h == 0) return;
    traverseR(h->next, visit);
    visit(h);
  }
void remove(link& x, Item v)
  {
    while (x != 0 && x->Item == v)
     { link t = x; x = x->next; delete t; }
    if (x != 0) remove(x->next, v);
  }