#pragma once

#include <algorithm>
#include <map>
#include <string>
#include <vector>

float consultMax(const std::string& search_term, const std::map<std::string, std::vector<float>>& data) {
    if (data.find(search_term) == data.end() ){
        return -1;
    }

    else {
        std::vector<float> vData = data.at(search_term);
        float max = 0;
        for (float item : vData){
            if (item > max){
                max = item;
            }
        }

        return max;
    }
}

std::map<std::string, float> returnMaxMap(const std::map<std::string, std::vector<float>>& in_map) {
    //implement your function here
    
    std::map<std::string, float> reValue;

    std::map<std::string, std::vector<float>>::const_iterator iter = in_map.begin();

    //make iterator to loop through previous map
    for (;iter != in_map.end(); iter++){
        reValue.emplace(iter->first, consultMax(iter->first, in_map));
    }

}