#include <iostream>
#include <math.h>
#include <algorithm>
#include<vector>
#include<string>
#include <queue>
#include <stack>
#include <list>
#include <map>   //hash table
#include<unordered_map>
#include<unordered_set>
#include <vector>
using namespace std;


class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<std::string> trimmed_emails;
        for (auto& email : emails) {
            std::string tmp;
            // Copy everything that is not a '.' until a '+' or a '@' is encountered			
            auto it = email.begin();

            for (; '@' != *it && '+' != *it; ++it) {
                if ('.' != *it) {
                    tmp += *it;
                }
            }

            // Copy the domain into our tempary email
            it = find(it, email.end(), '@');
            copy(it, email.end(), back_inserter(tmp));

            // Add the trimmed email to our set of emails
            trimmed_emails.insert(tmp);
        }
        return trimmed_emails.size();
    }

};


int main()
{

    vector<string>nums({ "lll","hhh" });
    Solution question;
    question.numUniqueEmails(nums);
    //Solution2 question2;
    //question2.numUniqueEmails(nums);

    return 0;
}