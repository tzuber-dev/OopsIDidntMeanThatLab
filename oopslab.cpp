#include <iostream>
#include <vector>
#include "Oops.hpp"
using namespace std;
template <typename T>
vector<T> remove_duplicate(vector<T> input) {
vector<T> noduplicate;
for (int i = 0; i < input.size(); i++){
bool discovered = false;

for (int j = 0; j <  noduplicate.size(); j++)
{
if(input[i]== noduplicate[j]){
    discovered = true;
    break;}
    
}
if(discovered==false){ noduplicate.push_back(input[i]);}
}
return  noduplicate;
}


