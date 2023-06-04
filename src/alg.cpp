// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"
int factorial(int n) {
    if (n <= 1) return 1;
    return fact(n - 1) * n;
}
std::vector<char> getPerm(const Tree& tree, int n) {
    if (tree.getSize() == 0 || n > factorial(tree.getSize()))
        return {};
    if (tree.getCharacter_set() == '*')
        n--;
    std::vector<char> result;
    int temp = factorial(tree.getSize() - 1);
    result.push_back(tree[n / temp].getCharacter_set());
    std::vector<char> b = getPerm(tree[n / temp], n % temp);
    result.insert(res.end(), b.begin(), b.end());
    return result;
}

}
