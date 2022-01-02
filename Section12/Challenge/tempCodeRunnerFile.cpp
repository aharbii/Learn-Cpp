int *apply_all(int first_array[], size_t first_size, int second_array[], size_t second_size)
// {
//   int size = first_size * second_size;
//   int array[size];
//   int *arr_ptr{array};
//   for (size_t i{0}; i < second_size; i++)
//   {
//     for (size_t j = 0; j < first_size; j++)
//     {
//       int element{0};
//       element = second_array[i] * first_array[j];
//       (*arr_ptr) = element;
//       *(arr_ptr++);
//     }
//   }
//   return array;
// }