#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    List list;
    list.add(5);
    list.add(10);
    list.add(2);
    list.showElement(list.findElement(2));
    return 0;
}
