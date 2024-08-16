// Factorial
// #include <iostream>
// using namespace std;
// int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     return (n * factorial(n - 1));
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int ans = factorial(n);
//     cout << "The factorial of " << n << " is " << ans;
//     return 0;
// }
// Power of two
// #include <iostream>
// using namespace std;
// int PowerOfTwo(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     return (2 * PowerOfTwo(n - 1));
// }
// int main()
// {
//     int power;
//     cin >> power;
//     int ans = PowerOfTwo(power);
//     cout << "The answer is " << ans << endl;
//     return 0;
// }
// Counting series
// #include <iostream>
// using namespace std;
// int Counting(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }

//     Counting(n - 1);
//     cout << n << endl;
// }
// int main()
// {
//     int lastCount;
//     cin >> lastCount;
//     Counting(lastCount);

//     return 0;
// }
// Fibonacci Series
// #include <iostream>
// using namespace std;
// int fib(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }
//     return (fib(n - 1) + fib(n - 2));
// }
// int main()
// {
//     int nTerm;
//     cin >> nTerm;
//     int ans = fib(nTerm);
//     cout << ans << endl;
//     return 0;
// }
// Climb Stairs
// #include <iostream>
// using namespace std;
// int CountDistinctWayToClimbStairs(long long nStairs)
// {
//     // base case
//     if (nStairs < 0)
//     {
//         return 0;
//     }
//     if (nStairs == 0)
//     {
//         return 1;
//     }
//     // RC
//     int ans = CountDistinctWayToClimbStairs(nStairs - 1) + CountDistinctWayToClimbStairs(nStairs - 2);
//     return ans;
// }
// int main()
// {

//     return 0;
// }
// Say Digits
// #include <iostream>
// using namespace std;
// void sayDigit(int n, string arr[])
// {
//     // base case
//     if (n == 0)
//     {
//         return;
//     }
//     // processing
//     int digit = n % 10;
//     n = n / 10;

//     // recursive call
//     sayDigit(n, arr);
//     cout << arr[digit] << " ";
// }
// int main()
// {
//     string arr[10] = {"Zero", "One", "Two", "Three", "Four",
//                       "Five", "Six", "Seven", "Eight", "nine"};
//     int n;
//     cin >> n;

//     cout << endl;
//     sayDigit(n, arr);
//     cout << endl;
//     return 0;
// }
// Sum of array using Recursion
// #include <iostream>
// using namespace std;
// int getSum(int *arr, int size)
// {

//     // Base case
//     if (size == 0)
//         return 0;
//     if (size == 1)
//     {
//         return arr[0];
//     }
//     int remainingPart = getSum(arr + 1, size - 1);
//     int sum = arr[0] + remainingPart;
//     return sum;
// }
// int main()
// {
//     int arr[5] = {2, 4, 5, 6, 7};
//     int size = 5;

//     int sum = getSum(arr, size);
//     cout << "Sum is " << sum << endl;

//     return 0;
// }
// Check if the array is sorted or not using recursion
// #include <iostream>
// using namespace std;
// bool isSorted(int arr[], int size)
// {
//     // base case
//     if (size == 0 || size == 1)
//     {
//         return true;
//     }
//     if (arr[0] > arr[1])
//     {
//         return false;
//     }
//     else
//     {
//         bool remainingPart = isSorted(arr + 1, size - 1);
//         return remainingPart;
//     }
// }
// int main()
// {
//     int arr[5] = {8,9,6,5};
//     int size = 5;

//     bool ans = isSorted(arr, size);

//     if (ans)
//     {
//         cout << "Array is Sorted " << endl;
//     }
//     else
//     {
//         cout << "Array is not sorted " << endl;
//     }
//     return 0;
// }
// Linear search using Recursion
// #include <iostream>
// using namespace std;
// void print(int arr[], int n)
// {
//     cout << "Size of array is " << n << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// bool LinearSearch(int arr[], int size, int key)
// {
//     print(arr, size);
//     // base case
//     if (size == 0)
//     {
//         return false;
//     }
//     if (arr[0] == key)
//     {
//         return true;
//     }
//     else
//     {
//         bool reaminingPart = LinearSearch(arr + 1, size - 1, key);
//         return reaminingPart;
//     }
// }

// int main()
// {
//     int arr[5]{1, 2, 3, 4, 5};
//     int size = 5;
//     int key = 5;
//     bool ans = LinearSearch(arr, size, key);

//     if (ans)
//     {
//         cout << "Present " << endl;
//     }
//     else
//     {
//         cout << "Absent " << endl;
//     }
//     return 0;
// }
// // Recursion And Bianry Search
// #include <iostream>
// using namespace std;
// void print(int arr[], int s, int e)
// {
//     for (int i = s; i <= e; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// bool BinarySearch(int arr[], int s, int e, int key)
// {
//     print(arr, s, e);
//     // base case
//     if (s > e)
//     {
//         return false;
//     }
//     int mid = s + (e - s) / 2;
//     cout << "Mid = " << mid << endl;
//     if (arr[mid] == key)
//     {
//         return true;
//     }
//     if (arr[mid] > key)
//     {
//         BinarySearch(arr, s, mid - 1, key);
//     }
//     else
//     {
//         BinarySearch(arr, mid + 1, e, key);
//     }
// }
// int main()
// {
//     int arr[5] = {6, 7, 8, 9, 10};
//     int size = 5;
//     int key = 7;
//     cout << "If element is present or not: " << BinarySearch(arr, 0, size - 1, key) << endl;
//     return 0;
// }
// REcursion and strings
// Reverse astring using recursion
// #include <iostream>
// using namespace std;
// void reverse(string &s, int i, int j)
// {
//     // base case
//     if (i > j)
//     {
//         return;
//     }
//     swap(s[i], s[j]);
//     i++;
//     j--;
//     reverse(s, i, j);
// }
// int main()
// {
//     string str = "love";
//     reverse(str, 0, str.length() - 1);
//     cout << "The reversed string is " << str << endl;
//     return 0;
// }
// Check Pallendrome using recursion
// #include <iostream>
// using namespace std;

// bool Pallendrome(string s, int i, int j)
// {
//     // base case
//     if (i > j)
//     {
//         return true;
//     }
//     if (s[i] != s[j])
//     {
//         return false;
//     }
//     else
//     {
//         return Pallendrome(s, i + 1, j - 1);
//     }
// }

// int main()
// {
//     string str;
//     cin >> str;
//     bool checkPallendrome = Pallendrome(str, 0, str.length() - 1);
//     if (checkPallendrome)
//     {
//         cout << "String is Pallendrome" << endl;
//     }
//     else
//     {
//         cout << "String is not Pallendrome" << endl;
//     }

//     return 0;
// }
// Finding Exponent Using Recursion
// #include <iostream>
// using namespace std;
// int Exp(int a, int b)
// {
//     // base case
//     if (b == 0)
//     {
//         return 1;
//     }
//     if (b == 1)
//     {
//         return a;
//     }
//     int ans = Exp(a, b / 2);
//     if (b % 2 == 0)
//     {
//         return ans * ans;
//     }
//     else
//     {
//         return a * ans * ans;
//     }
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     int ans = Exp(a, b);
//     cout << "The ans is " << ans << endl;
//     return 0;
// }
// Selection Sort
// #include <iostream>
// using namespace std;
// #include <vector>
// void SelectionSort(vector<int> &arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[minIndex])
//             {
//                 minIndex = j;
//             }
//         }
//         swap(arr[minIndex], arr[i]);
//     }
// }
// // Bubble Sort using Recursion
// #include <iostream>
// using namespace std;
// void BubbleRec(int arr[], int size)
// {
//     int j = 0;
//     // base case--already sorted
//     if (size == 0 || size == 1)
//     {
//         return;
//     }
//     // largest elemnt end mein gya
//     for (int j = 0; j < size - 1; j++)
//     {
//         if (arr[j] > arr[j + 1])
//         {
//             swap(arr[j + 1], arr[j]);
//         }
//     }
//     BubbleRec(arr, size - 1);
// }
// void print(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr[5] = {4, 1, 2, 6, 3};
//     BubbleRec(arr, 5);
//     print(arr, 5);
//     return 0;
// }
// Merge Sort
// #include <iostream>
// using namespace std;

// void merge(int arr[], int s, int e)
// {
//     int mid = (s + e) / 2;

//     // length of left part of array
//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     // Creating a new array in heap having length len1
//     int *first = new int[len1];
//     // creating a new array in heap having length len2
//     int *second = new int[len2];

//     // copy values
//     // The sorted values will copy in first array
//     int mainArrayIndex = s;
//     for (int i = 0; i < len1; i++)
//     {
//         first[i] = arr[mainArrayIndex++];
//     }

//     // The sorted values will copy in second array
//     mainArrayIndex = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         second[i] = arr[mainArrayIndex++];
//     }

//     // merge 2 sorted arrays
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = s;

//     while (index1 < len1 && index2 < len2)
//     {
//         if (first[index1] < second[index2])
//         {
//             arr[mainArrayIndex++] = first[index1++];
//         }
//         else
//         {
//             arr[mainArrayIndex++] = second[index2++];
//         }
//     }
//     while (index1 < len1)
//     {
//         arr[mainArrayIndex++] = first[index1++];
//     }
//     while (index2 < len2)
//     {
//         arr[mainArrayIndex++] = second[index2++];
//     }

//     // delete[] first;
//     // delete[] second;
// }

// void mergeSort(int arr[], int s, int e)
// {

//     // base case
//     if (s >= e)
//     {
//         return;
//     }

//     int mid = (s + e) / 2;
//     // left part sort krna h
//     mergeSort(arr, s, mid);

//     // right part sort krna h
//     mergeSort(arr, mid + 1, e);

//     // sorting ke baad merge krdo
//     merge(arr, s, e);
// }

// int main()
// {
//     int arr[5] = {2, 4, 1, 3, 5};
//     int n = 5;

//     mergeSort(arr, 0, n - 1);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// // Quick Sort
// #include <iostream>
// using namespace std;

// int partition(int arr[], int s, int e)
// {
//     // find a pivot
//     int pivot = arr[s];

//     // Count the elements lesser than pivot
//     int cnt = 0;
//     for (int i = s + 1; i <= e; i++)
//     {
//         if (arr[i] <= pivot)
//         {
//             cnt++;
//         }
//     }

//     // place the pivot to the right place
//     int pivotIndex = s + cnt;
//     swap(arr[pivotIndex], arr[s]); // Anything which is on start index is now placed on pivotIndex

//     // Take two variables
//     // i and j
//     // i is to check the left part if it is lesser than the pivot element
//     // j is to check the right part if it is greater than the pivot element
//     int i = s;
//     int j = e;
//     while (i < pivotIndex && j > pivotIndex)
//     {
//         while (arr[i] <= arr[pivotIndex])
//         {
//             i++;
//         }
//         while (arr[j] >= arr[pivotIndex])
//         {
//             j--;
//         }
//         if (i < pivotIndex && j > pivotIndex)
//         {
//             swap(arr[i++], arr[j++]);
//         }
//     }
//     return pivotIndex;
// }

// void quickSort(int arr[], int s, int e)
// {
//     // base case
//     if (s >= e)
//     {
//         return;
//     }

//     // Partition
//     int p = partition(arr, s, e);

//     // Recursive call
//     quickSort(arr, s, p - 1);
//     quickSort(arr, p + 1, e);
// }

// int main()
// {

//     int arr[5] = {2, 5, 3, 1, 4};
//     int size = 5;
//     quickSort(arr, 0, size - 1);

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
// Subsets or Power set
// class Solution
// {
// private:
//     void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
//     {
//         // base case
//         if (index >= ans.size())
//         {
//             ans.push_back(output);
//             return;
//         }

//         // exclude
//         solve(nums, output, index + 1, ans);

//         // include
//         int element = nums[index];
//         output.push_back(element);
//         solve(nums, output, index + 1, ans);
//     }

// public:
//     vector<vector<int>> subsets(vector<int> &nums)
//     {
//         vector<vector<int>> ans;
//         vector<int> output;
//         int index = 0;
//         solve(nums, output, index, ans);
//         return ans;
//     }
// };

// Substring of a string
// class Solution
// {
// private:
//     void solve(vector<int> str, vector<int> output, int index, vector<vector<int>> &ans)
//     {
//         // base case
//         if (index >= ans.length())
//         {
//             ans.push_back(output);
//             return;
//         }

//         // exclude
//         solve(str, output, index + 1, ans);

//         // include
//         int element = str[index];
//         output.push_back(element);
//         solve(str, output, index_1, ans);
//     }

// public:
//     vector<vector<int>> subsequence(vector<int> &str)
//     {
//         vector<vector<int>> ans;
//         vector<int> output;
//         int index = 0;
//         solve(str, output, index, ans);
//         return ans;
//     }
// };
//

// Phone keypad problem
//  class Solution
//  {
//  private:
//      voi solve(string digit, string output, int index, vector<string>& ans, string mapping[])
//      {
//          // base case
//          if (index >= digit.length())
//          {
//              ans.push_back(output);//dg//dh//di
//              return;
//          }

//         int number = digit[index] - '0'; // firstly where the index point on the string minus it by 0 so that it give a number//let say 3//4
//         string value = mapping[number];  // now getting the mapped string from the mapping araray//3-->"def"//"ghi"

//         for (int i = 0; i < value.length(); i++) //1//1//2//3// iterate the loop till the length of the string i.e. "abc" means loop will iterate 3 times
//         {
//             output.push_back(value[i]);          //d   //"dg" //"dh"  //"di"    // putting the value of first index of the string in the output
//             solve(digit, output, index + 1, ans, mapping);//index=2 //dg // again call the solve function by increasing the indexi.e if the number is "23", now index will go to 3
//             output.pop_back();     //d  //d     //d                 // Now, delete the element from the string
//         }
//     }

// public:
//     vector<string> letterCombinations(string digits)
//     {
//         vector<string> ans; // the output having return type vector string
//         if (digit.length() == 0)
//         {
//             return ans;
//         }
//         string output = " ";
//         int index = 0;
//         string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}; // Mapping the alphabets witht the number i.e by index

//         solve(digits, output, index, ans, mapping);
//         return ans;
//     }
// }
// Permutation of a string
// class Solution
// {
// private:
//     void solve(vector<int> nums, vector<vector<int>> &ans, int index)
//     {
//         // base case
//         if (index >= nums.size())
//         {
//             ans.push_back(nums); // nums ke uper hi operations ho rhe h
//             return;
//         }

//         for (int j = index; j < nums.size(); j++) // here j=0
//         {
//             swap(nums[index], nums[j]);  // swapping nums[0] with the same//yaha pe abhi j=0 hi h jb recursive call khtm hogi fr j will increase
//             solve(nums, ans, index + 1); // recursive call---ab yeh chlegi pehle//index=1
//             // backtrack
//             swap(nums[index], nums[j]);
//         }
//     }

// public:
//     vector<vector<int>> permute(vector<int> &nums)
//     {
//         vector<vector<int>> ans; // Array ke andar array hoyenge
//         int index = 0;
//         solve(nums, ans, index);
//         return ans;
//     }
// };

// rat in maze problem
class Solution
{
private:
    bool IsSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m)
    {
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && (visited[x][y] == 0) && m[x][y] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path)
    {
        // you have reached  x and y here

        // base case
        if (x == n && y == n)
        {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;

        // 4 choices--D, L, R , U

        // down
        int newx = x + 1;
        int newy = y;
        if (IsSafe(newx, newy, n, visted, m))
        {
            path.push_back('D');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // left
        newx = x;
        newy = y - 1;
        if (IsSafe(newx, newy, n, visted, m))
        {
            path.push_back('L');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // right
        newx = x;
        newy = y + 1;
        if (IsSafe(newx, newy, n, visted, m))
        {
            path.push_back('R');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // up
        newx = x - 1;
        newy = y;
        if (IsSafe(newx, newy, n, visted, m))
        {
            path.push_back('U');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        visited[x][y] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<string> ans;

        if (m[0][0] == 0)
        {
            return ans;
        }

        int srcx = 0;
        int srcy = 0;

        vector<vector<int>> visited = m;
        // Initialise with 0

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }

        string path = " ";
        solve(m, n, ans, srcx, srcy, visited, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
}