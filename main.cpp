#include <iostream>
#include <vector>

using namespace std;

// hold same a letters as  earlier
// hold same b letters as latter

void gogo()
{

    int n, k, maxi = 0;
    cin >> n;

    vector<int> o;

    string word = "";

    for (int x=0; x<n; x++)
    {
        cin >> k;
        o.push_back(k);
        maxi = max(k, maxi);
    }



    for (int x=0; x<maxi || (maxi == 0 && x==0); x++)
    {
        word+='a';
    }
    cout << word << endl;

    for (int x=0; x<n; x++)
    {
        for (int y= o[x]; y<maxi || (maxi == 0 && y==0); y++)
        {
        if (word[y] == 'a') word[y] = 'b';
        else word[y] = 'a';
        }

        cout << word << endl;
    }



}

int main()
{
    int n;
    cin >> n;

    for (int x=0; x<n;x++)
        gogo();

    return 0;
}
