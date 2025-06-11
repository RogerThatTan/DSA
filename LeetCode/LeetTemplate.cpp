#include <bits/stdc++.h>
#include <string>

using namespace std;

class Solution {
public:
    string categorizeBox(int l, int w, int h, int m) {
        // Implement your logic here
        string box="";
        string size="";
        string category="";
        long long vol = l*h*w;
        if((l>=pow(10,4)) ||(h>=pow(10,4)) ||(w>=pow(10,4)) || (vol>=pow(10,9))){
            box = "Bulky";
        }
        if(m>=100){
            size="Heavy";
        }

        if(box=="Bulky" && size=="Heavy") category = "Both";
        else if(box!="Bulky" && size!="Heavy") category = "Neither";
        else if(box=="Bulky" && size!="Heavy") category = "Bulky";
        else if(box!="Bulky" && size=="Heavy") category = "Heavy";

        return category;
    }
};

int main() {
    Solution sol;

    int length, width, height, mass;
    cout << "Enter length, width, height, and mass: ";
    cin >> length >> width >> height >> mass;

    string result = sol.categorizeBox(length, width, height, mass);
    cout << "Category: " << result << endl;

    return 0;
}
