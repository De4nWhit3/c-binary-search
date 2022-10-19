#include <stdio.h>
#include <cs50.h>
#include <string.h>

#define MAX 5

// Prototypes
bool binarysearch(string dataset[], string searchword);

int main(void)
{
    string searchfor = "Ace";
    string data[MAX] = { "Ace", "Aaron", "Cindy", "Abby", "Emmanual"};
    bool found = binarysearch(data, searchfor);

    if (found)
    {
        printf("Found %s in the dataset.\n", searchfor);
    }
}

// return true if the string is found, false otherwise
// WARNING: Case Sensitive!
bool binarysearch(string dataset[], string searchword)
{
    int low = 0;
    int high = MAX - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (strcmp(searchword, dataset[mid]) == 0)
            return true;
        else if (strcmp(searchword, dataset[mid]) > 0)
        {
            high = high + 0;
            low = mid + 1;
        }
        else
        {
            low = low + 0;
            high = mid - 1;
        }
    }
    puts("Name not found.");
    return false;
}