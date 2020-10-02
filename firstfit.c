#include<stdio.h>
 
int main()
{
      static int block_arr[10], file_arr[10];
      int fragments[10], blocks[10], files[10];
      int m, n, number_of_blocks, number_of_files, temp;
      printf("\nEnter the Total Number of Blocks:\t");
      scanf("%d", &number_of_blocks);
      printf("Enter the Total Number of Files:\t");
      scanf("%d", &number_of_files);
      printf("\nEnter the Size of the Blocks:\n");
      for(m = 0; m < number_of_blocks; m++) 
      {
            printf("Block No.[%d]:\t", m + 1);
            scanf("%d", &blocks[m]);
      }
      printf("Enter the Size of the Files:\n");
      for(m = 0; m < number_of_files; m++) 
      {
            printf("File No.[%d]:\t", m + 1);
            scanf("%d", &files[m]);
      }
      for(m = 0; m < number_of_files; m++)
      {
            for(n = 0; n < number_of_blocks; n++)
            {
                  if(block_arr[n] != 1)
                  {
                        temp = blocks[n] - files[m];
                        if(temp >= 0)
                        {
                              file_arr[m] = n;
                              break;
                        }
                  }
            }
            fragments[m] = temp;
            block_arr[file_arr[m]] = 1;
      }
      printf("\nFile Number\tBlock Number\tFile Size\tBlock Size\tFragment");
      for(m = 0; m < number_of_files; m++)
      {
            printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d", m, file_arr[m], files[m], blocks[file_arr[m]], fragments[m]);
      }
      printf("\n");
      return 0;
}
