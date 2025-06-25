#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <type_traits>



template <typename T>
typename std::enable_if<std::is_arithmetic<T>::value, T>::type
max_sum_sub_array(std::vector<T>& array){

    T curr_sum = array[0];
    T final_sum = array[0];

    for(const T& number : array){
        curr_sum = std::max(number, number + curr_sum);
        final_sum = std::max(curr_sum,final_sum);
    }


    return final_sum;
}

