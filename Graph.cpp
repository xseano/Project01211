// Graph.cpp
// oberoi, sean
// ssoberoi

#include "Graph.h"

Graph::Graph(int v[], size_t l)
    : values(v), length(l)
{
    //
}

// return the largest value in the given array of integers
int Graph::getLargest()
{
    int largest = 0;

    for (int i = 0; i < length; i++) // loop through all values
    {
        int val = values[i];

        if (val > largest) // compare current value against "largest" which represents the largest of the prior values passed
        {
            largest = val; // if largest, overwrite the current value of the "largest" var
        }
    }

    return largest;
}

void Graph::display()
{
    int largest = getLargest(); // obtain largest value

    // predefine the only two characters used in generating the graph
    std::string asterisk = "*";
    std::string space = " ";
    
    int width = length; // length represents how many values were entered by the user
    int height = largest; // largest represents the tallest bar which is equivalent to the height

    for (int o = height; o >= 0; --o) // loop through each individual line within the height of the box, descending (hence the deincrement)
    {
        std::string line = ""; // initialize string line within the height loop so theres a "string" line for each row

        for (int j = 0; j < width; j++) // loop through the list of values to determine their ultimate height (j) and compare against the current row of the box (o)
        {
            if (o >= values[j]) // if the value of the row (o) is higher than the value of the column (j) then append a space
            {
                line += space;
            }
            else // otherwise add a star because its within the bounds of the current height (j)
            {
                line += asterisk;
            }
        }

        std::cout << line << std::endl; // output each horizontal line, one by one
    }
}