#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct CancerGenomics
{
    string sequence;
    string name;
};

typedef struct CancerGenomics cg;

int lcs(vector<vector<int>> v, string s, string t)
{
    for (int i = 0; i < v.size(); i++)
    {
        v[i][0] = 0;
    }
    for (int j = 0; j < v[0].size(); j++)
    {
        v[0][j] = 0;
    }

    for (int i = 1; i < v.size(); i++)
    {
        for (int j = 1; j < v[0].size(); j++)
        {
            if (s[i] != t[j])
                v[i][j] = max(v[i - 1][j], v[i][j - 1]);

            else
                v[i][j] = v[i - 1][j - 1] + 1;
        }
    }
    return v[v.size() - 1][v[0].size() - 1];
}

int main()
{
    int cancerdata_items = 3;

//read data from csv, input from dataset.csv. I've already created dataset for it.
    vector<cg>cancerdata(cancerdata_items) ;
    cancerdata[0].name = "Lung Cancer";
    cancerdata[0].sequence = "GUOSADDMVTGASK";

    cancerdata[1].name = "Skin Cancer";
    cancerdata[1].sequence = "IWGNYERWVEIO";

    cancerdata[2].name = "Kidney Cancer";
    cancerdata[2].sequence = "MVTEUYTEWRT";

//input person data. Also give option to see demo. Means ask user to input or demo with default person dna sequence
    string person_dna_sequence = "FWLQIIWGNYERWVEIOGYL";
    int matched_sequence = 0;
    bool foundCancer = false;
    for (int i = 0; i < 3; i++)
    {
        vector<vector<int>> v(person_dna_sequence.length() + 1, vector<int>(cancerdata[i].sequence.length() + 1, 0));
        matched_sequence = lcs(v, person_dna_sequence, cancerdata[i].sequence);
        if (matched_sequence > cancerdata[i].sequence.length() * 0.4)
        {
            foundCancer = true;
            cout << "Found Cancer. Type of cancer: " << cancerdata[i].name << endl;
        }
    }
    if (!foundCancer)
        cout << "Not found any kind of Cancer.";
    return 0;
}