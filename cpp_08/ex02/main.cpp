//
// Created by Spider Chung on 11/18/22.
//
#include "MutantStack.hpp"

int main() {
    std::cout << "-----------MutantStack---------------" << std::endl;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    std::cout << "--------------------------" << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    std::cout << "--------------------------" << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator iter = mstack.end();
    ++it;
    --it;
    while (it != iter)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "-----------LIST---------------" << std::endl;

    std::list<int> list;
    list.push_back(5);
    list.push_back(17);
    std::cout << list.back() << std::endl;
    std::cout << "--------------------------" << std::endl;
    list.pop_back();
    std::cout << list.size() << std::endl;
    std::cout << "--------------------------" << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);

    std::list<int>::iterator it1 = list.begin();
    std::list<int>::iterator iter1 = list.end();
    ++it1;
    --it1;
    while (it1 != iter1)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }

    return 0;
}

