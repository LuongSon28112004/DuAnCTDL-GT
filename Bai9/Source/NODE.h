

#ifndef NODE_
#define NODE_

#include <iostream>
#include "SinhVien.h" //khai bao thu vien de su dung cau truc sinh vien
#include "../Source/LinkList.h"
using namespace std;

class Node
{
private:
    sinhvien sv;
    Node *next;
    Node *prev;
    friend class LinkList;

public:
    Node &operator=(Node *a)
    {
        cout << "ok e :3\n";
        if (this == a)
            return *this;
        this->sv = a->sv;
        this->next = a->next;
        this->prev = a->prev;

        return *this;
    }

    Node()
    {
        next = NULL;
        prev = NULL;
    }

    ~Node()
    {
        next = NULL;
        prev = NULL;
    }

    sinhvien getsv()
    {
        return sv;
    }

    void setsv(sinhvien a)
    {
        sv = a;
    }
    Node *getnext()
    {
        return next;
    }

    void setnext(Node *a)
    {
        next = a;
    }

    Node *getprev()
    {
        return prev;
    }

    void setprev(Node *a)
    {
        prev = a;
    }
};

#endif