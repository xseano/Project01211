#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>

class Graph
{
    public:
        Graph(int v[], size_t l);
        int getLargest();
        void display();
    private:
        size_t length;
        int values[];
};

#endif