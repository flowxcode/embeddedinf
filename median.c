#include <stdio.h>

// median of sequence:
// 1 read input numbers from file
// 2 sort array
// 3 calculate the median

// read numbers
void read_numbers(const char* file_name)
{
  FILE* file = fopen (file_name, "r");
  int i = 0;

  fscanf (file, "%d", &i);    
  while (!feof (file))
    {  
      printf ("%d ", i);
      fscanf (file, "%d", &i);      
    }
  fclose (file);        
}

// sort an array in ascending order
void sort_array(int *array , int n)
{ 
    // sort algo TODO

}

// calculate median from array
float calc_median(int array[] , int n)
{
    float median = 0;

    printf(sizeof(*array));

    // numbers are even
    if(n%2 == 0)
        median = (array[(n-1) / 2] + array[n / 2]) / 2.0;
    // numbers are odd
    else
        median = array[n / 2];
    
    return median;
}

int main()
{
    int numbers_arr[10] = {0};
    numbers_arr[0] = 3;
    numbers_arr[1] = 2;
    numbers_arr[2] = 1;
    numbers_arr[3] = 4;
    numbers_arr[4] = 5;
    numbers_arr[5] = 6;
    numbers_arr[6] = 7;
    numbers_arr[7] = 9;
    numbers_arr[8] = 8;
    numbers_arr[9] = 10;
    

    int n = 0;
    float median = 0;

    // TODO read from file

    
    // sort
    sort_array(numbers_arr , n);
    
    median = calc_median(numbers_arr , n);
        
    printf("median : %f\n", median);

    return 0;
}
