#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int rewritesplitwords(string, char);
string MFN(string stname, int thisyear);

struct Name{
    string stname;
    string gender;
    string name;
    int year;
    int count;
};

int rewritesplitwords(string filename, char delimiter){
    int cnt = 0;
    ifstream file; // reading allstates
    ofstream splitFile; // writing to split file
    Name person;
    string line;

    // opens file
    file.open(filename);
    if(!file){
        cerr << "FILE FAILED TO OPEN" << endl;
        exit(0);
    }

    // creates split file
    splitFile;
    splitFile.open("split.txt");
    if(!splitFile){
        cerr << "FILE FAILED TO OPEN/CREATE" << endl;
        exit(0);
    }

    // splits words and creates new file
    while(getline(file, line)){
        for(int i = 0; i < line.size(); i++){
            if(line[i] == delimiter){
                line[i] = '\t';
            }
        }

        // adds splited words to new file
        splitFile << line << endl;
        cnt++;
    }

    // return word count
    return cnt;
}

string MFN(string stname, int thisyear){

}