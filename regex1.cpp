#include <iostream>
#include <regex>

using namespace std;

int main()
{
    string pattern("[^c]ei");
    pattern = "[[:alpha:]]" + pattern + "[[:alpha:]]";

    regex r(pattern);
    smatch results;
    string str_test = "receipt freind theif receive";
    if (regex_search(str_test, results, r))
        cout << results.str() << endl;

    return 0;
}
