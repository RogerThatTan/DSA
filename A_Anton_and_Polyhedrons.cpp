#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int ans = 0;
    string faces[n];

    for (int i = 0; i < n; i++)
    {
        cin >> faces[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (faces[i] == "Tetrahedron")
            ans += 4;
        else if (faces[i] == "Cube")
            ans += 6;
        else if (faces[i] == "Octahedron")
            ans += 8;
        else if (faces[i] == "Dodecahedron")
            ans += 12;
        else if (faces[i] == "Icosahedron")
            ans += 20;
    }

    cout << ans << endl;

    return 0;
}