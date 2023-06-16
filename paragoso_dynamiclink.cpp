#include <iostream>
#include <assert.h>

using namespace std;

struct link
{
    int value;
    link *nextlink;
};

int main()
{
    link* one = new link;
    link* two = new link;
    link* three = new link;
    link *temp;
    int i;

    one->value = 1;
    one->nextlink = two;

    two->value = 2;
    two->nextlink = three;

    three->value = 3;
    three->nextlink = one;

    temp = one;
    for(i=0; i<10; ++i)
    {
        cout<<temp->value<<" ";
        temp = temp->nextlink;
    }
    cout<<endl;

    delete one;
    delete two;
    delete three;

    return 0;
}
