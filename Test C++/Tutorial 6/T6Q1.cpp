#include <iostream>
#include <fstream>
using namespace std;

struct SPowerData
  {
    float m_Amp;
    float m_Res;
    float m_Power;
  };

class CPowerInfo
{
// Data
private:
    SPowerData *m_power_array;
    int m_numElements;
    fstream m_File;

public:
void loadData(string pFile, int numElements) 
    {
        m_numElements = numElements;
        m_power_array = new SPowerData[m_numElements];

        m_File.open(pFile);
        if (!m_File.is_open()) {
            cout << "Error: Could not open " << pFile << endl;
            return;
        }
        
        for (int i = 0; i < m_numElements; i++)
        {
            m_File >> m_power_array[i].m_Amp;  
            m_File >> m_power_array[i].m_Res;
        
            cout << "\n"
                 << m_power_array[i].m_Amp << "\t" << m_power_array[i].m_Res;
        }
        m_File.close();
}

~CPowerInfo() 
    {
        delete[] m_power_array;
    }
};

int  main()
{

    CPowerInfo pw;
    pw.loadData("AmpRes.txt", 7);

    return 0;
}
