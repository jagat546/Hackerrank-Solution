#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> numbers(N);
    //populate the vector
     for(int i = 0; i < N; ++i) {
         std::cin >> numbers[i];
     }
    
    int queryLength;
    std::cin >> queryLength;    

    for(int j = 0; j < queryLength; ++j) {
        int query;
        std::cin >> query;
        auto lowerBoundIt = std::lower_bound(numbers.cbegin(), numbers.cend(), query);
        if(*lowerBoundIt == query) {
            std::cout << "Yes ";
        }
        else {
            std::cout << "No ";
        }
        std::cout << std::distance(numbers.cbegin(), lowerBoundIt) + 1 << '\n';
    }
}