#include <iostream>
#include "list.h"
using namespace std;
List::List(){
    last = nullptr;
    first = nullptr;

}
void List::add( int value){
    Element *elem = new Element;
    elem->data = value;
    if(last==nullptr){
        elem->next =nullptr;
         elem->preious=nullptr;

        last  = elem;
        first = elem;
    }
    else{

        last->next = elem;
        elem->preious=last; //w tym momencie last wskazuje
        elem->next=nullptr; //jeszcze obiekt wczesniej ale dwie linijki nizej juz wskazuje nasz nowy czy wskaźnik previus zmieni swoje polozenie?
        last = elem;
    }



}
Element* List::findElement(int index){
    Element *temp=first;
    for(int i=0;i<index;++i)
        temp =temp->next;

    return temp;
}
void List::dalete(Element *elem){
    delete elem;

}

void List::showElement(Element *elem){

    cout<<elem->data;
}
// zadanie domowe zrobic liste dowkierunkowa i gita dwa branche lista jednokierunkowa i dwokierunkowa i dodac remove po indexie do obu lsit
