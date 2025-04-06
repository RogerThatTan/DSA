    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int t;
        cin >> t;

        while (t--)
        {
            int k;
            cin >> k;

            vector<int> liked;
            int count = 0;

            for (int num = 1; count < k; num++)
            {
                if (num % 3 != 0 && num % 10 != 3)
                {
                    liked.push_back(num);
                    count++;
                }
            }

            cout << liked[k - 1] << endl;
        }

        return 0;
    }
