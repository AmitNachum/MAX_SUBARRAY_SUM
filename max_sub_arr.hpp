#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <type_traits>



template <typename T>
typename std::enable_if<std::is_arithmetic<T>::value, T>::type
max_sum_sub_array(std::vector<T>& array){
    if(array.empty()) return T{0};

    T curr_sum = array[0];
    T final_sum = array[0];

    for(size_t i = 1 ; i < array.size(); ++i){
        curr_sum = std::max(array[i],curr_sum + array[i]);
        final_sum = std::max(curr_sum,final_sum);
    }


    return final_sum;
}

