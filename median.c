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
    
    // TODO
    
    return median;
}

int main()
{
    int numbers[10] = {0};
    int n = 0;
    float median = 0;

    // TODO read from file

    
    // sort
    sort_array(numbers , n);
    
    median = calc_median(numbers , n);
        
    printf("median : %f\n", median);
    
    return 0;
}
