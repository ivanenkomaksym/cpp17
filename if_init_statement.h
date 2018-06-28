#include <iostream>
#include <set>
#include <string>
#include <tuple>
#include <utility>
 
using namespace std;

void if_init_statement()
{
    set<pair<string, int>> mySet;
    
    pair<string, int> itemsToAdd[3] { {"hello", 1}, { "world", 2 }, { "world", 2 } };

    for (auto &p : itemsToAdd)
    {       
        if (const auto [iter, inserted] = mySet.insert(p); inserted)
            cout << "Value(" << iter->first << ", " << iter->second << ") was inserted" << "\n"; 
        else
            cout << "Value(" << iter->first << ", ...) not inserted!" << "\n"; 
    }
}