#include <iostream>
 
void pyth_triplets(int limit)
{
 
    int a, b, c = 0;
 
    int m = 2;
 
    while (c < limit) {
 
        for (int n = 1; n < m; ++n) {
 
            a = m * m - n * n;
            b = 2 * m * n;
            c = m * m + n * n;
 
            if (c > limit)
                std::cout<<"It cannot form right-angled triangle"<<std::endl;
                break;
 
            printf("%d %d %d\n", a, b, c);
        }
        m++;
    }
}
 
int main()
{
   std::cout<<"Please enter an integer to determine whether it can form right-angled triangle: "<<std::endl;
  
   int num;

   std::cin>>num;
  
  pyth_triplets(num);

  return 0;
}

