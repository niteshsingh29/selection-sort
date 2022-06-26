
#include <iostream>

using namespace std;


int
main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      int l;
      cin >> l;
      int arr[l];
      for (int i = 0; i < l; i++)
	{
	  cin >> arr[i];
	}

      for (int i = 0; i < l - 1; i++)
	{
	  for (int a = i + 1; a < l; a++)
	    {
	      if (arr[i] < arr[a])
		{
		  continue;
		}
	      else
		{
		  int temp = arr[a];
		  arr[a] = arr[i];
		  arr[i] = temp;
		}
	    }
	}

      cout << "sorted" << endl;

      for (int b = 0; b < l; b++)
	{
	  cout << arr[b] << endl;
	}


    }

  return 0;
}
