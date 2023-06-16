#include <iostream>

//allocate using static allocation
using namespace std;

struct link
{
    int value;
    link *nextlink;
};

int main(void)
{
    link one, two, three;
    link *temp;
    int i;

    one.value = 1;
    one.nextlink = &two;

    two.value = 2;
    two.nextlink = &three;

    three.value = 3;
    three.nextlink = &one;

    temp = &one;
    for(i=0; i<10; i++)
    {
        cout << temp->value << " ";
        temp = temp->nextlink;
    }
    cout << endl;

    return 0;
}
