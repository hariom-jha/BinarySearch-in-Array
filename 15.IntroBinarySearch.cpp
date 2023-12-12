#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int target)
{
  int start = 0;
  int end = size - 1;
  int mid = (start + end) / 2;

  while (start <= end)
  {

    if (arr[mid] == target)
    {
      return mid;
    }
    else if (target < arr[mid])
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }

    mid = (start + end) / 2;
  }
  // element not founc
  return -1;
}
int main()
{
  int arr[] = {1, 2, 3, 5, 6, 45, 56, 76, 90};
  int size = 9;
  int target = 1;

  int indexOfTarget = BinarySearch(arr, size, target);

  if (indexOfTarget == -1)
  {
    cout << "target is not present" << endl;
  }
  else
  {
    cout << "target is present at " << indexOfTarget << " "
         << "index" << endl;
  }
  return 0;
}
