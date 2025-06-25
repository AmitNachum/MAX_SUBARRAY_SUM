#include "max_sub_arr.hpp" 
#include <vector>
#include <algorithm>
#include <iostream>


int main(){

    std::vector<float> array = {-2.01f,1.123f,2.21223f,-3.1234f};
    std::cout << "[";
    for(const float& num : array){
        std::cout << num << " ";
    }
    std::cout << "]" << std::endl;

    float sum = max_sum_sub_array(array);

    std::cout << "Max Sum from the template is :" << sum << std::endl;





return 0;
}