// Graph.h
// oberoi, sean
// ssoberoi

#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>

class Graph
{
    public:
        Graph(size_t l); // set the length of the graph via constructor (public)
        void display(int values[]); // used by the main function (public)
    private:
        size_t length; // value only ever set and used internally (private)
        int getLargest(int values[]); // only ever used internally by Graph instance (private)
};

#endif