#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

// Function to calculate balance


// Function to calculate service fee


// Function to format output neatly


int main()
{

    ifstream inFile;
    ofstream outFile;
    string lineFromFile;

    // Open input and output files
    inFile.open("chequeAccount.dat");
    outFile.open("finalAccountBalance.txt");

    // Check that files open without error
    if (!inFile)
    {
        cout << "Unable to open file " << inFile;
        exit(1);   // call system to stop
    }

    if (!outFile)
    {
        cout << "Unable to open file " << outFile;
        exit(1);   // call system to stop
    }

    // Perform account calculations, format and write to
    // output file (finalAccountBalance.txt)
    while(!inFile.eof())
    {
        while (getline (inFile,lineFromFile) )
        {
            //Determine if transaction is Withdrawel, Interest or Deposit
            if(lineFromFile[0] == 'W')
            {
                // Format output into columns

                // Do stuff to Account Balance

                // Write line to output file
                outFile << "Withdrawel" << '\t' << lineFromFile << endl;
                cout << "Withdrawel" << '\t' << lineFromFile << endl;
            }


        }
    }








    inFile.close();

    return 0;
}


