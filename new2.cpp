// LINEAR SEARCH
/*
#include <iostream>
using namespace std;
bool IsPresent(int arr[][3], int key, int row, int cols)
{
    for (int row = 0; row < 3; row++)
    {
        for (int cols = 0; cols < 3; cols++)
        {

            if (arr[row][cols] == key)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][3];
    cout << "Input the 2D array: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int cols = 0; cols < 3; cols++)
        {
            cin >> arr[row][cols];
        }
    }
    cout << "Printing 2D array: " << endl;

    for (int row = 0; row < 3; row++)
    {
        for (int cols = 0; cols < 3; cols++)
        {
            cout << arr[row][cols] << " ";
        }
        cout << endl;
    }
    if (IsPresent(arr, 0, 3, 3))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}
*/
// ROW WISE SUM AND FIND WHICH ROW HAS THE MAX SUM
// #include <iostream>
// using namespace std;
// int largestRowSum(int arr[][3], int row, int cols)
// {
//     int sum = 0;
//     int ans = 0;
//     int rowIndex = -1;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int cols = 0; cols < 3; cols++)
//         {
//             sum = sum + arr[row][cols];
//         }
//         if (sum > ans)
//         {
//             rowIndex = row;
//             ans = sum;
//         }
//         return row;
//     }
// }
// int main()
// {
//     int arr[3][3];
//     cout << "Input the 2D array: " << endl;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int cols = 0; cols < 3; cols++)
//         {
//             cin >> arr[row][cols];
//         }
//     }
//     cout << "Printing 2D array: " << endl;

//     for (int row = 0; row < 3; row++)
//     {
//         for (int cols = 0; cols < 3; cols++)
//         {
//             cout << arr[row][cols] << " ";
//         }
//         cout << endl;
//     }
// int sum = 0;
// for (int row = 0; row < 3; row++)
// {
//     for (int cols = 0; cols < 3; cols++)
//     {
//         sum = sum + arr[row][cols];
//     }
// }
//     int RowSum = largestRowSum(arr, 3, 3);
//     cout << "The row having the largest sum is " << RowSum << endl;
//     return 0;
// }

// PRINT LIKE WAVE
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> WavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     vector<int> ans;
//     for (int col = 0; col < mCols; col++)
//     {
//         if (col & 1)
//         {
// odd Index ->Bottom to top
//     for (int row = nRows - 1; row >= 0; row--)
//     {
//         ans.push_back(arr[row][col]);
//     }
// }
// else
// {
// 0 or even index -> Top to bottom
//             for (int row = 0; row < nRows; row++)
//             {
//                 ans.push_back(arr[row][col]);
//             }
//         }
//     }
//     return ans;
// }

// SPIRAL LIKE PATTERN
// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution
// {
// public:
//     vector<int> SpiralOrder(vector < vector<int> & matrix)
//     {
//         vector<int> ans;
//         int row = matrix.size();
//         int col = matrix[0].size();

//         int count = 0;
//         int total = row * col;

//         // index initialisation
//         int startingRow = 0;
//         int startintCol = 0;
//         int endingRow = row - 1;
//         int endingcol = col - 1;

//         while (count < total)
// {
// printing starting row
// for (int index = startintCol; count < total && index <= endingcol; index++)
// {
//     ans.push_back(matrix[startingRow][index]);
//     count++;
// }
// startingRow++;

// printing ending col
// for (int index = startingRow; count < total && index <= endingRow; index++)
// {
//     ans.push_back(matrix[index][endingcol]);
//     count++;
// }
// endingcol--;

// printing ending row
// for (int index = endingcol; count < total && index >= startintCol; index--)
// {
//     ans.push_back(matrix[endingRow][index]);
//     count++;
// }
// endingRow--;

// printing starting column
//             for (int index = endingRow; count < total && index >= startingRow; index--)
//             {
//                 ans.push_back(matrix[index][startintCol]);
//                 count++;
//             }
//             startintCol++;
//         }
//         return ans;
//     }
// };

// Binary search in a 2d array sorted row wise
// #include <iostream>
// #include <vector>
// using namespace std;

// class solution
// {
// public:
//     bool searchMatrix(vector<vector<int>> &matrix, int target)
//     {
//         int row = matrix.size();
//         int col = matrix[0].size();
//         int start = 0;
//         int end = row * col - 1;
//         int mid = strat + (end - start) / 2;

//         while (start <= end)
//         {
//             int element = matrix[mid / col][mid % col];
//             if(element==target){
//                 return 1;
//             }
//             if(element<target){
//                 stra=mid+1;
//             }
//             else{
//                 end=mid-1;
//             }
//             mid=start+(end-start)/2;
//         }
//         return 0;
//     }
// };

// Binary search in 2 d array row and column vice sorted
// #include <iostream>
// #include <vector>
// using namespace std;
// class solution
// {
// public:
//     bool SearchMatrix(vector<vector<int>> &matrix, int target)
//     {
//         int row = matrix.size();
//         int col = matrix[0].size();

//         int rowIndex = 0;
//         int colIndex = col - 1;

//         while (rowIndex < row && colIndex >= 0)
//         {
//             int element = matrix[rowIndex][colIndex];
//             if (element == target)
//             {
//                 return 1;
//             }
//             if (element < target)
//             {
//                 rowIndex++;
//             }
//             else
//             {
//                 colIndex--;
//             }
//         }
//         return 0;
//     }
// };
// Rotate a 2d matrix by 90 degrees
// #include <iostream>
// #include <vector>
// using namespace std;
// void rotateMatrix(vector<vector<int>> &matrix)
// {
//     int nRows = matrix.size();

// transpose of matrix
// for (int row = 0; row < nRows; row++)
// {
//     for (int col = row + 1; col < nRows; col++)
//     {
//         swap(matrix[row][col], matrix[col][row]);
//     }
// }
// reverse each column
//     for (int row = 0; row < nRows; row++)
//     {
//         for (int col = 0; col < nRows / 2; col++)
//         {
//             swap(matrix[row][col], matrix[row][nRows - col - 1]);
//         }
//     }
// }
// int main()
// {
//     vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     rotateMatrix(matrix);
//     for (int row = 0; row < matrix.size(); row++)
//     {
//         for (int col = 0; col < matrix[0].size(); col++)
//         {
//             cout << matrix[row][col] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// MATHS FOR DSA
// Sieve of Eratothenes-----count primes
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution
// {
// public:
//     int countPrimes(int n)
//     {
//         int cnt = 0;
//         vector<bool> prime(n + 1, true);

//         prime[0] = prime[1] = false;

//         for (int i = 2; i < n; i++)
//         {
//             if (prime[i])
//             {
//                 cnt++;
//             }

//             for (int 2 * i; j < n; j = j + i)
//             {
//                 prime[j] = 0;
//             }
//         }

//         return cnt;
//     }
// };

// PRIME NUMBER
// #include <iostream>
// using namespace std;
// bool isPrime(int n)
// {
//     if (n <= 1)
//     {
//         return false;
//     }
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     if (isPrime(n))
//     {
//         cout << "It is a prime number" << endl;
//     }
//     else
//     {
//         cout << "Not prime" << endl;
//     }
//     return 0;
// }

// gcd(greatest common divisor)
// #include <iostream>
// using namespace std;

// int gcd(int a, int b)
// {
//     if (a == 0)
//     {
//         return b;
//     }
//     if (b == 0)
//     {
//         return a;
//     }
//     while (a != b)
//     {
//         if (a > b)
//         {
//             a = a - b;
//         }
//         else
//         {
//             b - a;
//         }
//     }
//     return a;
// }

// int main()
// {
//     int a, b;
//     cout << "Enter the values of a and b " << endl;
//     cin >> a >> b;

//     int ans = gcd(a, b);
//     cout << "The gcd of " << a << " and " << b << " is " << ans << endl;
//     return 0;
// }

// Fast exponentiation
// #include <iostream>
// using namespace std;

// int ModularExponentiation(int x, int n, int m)
// {
//     int res = 1;

//     while (n > 0)
//     {
//         if (n & 1)
//         { // for odd
//             res = (1LL * (res) * (a) % m) % m;
//         }
//         x = (1LL * (x) % m * (x) % m) % m;
//         n = n >> 1; // n divided by 2
//     }
//     return res;
// }

// Pointers
// #include <iostream>
// using namespace std;

// int main()
// {
// int arr[10] = {23, 122, 41, 67};
// cout << "Address of first memory block " << arr << endl;
// cout << "Address of first memory block " << &arr[0] << endl;

// cout << "Value at adress of first memory block " << *arr << endl;
// cout << "Value at adress of first memory block when 1 is added " << *arr + 1 << endl;
// cout << "Value at adress of second memory block " << *(arr + 1) << endl;
// cout << "Value at adress of first memory block when 1 is added " << *(arr) + 1 << endl;
// cout << "Value at adress of third memory block " << *(arr + 2) << endl;

// int i = 3;
// cout <<"Here i[arr] is same as that of arr[i] "<< i[arr] << endl;

// int temp[10] = {1, 2};
// cout << " The size of entire array:" << sizeof(temp) << endl;
// cout << "the size of element at index 0: " << sizeof(*temp) << endl;
// cout << "the size of address of element at index 0 :" << sizeof(&temp) << endl;

// int *ptr = &temp[0];
// cout << " The size of adress of elemnet at index 0: "<<sizeof(ptr) << endl;
// cout <<" The size of element at index 0:"<< sizeof(*ptr) << endl;
// cout << "The size of address of ptr: "<<sizeof(&ptr) << endl;

// int a[20] = {1, 2, 3, 5};
// cout << " The address of elememnt at index 0: " << &a[0] << endl;
// cout << " The address of eleemnt at index 0: " << &a << endl;
// cout << " The address of eleemnt at index 0: " << a << endl;

// int *p = &a[0];
// cout << " The address of element at index 0: " << p << endl;
// cout << " The value of eleemnt at index 0: " << *p << endl;
// cout << " The address of p: "<< &p << endl;

// int arr[10];
// arr=arr+1; //will give you an error

// int *ptr = &arr[0];
// cout << ptr << endl;
// ptr = ptr + 1;
// cout << ptr << endl;
//     return 0;
// }
// QUES
// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//      class Solution {
// public:
//     int romanToInt(string s) {
//     char arr[7] = {'I', 'V','X','L','C','D','M'};
//     int sum = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == 'I')
//         {

//             if(s[i+1]=='V'){
//                 sum=sum+4;
//                 i+2;

//             }
//             else if(s[i+1]=='X'){
//                 sum= sum+9;
//                 i+2;

//             }
//             else{
//                  sum = sum + 1;
//             }
//         }
//         else if(s[i]=='V')
//         {
//             sum = sum + 5;
//         }
//          else if(s[i]=='X')
//         {

//             if(s[i+1]=='L'){
//                 sum=sum+40;
//                 i+2;

//             }
//             else if(s[i+1]=='C'){
//                 sum=sum+90;
//                 i+2;

//             }
//             else{
//                 sum = sum + 10;
//             }
//         }
//          else if(s[i]=='L')
//         {
//             sum = sum + 50;
//         }
//          else if(s[i]=='C')
//         {

//             if(s[i+1]=='D'){
//                 sum=sum+400;
//                 i+2;

//             }
//             else if(s[i+1]=='M'){
//                 sum=sum+900;
//                 i+2;

//             }
//             else{
//                 sum = sum + 100;
//             }
//         }
//          else if(s[i]=='D')
//         {
//             sum = sum + 500;
//         }
//          else if(s[i]=='M')
//         {
//             sum = sum + 1000;
//         }

//     }
//     return sum;
//     }
// };
//     return 0;
// }
// Pointer character array
// #include <iostream>
// using namespace std;

// int main()
// {
// int arr[5] = {1, 2, 3, 4, 5};
// char ch[6] = "abcde";

// cout << arr << endl;
// cout << ch << endl;

// char *c = &ch[0];
// prints entire string
// cout << c << endl;

//     char temp = 'z';
//     char *p = &temp;
//     cout << p << endl;
//     return 0;
// }
// pointer functions
// #include <iostream>
// using namespace std;

// void print(int *p)
// {
//     cout << *p << endl;
// }

// void update(int *p)
// {
// p = p + 1;
// cout << "inside " << p << endl;
//     *p = *p + 1;
// }

// int getSum(int *arr, int n)
// {
//     cout << endl
//          << "Size : " << sizeof(arr) << endl;
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }
// int main()
// {
// int value = 5;
// int *p = &value;

// print(p);
// cout << "before " << *p << endl;
// update(p);
// cout << "after " << *p << endl;

//     int arr[6] = {1, 2, 3, 4, 5, 8};
//     cout << "Sum is " << getSum(arr + 3, 3) << endl;
//     return 0;
// }

// Double pointers
// #include <iostream>
// using namespace std;

// int main()
// {
//     int i = 5;
//     int *p = &i;
//     int **p2 = &p;

//     cout << i << endl;    // 5
//     cout << *p << endl;   // 5
//     cout << **p2 << endl; // 5

//     cout << &i << endl;  // Address of i
//     cout << p << endl;   // Address of i
//     cout << *p2 << endl; // Address of i

//     cout << &p << endl;    //Address of pointer p
//     cout << p2 << endl;     //Address of pointer p
//     return 0;
// }

// Refrence variable
// #include <iostream>
// using namespace std;

// BAD PRACTICE
//  int &func(int a){
//      int num=a;
//      int&ans=num;
//      return ans;
//  }

// int *fun(int n){
//     int *ptr=&n;
//     return ptr;
// }

// void update2(int &n){
//     n++;
// }

// void update1(int n)
// {
//     n++;
// }

// int main()
// {
// int i = 5;
// // Create a refreence variable
// int &j = i;
// cout << i << endl;
// i++;
// cout<<i<<endl;
// j++;
// cout<<i<<endl;
// cout<<j<<endl;
// return 0;

//     int n = 5;
//     cout << "Before " << n << endl;
//     update2(n);
//     cout << "After " << n << endl;
// }

// Dynamic Allocation Array
// #include <iostream>
// using namespace std;

// int getSum(int *arr, int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     // variable size array---Dynamic allocation of array
//     int *arr = new int[n];

//     // taking input in an array
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int ans = getSum(arr, n);

//     cout << "Answer is " << ans << endl;

//     // case1----Stack
//     while (true)
//     {
//         int i = 5;
//     }

//     // case 2-----Heap
//     while (true)
//     {
//         int *ptr = new int;
//     }
//     return 0;
// }

// // Dynamic allocation of 2D array
// #include <iostream>
// using namespace std;

// int main()
// {
//     int row;
//     cin >> row;

//     int col;
//     cin >> col;

//     // Creating a 2D array
//     int **arr = new int *[row];
//     for (int i = 0; i < row; i++)
//     {
//         arr[i] = new int[col];
//     }

//     // Taking input
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     // Printing Output
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     //realeasing memory
//     for(int i=0;i<row;i++){
//         delete [] arr[i];
//     }
//     delete []arr;
//     return 0;
// }
// Macros
// #include <iostream>
// using namespace std;
// #define PI 3.14 //Without taking extra memory unlike variable declaration
// int main()
// {
//     int r = 5;
//     double area = PI * r * r;
//     cout << "Area is " << area << endl;
//     return 0;
// }
// // Inline function
// #include <iostream>
// using namespace std;
// inline int getMax(int &a, int &b)
// {
//     return (a > b) ? a : b;
// }
// int main()
// {
//     int a = 1, b = 2;
//     int ans = 0;
//     ans = getMax(a, b);
//     cout << ans << endl;
//     a = a + 3;
//     b = b + 1;
//     ans = getMax(a, b);
//     cout << ans << endl;
//     return 0;
// }
// // Global Variable
// #include <iostream>
// using namespace std;
// int score = 15; // Global Varible
// void a(int &i)
// {
//     cout << score << " in a" << endl;
//     score++;
// }
// void b(int &i)
// {
//     cout << score << " in b" << endl;
// }
// int main()
// {
//     cout << score << " in main" << endl;
//     int i = 5;
//     a(i);
//     b(i);

//     return 0;
// }
// Default Arguements
// #include <iostream>
// using namespace std;
// void print(int arr[], int n, int start = 0)
// {
//     for (int i = start; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }
// int main()
// {
//     int arr[5] = {1, 4, 5, 6, 8};
//     int size = 5;
//     print(arr, size);
//     cout << endl;
//     print(arr, size, 3);
//     return 0;
// }