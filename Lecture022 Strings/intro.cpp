#include <iostream>
#include <vector>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]) // Here size of char array is not given
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

char getMaxOccCharacter(string s)
{

    int arr[26] = {0};

    // create an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // find maximum occ character
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    return 'a' + ans;
}

int main()
{

    // char name[20];

    // cout << "Enter your name " << endl;
    // cin >> name;
    // name[2] = '\0';

    // cout << "Your name is ";
    // cout << name << endl;
    // int len = getLength(name);
    // cout << " Length: " << len << endl;

    // reverse(name, len);
    // cout << "Your name is ";
    // cout << name << endl;

    // cout << " Palindrome or Not: " << checkPalindrome(name, len) << endl;

    // cout << " CHARACTER is " << toLowerCase('b') << endl;
    // cout << " CHARACTER is " << toLowerCase('C') << endl;

    // string s;
    // cin >> s;
    // s[2] = '\0';
    // cout << s << endl;

    // cout << getMaxOccCharacter(s) << endl;

    // Reverse words in a string........
    vector<char> s = {'T', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e'};
    int i, j = 0;
    for (i = 0; i < s.size() + 1; i++)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            int k = i - 1;
            for (; j <= k;)
            {
                swap(s[j++], s[k--]);
            }
            j = i + 1;
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }

    return 0;
}