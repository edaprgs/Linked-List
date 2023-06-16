#include <iostream>
#include <assert.h>
using namespace std;

//assemble the data structure using the new keyword and use assertions
//do the looping display of values
//use the delete keyword to free the allocated memory segment

struct link
{
    int value;
    link *nextlink;
};

int main()
{
    link one, two, three;
    link *temp;
    int *linkArr[3];
    int i;

    for(i=0; i<3; ++i)
    {
        linkArr[i] = new int; //assign a memory cell for a value
        assert(linkArr[i] != NULL); //to test certain assumptions that are set in the program

        *linkArr[i] = i + 1;
    }

    one.value = *linkArr[0];
    one.nextlink = &two;

    two.value = *linkArr[1];
    two.nextlink = &three;

    three.value = *linkArr[2];
    three.nextlink = &one;

    temp = &one;
    for(i=0; i<10; ++i)
    {
        cout<<temp->value<<" ";
        temp = temp->nextlink;
    }
    cout<<endl;

    for(i=0; i<3; ++i)
    {
        delete linkArr[i];
    }

    return 0;
}
