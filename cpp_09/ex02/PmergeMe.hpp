//
// Created by Spider Chung on 3/17/23.
//

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <stdexcept>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>

#define K 5

void insertionSortVector(std::vector<int>& A, int p, int q);
void mergeVector(std::vector<int>& A, int p, int q, int r);
void sortVector(std::vector<int>& A, int p, int r);

void insertionSortList(std::list<int>& A, int p, int q);
void mergeList(std::list<int>& A, int p, int q, int r);
void sortList(std::list<int>& A, int p, int r);

#endif //PMERGEME_HPP
