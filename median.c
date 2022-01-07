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
    // sort algo
    int i = 0, j = 0, temp = 0;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-1; j++)
        {
            if(array[j] > array[j+1])
            {
                temp        = array[j];
                array[j]    = array[j+1];
                array[j+1]  = temp;
            }
        }
    }
}

// calculate median from array
float calc_median(int numbers[], int n)
{
    float median = 0;

    //printf("len: %d\n", n);

    // numbers are even
    if(n%2 == 0)
        median = (numbers[(n-1) / 2] + numbers[n / 2]) / 2.0;
    // numbers are odd
    else
        median = numbers[n / 2];
    
    return median;
}

int main()
{
    // test numbers for quick ramp up
    int numbers_arr[10] = { 3, 2, 1, 4, 5, 6, 7, 9, 8, 10 };

    int i;
    int len = (sizeof (numbers_arr) / sizeof (numbers_arr[0]));
    printf("len: %d\n", len);
    for (i = 0; i < (sizeof (numbers_arr) / sizeof (numbers_arr[0])); i++) {
        printf("%i\n", numbers_arr[i]);
    }
    
    int n = 0;
    float median = 0;

    // TODO read from file

    
    // sort
    sort_array(numbers_arr , len);
    printf("print sorted array:\n");
    for (i = 0; i < (sizeof (numbers_arr) / sizeof (numbers_arr[0])); i++) {
        printf("%i\n", numbers_arr[i]);
    }
    
    // calc median
    median = calc_median(numbers_arr , len);        
    printf("median : %f\n", median);

    return 0;
}


