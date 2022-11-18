//
// Created by Spider Chung on 11/18/22.
//

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
private:
    std::vector<int> _vector;
    unsigned int _size;

public:
    Span();
    Span(unsigned int size);
    Span(const Span &copy);
    virtual ~Span();
    Span &operator=(Span const &assign);

    void addNumber(int num);
    int shortestSpan();
    int longestSpan();
    void addNumbers(std::vector<int> vector);
    void print();

    class NoPlace : public std::exception {
    public:
        virtual const char *what() const throw() {
            return "No place left";
        };
    };

    class NoSpanFound : public std::exception {
    public:
        virtual const char *what() const throw() {
            return "No span left";
        };
    };

};


#endif //SPAN_HPP
