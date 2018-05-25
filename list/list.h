

class Element{
public:
    int data;
    Element *next;
    Element *preious;
};

class List{
public:

    Element *last;
    Element *first;
    List();
    void add(int value);
    void dalete(Element *elem);
    Element *findElement(int index);
    void showElement(Element *elem);

};
