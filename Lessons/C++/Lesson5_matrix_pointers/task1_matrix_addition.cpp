#include <iostream>

int main()
{
	const int size = 2;
	int matrix1[size][size];
	int matrix2[size][size];
	int (*mat1_ptr)[size] = matrix1;
	int (*mat2_ptr)[size] = matrix2;

	std::cout << "Enter the first matrix" << std::endl;

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			std::cin >> *(*(mat1_ptr + i) + j);
		}
	}

	std::cout << "Enter the second matrix" << std::endl;

        for (int i = 0; i < size; ++i)
        {
                for (int j = 0; j < size; ++j)
                {
                        std::cin >> *(*(mat2_ptr + i) + j);
                }
        }

	std::cout << "The sum of two matrixes: " << std::endl;

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			*(*(mat1_ptr + i) + j) += *(*(mat2_ptr + i) + j);
			std::cout << *(*(mat1_ptr + i) + j) << std::endl;
		}
	}

	return 0;
}
