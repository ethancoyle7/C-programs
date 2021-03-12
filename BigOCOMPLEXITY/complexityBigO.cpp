//big 0 complexity is the determination of how fast best and worst case scenerios of an alogorithm the order of
// time complexity is thus

//from fastest to slowest

// 1.   0(1)- constant
// 2.   O(logn)- logarithmic dividng,
// 3.   O(n)- linear
// 4.   0(nlogn) - linearithic
// 5.   0(n^2)- polynomial
// 6.   o(2^n)- exponential
// 7.   O(n!)- factorial




// Linear complexity: O(N*N)
int FindMaxElement(int[] array)
{
        int max = int.MinValue;
        for (int i = 1; i < array.Length; i++)
        {
             if (array[i] > max)
             {
                   max = array[i];
             }
        }
        return max;
}
 
 
// Quadratic complexity: O(N*N)
int FindInversions(int[] array)
{
    int inversions = 0;
    for (int i = 0; i < array.Length - 1; i++)
    {
        for (int j = i + 1; j < array.Length; j++)
        {
            if (array[i] > array[j])
            {
                inversions++;
            }
        }
    }
    return inversions;
}
 
 
// Quadratic complexity: O(N*M)
// Innermost loop executes N*min(N,M);
//thus, this algorithm is not of cubic complexity.

long SumMN(int n, int m)
{
    long sum = 0;
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= m; y++)
        {
            if (x == y)
            {
                for (int i = 1; i <= n; i++)
                {
                    sum += i * x * y;
                }
            }
        }
    }
    return sum;
}
 
 
// Exponential complexity: O(2^n)
long Fibonacci(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}
