#include <iostream>
using namespace std;

int arr[20]; //Array to be searched
int n; // Number of elements in the array
int i; // Index of array element

void input()
{
    while(true)
    {
       cout << "enter the number of elements in the array : ";
    cin >> n;
    if ((n>0) && (n <= 20))
         break;
    else
        cout << "Enter the number of element in the array: ";
     
    }
    
    
    // Accept array elements
    cout << "\n-----------------------\n";
    cout << "Enter array elemen \n";
    cout << "-------------------------\n";
    for (i=0; 1 < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

void LinierSearch (){
    char ch;
    int ctr; //Number of comparisons
    int item;

    do
    {
        //Accept the number to be searched
        cout << "\nEnter the element you want to search: "; //step 1
        cin >> item;

        ctr = 0;
        i = 0; //step 2
        while (i < n) // step 3
        {
            ctr++;
            if (arr[i] == item)
            {
                cout << "\n" << "found at position " << (i + 1) << endl; //step 6
            }
        }
    } while (/* condition */);
    
}

