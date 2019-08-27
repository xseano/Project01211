// Project.cpp
// oberoi, sean
// ssoberoi

#include "Graph.h"

int main()
{
    size_t MAX = 100; // max # of values allowed
    int counter = 0;
    int values[MAX];
    std::string val; // singular string to read user input into

    do
    {
        std::cin >> val; // read in string "int"

        if (isdigit(val[0])) // check to make sure the string has an integer equivalent by checking the first character
        {
            int i_val = stoi(val); // convert input data from string to an actual integer now

            if (i_val > 0) // only allow nonzero and positive integers to be pushed to the array
            {
                values[counter] = i_val; // array equivalent of vec[push_back]
                counter++; // increment counter to keep track of the # of values provided by the user
            }
            else if (i_val == 0)
            {
                break; // the value is 0 so break the loop and continue
            }
        }
        
    } while(counter <= MAX); // loop until a total of 100 values have been provided by the user

    Graph graph(counter); // initialize the graph
    graph.display(values); // display results based on the values

    return 0;
}