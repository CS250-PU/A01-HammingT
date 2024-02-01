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
bool isValidDNAString (const string &rDNAString);
int hammingDistance (const string &rStr1, const string &rStr2);
HammingInfo hammingResults (const string &dnaInputString,
                                const string &rDNAString,
                                int whichStringNumber);
HammingInfo smallestHammingDistance (const HammingInfo &rHammingInfo1,
                                        const HammingInfo &rHammingInfo2);
void displayHammingResults (const string &rDNAString, 
                            const HammingInfo &rsHammingInfo);

int main () {

  return EXIT_SUCCESS;
}