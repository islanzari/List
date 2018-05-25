

class Element{
public:
    int data;
    Element *next;
};

class List{
public:

    Element *last;
    Element *first;
    List();
    void add(int value);
    void dalete();
    Element *findElement(int index);
    void showElement(Element *elem);

};
