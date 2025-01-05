#include <iostream>
#include <vector>
#include <string>

using namespace std;

//  Publicspeakingisveryeasy.

// 12624120720

// 1b214,2b755,7b524

// 9

// OPEKMA,OPEKMQ,OPEKMa,OPEKMq,OPEKmA,OPEKmQ,OPEKma,OPEKmq,OPEkMA,OPEkMQ,OPEkMa,OPEkMq,OPEkmA,OPEkmQ,OPEkma,OPEkmq,OPUKMA,OPUKMQ,OPUKMa,OPUKMq,OPUKmA,OPUKmQ,OPUKma,OPUKmq,OPUkMA,OPUkMQ,OPUkMa,OPUkMq,OPUkmA,OPUkmQ,OPUkma,OPUkmq,OPeKMA,OPeKMQ,OPeKMa,OPeKMq,OPeKmA,OPeKmQ,OPeKma,OPeKmq,OPekMA,OPekMQ,OPekMa,OPekMq,OPekmA,OPekmQ,OPekma,OPekmq,OPuKMA,OPuKMQ,OPuKMa,OPuKMq,OPuKmA,OPuKmQ,OPuKma,OPuKmq,OPukMA,OPukMQ,OPukMa,OPukMq,OPukmA,OPukmQ,OPukma,OPukmq,OpEKMA,OpEKMQ,OpEKMa,OpEKMq,OpEKmA,OpEKmQ,OpEKma,OpEKmq,OpEkMA,OpEkMQ,OpEkMa,OpEkMq,OpEkmA,OpEkmQ,OpEkma,OpEkmq,OpUKMA,OpUKMQ,OpUKMa,OpUKMq,OpUKmA,OpUKmQ,OpUKma,OpUKmq,OpUkMA,OpUkMQ,OpUkMa,OpUkMq,OpUkmA,OpUkmQ,OpUkma,OpUkmq,OpeKMA,OpeKMQ,OpeKMa,OpeKMq,OpeKmA,OpeKmQ,OpeKma,OpeKmq,OpekMA,OpekMQ,OpekMa,OpekMq,OpekmA,OpekmQ,Opekma,Opekmq,OpuKMA,OpuKMQ,OpuKMa,OpuKMq,OpuKmA,OpuKmQ,OpuKma,OpuKmq,OpukMA,OpukMQ,OpukMa,OpukMq,OpukmA,OpukmQ,Opukma,Opukmq,oPEKMA,oPEKMQ,oPEKMa,oPEKMq,oPEKmA,oPEKmQ,oPEKma,oPEKmq,oPEkMA,oPEkMQ,oPEkMa,oPEkMq,oPEkmA,oPEkmQ,oPEkma,oPEkmq,oPUKMA,oPUKMQ,oPUKMa,oPUKMq,oPUKmA,oPUKmQ,oPUKma,oPUKmq,oPUkMA,oPUkMQ,oPUkMa,oPUkMq,oPUkmA,oPUkmQ,oPUkma,oPUkmq,oPeKMA,oPeKMQ,oPeKMa,oPeKMq,oPeKmA,oPeKmQ,oPeKma,oPeKmq,oPekMA,oPekMQ,oPekMa,oPekMq,oPekmA,oPekmQ,oPekma,oPekmq,oPuKMA,oPuKMQ,oPuKMa,oPuKMq,oPuKmA,oPuKmQ,oPuKma,oPuKmq,oPukMA,oPukMQ,oPukMa,oPukMq,oPukmA,oPukmQ,oPukma,oPukmq,opEKMA,opEKMQ,opEKMa,opEKMq,opEKmA,opEKmQ,opEKma,opEKmq,opEkMA,opEkMQ,opEkMa,opEkMq,opEkmA,opEkmQ,opEkma,opEkmq,opUKMA,opUKMQ,opUKMa,opUKMq,opUKmA,opUKmQ,opUKma,opUKmq,opUkMA,opUkMQ,opUkMa,opUkMq,opUkmA,opUkmQ,opUkma,opUkmq,opeKMA,opeKMQ,opeKMa,opeKMq,opeKmA,opeKmQ,opeKma,opeKmq,opekMA,opekMQ,opekMa,opekMq,opekmA,opekmQ,opekma,opekmq,opuKMA,opuKMQ,opuKMa,opuKMq,opuKmA,opuKmQ,opuKma,opuKmq,opukMA,opukMQ,opukMa,opukMq,opukmA,opukmQ,opukma,opukmq

// 426135


void generatePasswords(const vector<vector<string>>& combinations) {

    for (auto it1 = combinations[0].begin(); it1 != combinations[0].end(); ++it1) {
        for (auto it2 = combinations[1].begin(); it2 != combinations[1].end(); ++it2) {
            for (auto it3 = combinations[2].begin(); it3 != combinations[2].end(); ++it3) {
                for (auto it4 = combinations[3].begin(); it4 != combinations[3].end(); ++it4) {
                    for (auto it5 = combinations[4].begin(); it5 != combinations[4].end(); ++it5) {
                        for (auto it6 = combinations[5].begin(); it6 != combinations[5].end(); ++it6) {
                            cout << *it1 + *it2 + *it3 + *it4 + *it5 + *it6 << endl;
                        }
                    }
                }
            }
        }
    }

}


int main() {
    vector<vector<string>> combinations(6);

    cout << "Enter combinations for part 1 (comma-separated): ";
    string input;
    getline(cin, input);
    size_t pos = 0;
    while ((pos = input.find(',')) != string::npos) {
        combinations[0].push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }
    combinations[0].push_back(input);

    cout << "Enter combinations for part 2 (comma-separated): ";
    getline(cin, input);
    pos = 0;
    while ((pos = input.find(',')) != string::npos) {
        combinations[1].push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }
    combinations[1].push_back(input);

    cout << "Enter combinations for part 3 (comma-separated): ";
    getline(cin, input);
    pos = 0;
    while ((pos = input.find(',')) != string::npos) {
        combinations[2].push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }
    combinations[2].push_back(input);

    cout << "Enter combinations for part 4 (comma-separated): ";
    getline(cin, input);
    pos = 0;
    while ((pos = input.find(',')) != string::npos) {
        combinations[3].push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }
    combinations[3].push_back(input);

    cout << "Enter combinations for part 5 (comma-separated): ";
    getline(cin, input);
    pos = 0;
    while ((pos = input.find(',')) != string::npos) {
        combinations[4].push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }
    combinations[4].push_back(input);

    cout << "Enter combinations for part 6 (comma-separated): ";
    getline(cin, input);
    pos = 0;
    while ((pos = input.find(',')) != string::npos) {
        combinations[5].push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }
    combinations[5].push_back(input);

    cout << "\nGenerated Password List:" << endl;
    generatePasswords(combinations);

    return 0;
}