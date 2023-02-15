//
// Created by Bobbyshu on 2023/2/15.
//

#ifndef ALGORITHM_CPP_UNORDERED_MAP_H
#define ALGORITHM_CPP_UNORDERED_MAP_H

#include <algorithm>
#include <iostream>

class unordered_map {
public:
    std::vector<int> numberOfPairs(std::vector<int> &nums) {
        std::unordered_map<int, int> mp;
        for (int i: nums)
            mp[i]++;
        int cnt = 0, remain = 0;

        for (auto it: mp) {
            cnt += (it.second / 2);
            remain += (it.second % 2);
        }
        return {cnt, remain};
    }
};


#endif //ALGORITHM_CPP_UNORDERED_MAP_H
