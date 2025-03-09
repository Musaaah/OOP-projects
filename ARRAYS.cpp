// NAME : MOSES WACHIRA
// REG NO : BSE-05-0193/2024
// ARRAYS



#include <iostream>
#include <string>
int main() {
    
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    
    std::cout << " The 2D array elements are:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "Element at index [" << i << "][" << j << "]: " << matrix[i][j] << std::endl;
        }
    }

    return 0;
}

