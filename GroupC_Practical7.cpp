#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    typedef map<string, int> mapType;
    mapType PopulationMap;

    PopulationMap.insert(pair<string, int>("Maharashtra", 702));
    PopulationMap.insert(pair<string, int>("Rajasthan", 757));
    PopulationMap.insert(pair<string, int>("Karanataka", 667));
    PopulationMap.insert(pair<string, int>("Punjab", 578));
    PopulationMap.insert(pair<string, int>("West Bengal", 325));
    PopulationMap.insert(pair<string, int>("Kerala", 154));
    PopulationMap.insert(pair<string, int>("Madhya Pradesh", 740));
    PopulationMap.insert(pair<string, int>("Uttar Pradesh", 689));
    PopulationMap.insert(pair<string, int>("Bihar", 149));
    PopulationMap.insert(pair<string, int>("Gujarat", 589));
    PopulationMap.insert(pair<string, int>("Odisha", 289));

    mapType::iterator iter;

    cout << "-------- Population of States in India --------";
    cout << "\nSize of Population Map : " << PopulationMap.size();

    string state_name;
    int n;
    cout << "\nEnter how many States do you want to find: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter name of State: ";
        cin >> state_name;

        iter = PopulationMap.find(state_name);

        if (iter->first == state_name)
        {
            cout << state_name << " has a population of " << iter->second;
        }
        else
            cout << "State not found!! \n";
    }
    PopulationMap.clear();
}