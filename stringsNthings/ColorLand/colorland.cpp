/*
Authors: Jamethiel Risacher and Marin McCormak
Date: 26 October 2023
Course: CSC 222: Object-Oriented Programming

Resource: 
https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/
*/
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int find_index(map<int, string>& data_set){

    vector < pair <string, int> > colors_idx;
    colors_idx.push_back(make_pair("Blue", 0));
    colors_idx.push_back(make_pair("Red", 0));
    colors_idx.push_back(make_pair("Green", 0));
    colors_idx.push_back(make_pair("Yellow", 0));
    colors_idx.push_back(make_pair("Pink", 0));
    colors_idx.push_back(make_pair("Orange", 0));

    map<int, string>::iterator iter;

  for (int i = 0; i < 6; i++) {
        iter = data_set.begin();
        while (iter != data_set.end()) {
            if (iter->second == colors_idx[i].first) {
                colors_idx[i].second = iter->first;
                iter->second = "";
                break; // Found the color, break the loop
            } else {
                ++iter;
            }
        }
    }

    int high_num = 0;
    for (int i = 0; i < 6; i++){
       if (colors_idx[i].second > high_num){
        high_num = colors_idx[i].second;
       }
    }

    data_set.erase(data_set.begin(), data_set.find(high_num));

    return high_num;
}

void game(){
    int start;
    cin >> start;

    map<int, string> allLines;

    string line;

    for (int i = 1; i <= start; i++){
        cin >> line;
        allLines[i] = line; // key equals value
    }

    int turns = 1;
    int idx = find_index(allLines);

    while (idx != start){
        turns = turns + 1;
        idx = find_index(allLines);
    }
    cout << turns << endl;
}

int main()
{
    game();
    return 0;
}
