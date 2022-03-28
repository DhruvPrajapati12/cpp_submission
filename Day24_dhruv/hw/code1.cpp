#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

class myList
{
    public:

        list<int> mylist;
        list<int>::iterator p,p1;
    

        myList()
        {
            
            // cout << list.empty();        // check for list is empty or not
        }

        void InsertBeg(int newele)    //: add the new node at the beginning of the list
        {
            // p = mylist.begin();
            // *p = newele;
            // p++;

            mylist.push_front(newele);
        }

        void DeleteLast()       //: delete the last node
        {
            mylist.pop_back();
        }

        void SwaapTwo()     //: swap the first node with the last node
        {
            int a = mylist.front();
            int b = mylist.back();
            
            mylist.pop_front();
            mylist.pop_back();

            mylist.push_front(b);
            mylist.push_back(a);

        }

        void print()
        {
            p = mylist.begin();

            while(p != mylist.end())
            {
                cout << *p  << " ";
                p++;
            }
            cout << endl;
        }

        void ReverseList()      // ‘friend’ : reverse the list
        {
            mylist.reverse();
        }

};

class InsertList : public myList
{
    public:

        void InsertEnd(int ele)     // add the new node at the end of the list
        {
            mylist.push_back(ele);
        }

        void InsertAt(int ele, int at)      // insert the node at the given index
        {
            p = mylist.begin();
            advance(p, at);
            mylist.insert(p, ele);
        }

        void Insert2postt(int ele, int n)   // insert the node two nodes after the given index
        {
            p = mylist.begin();
            advance(p, n+2);
            mylist.insert(p, ele);
        }
};

class DeleteList : public InsertList
{
    public:

        void Delete()       // delete the first node
        {
            mylist.pop_front();
        }

        void Delete(int index)      // delete the node at given index
        {
            p = mylist.begin();
            advance(p, index);
            mylist.erase(p);
        }

        void DeleteButOne()     // delete the last but one node
        {
            mylist.pop_back();
        }
};

class Manipulate : public DeleteList
{
    public:

        void Swap(int lo1, int lo2)     //swap the nodes at given indices
        {
            p = mylist.begin();
            p1 = mylist.begin();
            advance(p, lo1);
            advance(p1, lo2);

            swap(*p, *p1);
        }

        void reOrder(int node)      //: Bring a given node at the start of the list
        {
            p = mylist.begin();
            int ans;
            while(p != mylist.end())
            {
                if(*p == node)
                {
                    break;
                }
                p++;
            }
            mylist.erase(p);
            mylist.push_front(node);
        }
};

int main()
{
    // myList list1;

    // InsertList list1;

    // DeleteList list1;

    Manipulate list1;
    list1.InsertBeg(10);
    list1.InsertBeg(20);
    list1.InsertBeg(5);
    list1.print();

    list1.DeleteLast();
    list1.print();

    list1.InsertBeg(23);
    list1.InsertBeg(28);
    list1.print();

    list1.SwaapTwo();
    list1.print();

    list1.ReverseList();
    list1.print();

    list1.InsertEnd(97);
    list1.print();

    list1.InsertAt(56, 3);
    list1.print();

    list1.Insert2postt(67, 0);
    list1.print();

    list1.Delete();
    list1.print();

    list1.Delete(2);
    list1.print();

    list1.DeleteButOne();
    list1.print();

    list1.Swap(1, 3);
    list1.print();

    list1.reOrder(20);
    list1.print();

  return 0;
}