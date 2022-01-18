#include <iostream>
using namespace std;
class Que
{
    int size;
    int* que;
public:
    Que()
    {
        size = 0;
        que = new int[100];
    }
    //Deleting a single element from the queue
    void del()
    {
        int last = size;
        if(size == 0)
        {
            cout << "The Que is empty" << endl;
            return;
        }
        else
        {
            for(int i =0; i<size+1; i++)
            {
                que[i]=que[i+1];
            }
            size--;
        }
    }
    //Displaying the content of the queue
    void view()
    {
        if(size==0)
        {
            cout <<"Empty Queue" << endl;
            return;
        }
        else
        {
            for(int i=0; i<size; i++)
            {
                cout << que[i] << " ";;
            }
            cout << endl;
        }
    }
    //Adding to the Queue
    void add(int x)
    {
        if(size==0)
        {
            que[0]=x;
            size++;
        }
        else
        {
            int sizee = size;
            for(int i =0; i<size; i++)
            {
                i=sizee;
                que[i]=x;
            }
            size++;
        }
    }
    //A function to delete all the elements in the queue
    void cls()
    {
        size=0;
        for(int i=0;i<size;i++)
        {
            que[i]=que[size];
        }
        //size=0;
    }
};

int main()
{
    Que queu;
    queu.add(11);
    queu.add(2);
    queu.add(56);
    queu.view();
    queu.add(55);
    queu.view();
    queu.del();
    queu.view();
    queu.add(20);
    queu.view();
    queu.del();
    queu.view();
    queu.cls();
    queu.view();
    queu.del();
    queu.add(12);
    queu.view();
}
