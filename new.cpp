// #include <iostream>
// using namespace std;
// int compliment(int num)
// {
//     int mask = 1;
//     while (mask < num)
//     {
//         mask = (mask << 1) | 1;//odd number
//     }
//     return num ^ mask;
// }
// int main()
// {
//     int a;
//     cout << "Enter a number: ";
//     cin >> a;
//     int findComp = compliment(a);
//     cout << "Compliment of number " << a << " is " << findComp << endl;
//     return 0;
// }
//--------------------------------------POWER OF TWO
// #include <iostream>
// using namespace std;

// bool isPowerOf2(int n){
//     if(n<=0){
//         return false;
//     }
//     return (n&(n-1))==0;
// }
// int main()
// {

//     int n;
//     cout << "Enter an integer ";
//     cin >> n;

//     if(isPowerOf2(n)){
//         cout<<n<<" is a power of two."<<endl;
//     }
//     else{
//          cout<<n<<" is not a power of two."<<endl;
//     }
//     return 0;
// }
// Linear search
// #include <iostream>
// using namespace std;
// int search(int arr[], int len, int x)
// {
//     int i;
//     for (i = 0; i < len; i++)

//     {
//         if (x == arr[i])
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[6] = {1, 2, 3, 4, 5};
//     int len = sizeof(arr) / sizeof(arr[0]);
//     int search_element = search(arr, len, 50);
//     cout << "The element is present at index: " << search_element << endl;
//     return 0;
// }
// Find Unique element
// #include <iostream>
// using namespace std;
// int unique_1(int arr[], int n)
// {
//     int unique = 0;
//     for (int i = 0; i < n; i++)
//     {
//         unique ^= arr[i];
//     }
//     return unique;
// }
// int main()
// {
//     int arr[] = {1, 1, 3, 3, 6};
//     int len = sizeof(arr) / sizeof(arr[0]);
//     int unique_element = unique_1(arr, len);
//     cout << "The unique element is " << unique_element << endl;
//     return 0;
// }
// find Duplicate element
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 1, 4, 4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j] && i != j)
//             {
//                 cout << "The duplicate element is " << arr[i] << endl;
//             }
//         }
//     }

//     return 0;
// }
// Find intersection of 2 arrays
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr1[] = {1, 2, 3, 9, 5};
//     int arr2[] = {2, 7, 8, 9, 6};
//     int len1 = sizeof(arr1) / sizeof(arr1[0]);
//     int len2 = sizeof(arr2) / sizeof(arr2[0]);
//     for (int i = 0; i < len1; i++)
//     {
//         for (int j = 0; j < len2; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 cout << "The intersecting element is " << arr1[i] << endl;
//             }
//         }
//     }

//     return 0;
// }
// Binary search
// #include <iostream>
// using namespace std;
// int binarySearch(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     // int mid=(start+end)/2
//     int mid = start + (end - start) / 2; // More optimised
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return -1;
// }
// int main()
// {
//     int arr[6] = {1, 2, 3, 7, 8};
//     int bn = binarySearch(arr, 6, 0);
//     cout << "The element is present at index " << bn << endl;
//     return 0;
// }

// Find first occurence and last occurence of an elemnt in an sorted array
// #include <iostream>
// using namespace std;
// int firstOcc(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = mid = start + (end - start) / 2;
//     int ans = 0;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else if (key < arr[mid])
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }
// int lastOcc(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = mid = start + (end - start) / 2;
//     int ans = 0;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         else if (key < arr[mid])
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }
// int main()
// {
//     int arr[8] = {1, 2, 3, 4, 4, 6, 8};
//     int first = firstOcc(arr, 8, 4);
//     cout << "The first occurence of 4 is at index " << first << endl;
//     int last = lastOcc(arr, 8, 4);
//     cout << "The first occurence of 4 is at index " << last << endl;
//     return 0;
// }
// find the peak index in an mountain array
// #include <iostream>
// using namespace std;
// int peak(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start) / 2;
//     while (start < end)
//     {
//         if (arr[mid] < arr[mid + 1])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid;
//         }

//         mid = start + (end - start) / 2;
//     }
//     return mid;
// }
// int main()
// {
//     int arr[4] = {3, 4, 5, 1};
//     int peak_element = peak(arr, 4, 5);
//     cout << "The peak element is present at index " << peak_element << endl;
//     return 0;
// }
// Find pivot in an array
// #include <iostream>
// using namespace std;
// int pivot(int arr[], int n)
// {
//     int start = 0;
//     int end = n - 1;
//     int mid = start + (end - start) / 2;
//     while (start < end)
//     {
//         if (arr[mid] >= arr[0])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid;
//         }
//         mid = start + (end = start) / 2;
//     }
//     return end;
// }
// int main()
// {
//     int arr[6] = {9, 7, 1, 2, 3};

//     cout << "The pivot eement is present at index " << pivot(arr, 6) << endl;
//     return 0;
// }
//-----Find an element in a sorted and rotated array(IMP)
// #include <iostream>
// using namespace std;
// int getPivot(int arr[], int n)
// {
//     int start = 0;
//     int end = n - 1;
//     int mid = start + (end - start) / 2;
//     while (start < end)
//     {
//         if (arr[mid] >= arr[0])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return end;
// }
// int binarySearch(int arr[], int s, int e, int key)
// {
//     int start = s;
//     int end = e;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         if (key < arr[mid])
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return -1;
// }
// int search_element(int arr[], int n, int k)
// {
//     int pivot = getPivot(arr, n);
//     if (k >= arr[pivot] && k <= arr[n - 1])
//     {
//         return binarySearch(arr, pivot, n - 1, k);
//     }
//     else
//     {
//         return binarySearch(arr, 0, pivot - 1, k);
//     }
// }
// int main()
// {
//     int arr[5] = {7, 9, 1, 2, 3};
//     cout << "The key is present at index " << search_element(arr, 5, 2) << endl;
//     return 0;
// }
//-----Find square root of a number using binary search
// #include <iostream>
// using namespace std;
// long long int square(int num)
// {
//     int s = 0;
//     int e = num;
//     long long int mid = s + (e - s) / 2;
//     long long int ans = -1;
//     while (s <= e)
//     {
//         int numSquare = mid * mid;
//         if (numSquare == num)
//         {
//             return mid;
//         }
//         if (numSquare < num)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }
// int main()
// {
//     int num = 16;
//     cout << "The square root of the num is " << square(num) << endl;
//     return 0;
// }
// FInd square root of a number with precision
// #include <iostream>
// using namespace std;
// long long int squareInteger(int num)
// {
//     int s = 0;
//     int e = num;
//     long long int mid = s + (e - s) / 2;
//     long long int ans = -1;
//     while (s <= e)
//     {
//         int numSquare = mid * mid;
//         if (numSquare == num)
//         {
//             return mid;
//         }
//         if (numSquare < num)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }
// double MorePrecisionIn(int n, int precision, int tempsol)
// {
//     double factor = 1;
//     double ans = tempsol;
//     for (int i = 0; i < precision; i++)
//     {
//         factor = factor / 10;
//         for (double j = ans; j * j < n; j = j + factor)
//         {
//             ans = j;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cout << "Enter a number ";
//     cin >> n;
//     int tempSol = squareInteger(n);
//     cout << "Answer is " << MorePrecisionIn(n, 3, tempSol);
//     return 0;
// }
//------------------------------------BOOK ALLOCATION PROBLEM
// #include <iostream>
// using namespace std;
// bool IsPossibleSol(int arr[], int n, int m, int mid)
// {
//     int studentCount = 1;
//     int PageSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (PageSum + arr[i] <= mid)
//         {
//             PageSum += arr[i];
//         }
//         else
//         {
//             studentCount++;
//             if (studentCount > m || arr[i] > mid)
//             {
//                 return false;
//             }
//             PageSum = arr[i]; // tbU
//         }
//     }
//     return true;
// }
// int min_pages(int arr[], int n, int m)
// {
//     int start = 0;
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     int end = sum;
//     int mid = start + (end - start) / 2;
//     int ans = -1;
//     while (start <= end)
//     {
//         if (IsPossibleSol(arr, n, m, mid))
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }
// int main()
// {

//     int NoOfStudents = 2;
//     int arr[4] = {5, 5, 5, 5};

//     cout << "The min number of book allocated to a  student is " << min_pages(arr, 4, 2) << endl;
//     return 0;
// }
//--------------------------------PAINTER PARTITION PROBLEM
// #include <iostream>
// using namespace std;
// bool isPossibleSol(int arr[], int board, int painter, int mid)
// {
//     int PainterNumber = 1;
//     int BoardNum = 0;
//     for (int i = 0; i < board; i++)
//     {
//         if (BoardNum + arr[i] <= mid)
//         {
//             BoardNum += arr[i];
//         }
//         else
//         {
//             PainterNumber++;
//             if (PainterNumber > painter || arr[i] > mid)
//             {
//                 return false;
//             }
//             BoardNum = arr[i];
//         }
//     }
//     cout << "Painter 2 " << BoardNum << endl;
//     return true;
// }
// int min_time(int arr[], int board, int painter)
// {
//     int start = 0;
//     int sum = 0;
//     for (int i = 0; i < board; i++)
//     {
//         sum += arr[i];
//     }
//     int end = sum;
//     int ans = -1;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if (isPossibleSol(arr, board, painter, mid))
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }
// int main()
// {
//     int painter = 2;
//     int arr[4] = {10, 20, 30, 40};
//     cout << "The Board allocated to one of the painter so that it takes minimum time will be " << min_time(arr, 4, 2) << endl;

//     return 0;
// }

// Agressive cows

//---------------------SELECTION SORT
// #include <iostream>
// using namespace std;
// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }
// void selSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int min_idx = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[min_idx] > arr[j])
//             {
//                 min_idx = j;
//             }
//         }
//         swap(&arr[min_idx], &arr[i]);
//     }
// }
// int printArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int arr[] = {1, 4, 6, 7, 3, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     selSort(arr, size);
//     printArr(arr, size);
//     return 0;
// }
// Binary Sort
// Time complexity O(n^2)
// #include <iostream>
// using namespace std;
// void bubbleSort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }
// int printArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int arr[5] = {1, 3, 6, 4, 2};
//     bubbleSort(arr, 5);
//     printArr(arr, 5);
//     return 0;
// }
// Optimised solution of time complexity O(n)
// #include <iostream>
// using namespace std;
// void bubbleSort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         bool IsSwapped = false;
//         for (int j = 0; j < n - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 IsSwapped = true;
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//         if (IsSwapped == false)
//         {
//             break;
//         }
//     }
// }
// int printArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//         cout << endl;
//     }
// }
// int main()
// {
//     int arr[5] = {1, 3, 6, 3, 2};
//     bubbleSort(arr, 5);
//     printArr(arr, 5);
//     return 0;
// }
// Insertion Sort
// #include <iostream>
// using namespace std;
// void InsertionSort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;
//         while (j >= 0)
//         {
//             if (arr[j] > temp)
//             {
//                 arr[j + 1] = arr[j]; // L TO R
//             }
//             else
//             {
//                 break;
//             }
//             j--;
//         }
//         arr[j + 1] = temp; // R TO L
//     }
// }
// int printArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int arr[5] = {4, 6, 2, 3, 9};
//     InsertionSort(arr, 5);
//     printArr(arr, 5);
//     return 0;
// }

// STL

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v;
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(8);
//     v.push_back(6);
//     v.push_back(0);
//     cout << "Finding 6->" << binary_search(v.begin(), v.end(), 6) << endl;
//     // to be understand
//     cout << "lower bound" << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
//     cout << "upper bound" << upper_bound(v.begin(), v.end(), 2) - v.begin() << endl;

//     int a = 5;
//     int b = 3;
//     cout << "max " << max(a, b) << endl;
//     cout << "min " << min(a, b) << endl;
//     swap(a, b);
//     cout << a << " " << b << endl;

//     string abcd = "abcd";
//     reverse(abcd.begin(), abcd.end());
//     cout << "string " << abcd << endl;

//     rotate(v.begin(), v.begin() + 1, v.end());
//     cout << "after rotation " << endl;
//     for (int i : v)
//     {
//         cout << i << " ";
//     }

//     sort(v.begin(), v.end());//Based on intro sort-> combo of 3 sort -> quicksort,heap sort and insertion sort
//     cout << "after sort" << endl;
//     for (int i : v)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }

// REVRSE AN ARRAY
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> reverse(vector<int> v, int m)
// {
//     int s = m + 1;
//     int e = v.size() - 1;
//     while (s <= e)
//     {
//         swap(v[s], v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }
// void printArr(vector<int> v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     vector<int> v;
//     v.push_back(2);
//     v.push_back(8);
//     v.push_back(9);
//     v.push_back(5);
//     v.push_back(6);

//     vector<int> ans = reverse(v, 2);
//     printArr(ans);
//     return 0;
// }

// MERGE 2 SORTED ARRAY
// #include <iostream>
// #include <vector>
// using namespace std;

// void mergeArr(int arr1[], int n, int arr2[], int m, int arr3[])
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;

//     while (i < n && j < m)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             arr3[k++] = arr1[i++];
//         }
//         else
//         {
//             arr3[k++] = arr2[j++];
//         }
//     }
//     while (i < n)
//     {
//         arr3[k++] = arr1[i++];
//     }
//     while (j < m)
//     {
//         arr3[k++] = arr2[j++];
//     }
// }
// int printArr(int arr3[], int x)
// {
//     for (int i = 0; i < x; i++)
//     {
//         cout << arr3[i] << " ";
//     }
// }
// int main()
// {
//     int arr1[5] = {1, 3, 5, 7, 9};
//     int arr2[3] = {2, 4, 6};
//     int arr3[8] = {};
//     mergeArr(arr1, 5, arr2, 3, arr3);
//     printArr(arr3, 8);
//     return 0;
// }

// Merge 2 sorted arrays and put it into one nt into a new one
// #include <iostream>
// using namespace std;
// void mergeArr(int arr1[], int n, int arr2[], int m)
// {
//     int i = 0, j = 0;
//     while (i < n && j < m)
//     {
//         if (arr1[i] > arr2[j])
//         {
//             arr1[i + 1] = arr1[i];
//         }
//         else
//         {
//             i++;
//             break;
//         }
//         arr1[i] = arr2[j];
//         i++;
//         j++;
//     }
// while (i < n)
// {
//     arr1[i + 1] = arr1[i];
//     i++;
//     j++;
// }

// while (j < m)
// {
//     arr1[i] = arr2[j];
//     i++;
//     j++;
// }
// }
// int printArr(int arr1[], int x)
// {
//     for (int i = 0; i < x; i++)
//     {
//         cout << arr1[i] << " ";
//     }
// }
// int main()
// {
//     int arr1[6] = {1, 3, 5};
//     int arr2[3] = {2, 4, 6};
//     mergeArr(arr1, 6, arr2, 3);
//     printArr(arr1, 6);
//     return 0;
// }
// ROTATE ARRAY
// #include <iostream>
// #include <vector>
// using namespace std;
// void rotate(vector<int> &nums, int k)
// {
//     vector<int> temp(nums.size());
//     for (int i = 0; i < nums.size(); i++)
//     {
//         temp[(i + k) % nums.size()] = nums[i];
//     }
//     nums = temp;
// }
// CHECK IF SORTED AND ROTATED ARRAY
// #include <iostream>
// #include <vector>
// using namespace std;
// bool check(vector<int> &nums)
// {
//     int count = 0;
//     int n = nums.size();
//     for (int i = 1; i < nt; i++)
//     {
//         if (nums[i - 1] > nums[i])
//         {
//             count++;
//         }
//     }
//     if (nums[n - 1] > num[0])
//     {
//         count++;
//     }
//     return count <= 1;
// }

// sum of two arrays
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> reverse(vector<int> sum)
// {
//     int start = 0;
//     int end = sum.size() - 1;
//     while (start <= end)
//     {
//         swap(sum[start], sum[end]);
//     }
// }
// vector<int> findArr(vector<int> &a, int n, vector<int> &b, int m)
// {
//     int i = n - 1;
//     int j = m - 1;
//     vector<int> ans;
//     int carry = 0;
//     while (i >= 0 && j >= 0)
//     {
//         int val1 = a[i];
//         int val2 = b[j];
//         sum = val1 + val2 + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//         i--;
//         j--;
//     }
//     // first case
//     while (i >= 0)
//     {
//         int sum = a[i] + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//         i--;
//     }
//     // second case
//     while (j >= 0)
//     {
//         int sum = b[j] + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//         j--;
//     }
//     // third case
//     while (carry != 0)
//     {
//         int sum = carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//     }
//  return reverse(sum);
// }

// char arrays, strings
// #include <iostream>
// using namespace std;
// To find length of the string
// int len(char arr[])
// {
//     int count = 0;
//     int i = 0;
//     while (arr[i] != '\0')
//     {
//         count++;
//         i++;
//     }
//     return count;
// }
// to reverse a string
// void reverse(char arr[], int size)
// {
//     int s = 0;
//     int end = size - 1;
//     while (s < end)
//     {
//         swap(arr[s], arr[end]);
//         s++;
//         end--;
//     }
// }
// int main()
// {
//     char name[20];
//     cout << "Enter your name " << endl;
//     cin >> name;
// name[2] = '\0';
//     cout << "You name is ";
//     cout << name << endl;
//     int length = len(name);
//     cout << "The length of the string is " << len(name) << endl;
//     reverse(name, length);
//     cout << "reversed name " << name << endl;
//     return 0;
// }
// check if the string is pallendrome
// #include <iostream>
// using namespace std;
// int len(char arr[])
// {
//     int count = 0;
//     int i = 0;
//     while (arr[i] != '\0')
//     {
//         count++;
//         i++;
//     }
//     return count;
// }
// bool pallendromeOrNot(char arr[], int length)
// {
//     int start = 0;
//     int end = length - 1;
//     while (start <= end)
//     {
//         if (arr[start] == arr[end])
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//         start++;
//         end--;
//     }
// }

// int main()
// {
//     char name[20];
//     cout << "Enter your name " << endl;
//     cin >> name;
//     int length = len(name);
//     cout << "String is pallendrome or not : " << pallendromeOrNot(name, length) << endl;

//     return 0;
// }
// valid pallendrome---not case sensitive , special characters are ignored
// #include <iostream>
// #include <string.h>
// using namespace std;
// bool valid(char ch)
// {
//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && xh <= '9'))
//     {
//         return 1;
//     }
//     return 0;
// }
// char toLowercase(char ch)
// {
//     if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= 9))
//     {
//         return ch;
//     }
//     else
//     {
//         char temp = ch = 'A' + 'a';
//         return temp;
//     }
// }
// bool checkPalendrome(string a){
//     int s=0;
//     int e=a.length()-1;
//     while(s<=e){
//         if(a[s]!=a[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }

// bool isPallendrome(string s)
// {
//     // faltu char hatado
//     string temp = " ";
//     for (int j = 0; j < s.length(); j++)
//     {
//         if (valid(s[j]))
//         {
//             temp.push_back(s[j]);
//         }
//     }
//     for (int j = 0; j < temp.length(); j++)
//     {
//         temp[j] = toLowercase(temp[j]);
//     }
// }

// Revesrse words in a given string

// #include <bits/stdc++.h>
// using namespace std;

// Function to reverse the string
// string reverseString(string str)
// {
// Reverse string using inbuilt functions
// reverse(str.begin(), str.end());
// str.insert(str.end(), ' ');
// int n = str.length();
// int j = 0;
// Find spaces and reverse all the words before that
// for (int i = 0; i < n; i++)
// {
// If space is encountered
// if (str[i] == ' ')
// {
//     reverse(str.begin() + j, str.begin() + i);
// Updating the starting index for the next word to  reverse
//         j = i + 1;
//     }
// }
// Remove spaces from the end of the word that we appended
//     str.pop_back();
//     return str;
// }

// int main()
// {
//     string str = "I like this code";
//     string rev = reverseString(str);
//     cout << rev;
//     return 0;
// }

// Maximum occuring character
// #include <iostream>
// using namespace std;
// char getMaxOccChar(string s)
// {
//     int arr[26] = {0};
//     // create an array of count of characters
//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         int number = 0;
//         // lowercase
//         if (ch >= 'a' && ch <= 'z')
//         {
//             number = ch - 'a';
//         }
//         else
//         { // uppercase
//             number = ch - 'A';
//         }
//         arr[number]++;
//     }
//     // find max occuring character
//     int maxi = -1, ans = 0;
//     for (int i = 0; i < 26; i++)
//     {
//         if (maxi < arr[i])
//         {
//             ans = i;
//             maxi = arr[i];
//         }
//     }
//     char finalAns = 'a' - ans;
//     return finalAns;
// }
// int main()
// {

//     return 0;
// }

// Remove all spaces and print @40 at the place

// #include <iostream>
// using namespace std;
// string removeSpaces(string &str)
// {
//     string temp = "";
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] = ' ')
//         {
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else
//         {
//             temp.push_back(s[i]);
//         }
//     }
// }
// int main()
// {
//     return 0;
// }

// Remove all occurance of substring
// #include <iostream>
// using namespace std;
// string removeOcc(string s, string part)
// {
//     while (s.length() != 0 && s.find(part) < s.length())
//     {
//         s.erase(s.find(part), part.length());
//     }
//     return s;
// }
// int main()
// {

//     return 0;
// }

// Permutation of string
// #include <iostream>
// #include <vector>
// using namespace std;
// class solution
// {
// public:
//     int compress(vector<char> &chars)
//     {
//         int i = 0;
//         int ansIndex = 0;
//         int n = chars.size();
//         while (i < n)
//         {
//             int j = i + 1;
//             while (j < n && chars[i] == chars[j])//check kiya ki adjacent characters same h ya nhi agr h toh loop chalega
//             {
//                 j++;
// }
// Ab loop se bahar aye toh mtlb ya toh hmne count bda diya h ya hme adjacent character same nhi mile toh 1 place ya index aage bdha do
//             chars[ansIndex++] = char[i];
//             int count = j - 1;
//             if (count > 1)
//             {
//                 string cmt = to_string(count);
//                 for (char ch : cmt)
//                 {
//                     chars[ansIndex++] = ch;
//                 }
//             }
//             i = j;
//         }
//         return ansIndex;
//     }
// };
// int main()
// {

//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std; // Adding the std namespace

// Function to compress a vector of characters in-place
// int compress(vector<char>& chars) {
//     int ans = 0; // Variable to keep track of the compressed vector length

// Iterate through input vector using i pointer
// for (int i = 0; i < chars.size();) {
//     const char letter = chars[i]; // Current character being compressed
//     int count = 0; // Count of consecutive occurrences of the letter

// Count consecutive occurrences of the letter in the input vector
// while (i < chars.size() && chars[i] == letter) {
//     ++count;
//     ++i;
// }

// Write the letter to the compressed vector
// chars[ans++] = letter;

// If count is greater than 1, write count as a string to the compressed vector
// if (count > 1) {
// Convert count to a string and iterate over each character in the string
//         for (const char c : to_string(count)) {
//             chars[ans++] = c;
//         }
//     }
// }

// Return the length of the compressed vector
//     return ans;
// }

// int main() {
// Example vector
// vector<char> inputVector = {'a', 'b', 'b', 'c', 'c', 'c'};

// Call the compress function
// int compressedLength = compress(inputVector);

// Display the compressed vector and its length
//     cout << "Compressed Vector: ";
//     for (int i = 0; i < compressedLength; ++i) {
//         cout << inputVector[i] << " ";
//     }
//     cout << "\nCompressed Vector Length: " << compressedLength << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std ;
// int factorial(int n){
//     //base case
//     if(n==1){
//         return 1;
//     }
//     if(n==0){
//         return 1;
//     }
//     return (n*factorial(n-1));
// }
// int main() {
//     int num;
//     cin >>num;
//     int fact=factorial(num);
//     cout<<"The factorial is "<<fact<<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// void merge(int arr1[], int n, int arr2[], int m, int arr3[])
// {

//     int index1 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         arr3[index1] = arr1[i];
//     }

//     int index2 = 0;
//     for (int i = 0; i < m; i++)
//     {
//         arr3[index2] = arr2[i];
//     }

//     int mainArrIndex = 0;
//     while (index1 < n && index2 < m)
//     {

//         if (arr1[index1] < arr2[index2])
//         {
//             arr3[mainArrIndex++] = arr1[index1++];
//         }
//         else
//         {
//             arr3[mainArrIndex++] = arr2[index2++];
//         }
//     }
//     while (index1 < n)
//     {
//         arr3[mainArrIndex++] = arr1[index1++];
//     }
//     while (index2 < m)
//     {
//         arr3[mainArrIndex++] = arr2[index2++];
//     }
// }
// void printArr(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr1[4] = {1, 2, 5, 6};
//     int n = 4;
//     int arr2[3] = {3, 6, 7};
//     int m = 3;
//     int arr3[7];
//     merge(arr1, n, arr2, m,arr3);
//     printArr(arr3, 7);
//     return 0;
// }

// Book Allocation Problem
// #include <iostream>
// using namespace std;
// bool IsPossibleSol(int arr[], int n, int m, int mid)//checking mid if it is a possible solution or not
// {
//     int studentCount = 1;
//     int PageSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (PageSum + arr[i] <= mid)
//         {
//             PageSum += arr[i];
//         }
//         else
//         {
//             studentCount++;
//             if (studentCount > m || arr[i] > mid)
//             {
//                 return false;
//             }
//             PageSum = arr[i]; // tbU
//         }
//     }
//     return true;
// }
// int min_pages(int arr[], int n, int m)//m--> students, n---> books
// {
//     int start = 0;
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     int end = sum;
//     int mid = start + (end - start) / 2;//half the books//search space
//     int ans = -1;
//     while (start <= end)
//     {
//         if (IsPossibleSol(arr, n, m, mid))
//         {
//             ans = mid;//You got possible solution so u stored it, now you can go back and check-->kyuki min no of pages nikalna h
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }
// int main()
// {

//     int NoOfStudents = 2;
//     int arr[4] = {5, 5, 5, 5};

//     cout << "The min number of book allocated to a  student is " << min_pages(arr, 4, 2) << endl;
//     return 0;
// }
// Given that there are N books and M students. Also, given are the number of pages in each book in ascending order. The task is to assign the books in such a way that the maximum number of pages assigned to a student is minimum, with the condition that every student is assigned to read some consecutive books. Print the minimum number of pages.

// #include <iostream>
// using namespace std;

// bool isPossibleSol(int arr[], int n, int m, int mid)
// {
//     int pageSum = 0;
//     int studentCount = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (pageSum + arr[i] <= mid)
//         {
//             pageSum += arr[i];
//         }
//         else
//         {
//             studentCount++;
//             if (studentCount > m || arr[i] > mid)
//             {
//                 return false;
//             }
//             pageSum = arr[i];
//         }
//     }
//     return true;
// }

// int minPages(int arr[], int m, int n)
// {
//     int start = 0;
//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     int end = sum;
//     int mid = (end + start) / 2;
//     int ans = -1;
//     while (start <= end)
//     {
//         if (isPossibleSol(arr, n, m, mid))
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//         mid = (end + start) / 2;
//     }
//     return ans;
// }

// int main()
// {
//     int NoOfStudents = 2;
//     int arr[4] = {10, 20, 23, 30};
//     cout << "The minimum number of pages allocated to a student is " << minPages(arr, 2, 4);
//     return 0;
// }
// printing numbers 1 to n using recursion
// #include <iostream>
// using namespace std;

// void print(int N)
// {
//     if (N > 0)
//     {
//         cout << N << endl;
//         print(N - 1);

//     }
// }

// int main()
// {
//     int N;
//     cout << "Enter the number" << endl;
//     cin >> N;
//     print(N);
// }
// Calculating mean using recursion
// #include <iostream>
// using namespace std;
// int Sum(int arr[], int size)
// {
//     // base case
//     if (size <= 0)
//     {
//         return 0;
//     }
//     // rec call
//     return arr[size - 1] + Sum(arr, size - 1);
// }

// double mean(int arr[], int size)
// {
//     int SumOfElements = Sum(arr, size);

//     return static_cast<double>(SumOfElements / size);
// }
// int main()
// {
//     int arr[4] = {1, 1, 4, 5};
//     int size = (sizeof(arr) / sizeof(arr[0]));
//     double Mean = mean(arr, size);
//     cout << Mean << endl;
//     // cout << SumOfElement << endl;
//     // int mean = SumOfElement / TotalElement;
//     // cout<<"The mean of the array is "<<mean<<endl;

//     return 0;
// }

#include<iostream> using namespace std; int main(){
int a,b;
cout<<"Enter the size of array: "; cin>>a>>b;
int arr[a][b];
cout<<"Enter the elemnts: "; for(int i =0;i<a;i++){
for(int j =0;j<b;j++){ cin>>arr[i][j];
}
}
for(int i =0;i<a;i++){ for(int j =0;j<b;j++){
cout<<arr[i][j];
}
cout<<endl;
}
//Searching
int searchvalue;
cout<<"Enter the number to be searched "; cin>>searchvalue;
for (int i = 0; i < a; i++) { for (int j = 0; j < b; j++) {
if (arr[i][j] == searchvalue) { cout<<"found at position "<<i<<j;
 
}
}
}

//Sum

int sum=0;
for(int i =0;i<a;i++){ for(int j =0;j<b;j++){
sum+=arr[i][j];
}

}
cout<<endl;
cout<<"The sum of all elements is "<<sum<<endl; 

//Insertion

cout<<"Enter the value to be inserted and its position "<<endl;
int insertRow , insertCol , insertValue ; cin>>insertValue>>insertRow>>insertCol;
if (insertRow >= 0 && insertRow < a && insertCol >= 0 && insertCol < b) {
arr[insertRow][insertCol] = insertValue;
} else {
cout << "Invalid position!" << endl;
}

// Traversal after insertion
cout << "Array traversal after insertion:" << endl; for (int i = 0; i < a; i++) {
for (int j = 0; j < b; j++) { cout << arr[i][j] ;
}
cout << endl;
}
//Deletion
cout<<"Enter the position of element to be deleted ";

int deleteRow , deleteCol ; cin>>deleteRow>>deleteCol;
if (deleteRow >= 0 && deleteRow < a && deleteCol >= 0 && deleteCol < b) {
arr[deleteRow][deleteCol] = 0; // Assuming deletion means setting the value to 0
} else {
cout << "Invalid position!" << endl;
}
// Traversal after deletion
cout << "Array traversal after deletion:" << endl; for (int i = 0; i < a; i++) {
for (int j = 0; j < b; j++) { cout << arr[i][j] ;
}
cout << endl;
}



return 0;
}


