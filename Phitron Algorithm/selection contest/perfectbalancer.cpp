#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
ll numModules, leftEnergy = 0, totalEnergy = 0;
    cin >> numModules;

    vector<ll> energyLevels(numModules);

    for (ll module = 0; module < numModules; module++)
    {
        cin >> energyLevels[module];
        totalEnergy += energyLevels[module];
    }

    for (ll module = 0; module < numModules; module++)
    {
        ll rightEnergy = totalEnergy - leftEnergy - energyLevels[module];

        if (leftEnergy == rightEnergy)
        {
            cout << totalEnergy - rightEnergy << " " << module + 1 << endl;
            return 0;
        }

        leftEnergy += energyLevels[module];
    }

    cout << "UNSTABLE\n";
    return 0;
}
