//******************************************************************************
// File name:  
// Author:     
// Date:       
// Class:      
// Assignment: 
// Purpose:    
//
//******************************************************************************

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct HammingInfo {
  string mDNAString;
  string mWhichStringNumber;
  int mHammingDistance;
};

void printHeading (const string &rStr, const string &rTitle);
void openFile (ifstream &rInFile, const string &rFileName);
void closeFile (ifstream &rInFile);
string readDNAString (istream &rInFile, const string &rMessage);
bool isValidDNAString (const string &rDNAString);
int hammingDistance (const string &rDNAStr1, const string &rDNAStr2);
HammingInfo hammingResults (const string &rDNAInputString,
                            const string &rDNAString,
                            int whichStringNumber);
HammingInfo smallestHammingDistance (const HammingInfo &rsHammingInfo1,
                                     const HammingInfo &rsHammingInfo2);
void displayHammingResults (const string &rDNAString, 
                            const HammingInfo &rsHammingInfo);

int main () {

  return EXIT_SUCCESS;
}