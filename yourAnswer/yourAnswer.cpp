//Kéo xuống dưới để thêm file
#include <cmath>
#include <string>
#include <fstream>
#include <iostream>

//in-out function
void readFile(
    const std::string& filename,
    int& HP1,
    int& HP2,
    int& EXP1,
    int& EXP2,
    int& M1,
    int& M2,
    int& E1,
    int& E2,
    int& E3
);
void writeOutput(
    const std::string& filename,
    int& result1,
    int& result2,
    int& result3
);
//task function
int firstMeet(int & exp1, int & exp2, int e1);
int traceLuggage(int & HP1, int & EXP1, int & M1, int E2);
int chaseTaxi(int & HP1, int & EXP1, int & HP2, int & EXP2, int E3);

// main()
int main() 
{
    int HP1, HP2, EXP1, EXP2, M1, M2, E1, E2, E3;   
    readFile("testcase.inp", HP1, HP2, EXP1, EXP2, M1, M2, E1, E2, E3);
    int result1 = firstMeet(EXP1, EXP2, E1),
        result2 = traceLuggage(HP1, EXP1, M1, E2),
        result3 = chaseTaxi(HP1, EXP2, HP2, M2, E3);
    writeOutput("yourAnswer.out", result1, result2, result3);
    return 0;
}

//Read file input
void readFile(
    const std::string& filename,
    int& HP1,
    int& HP2,
    int& EXP1,
    int& EXP2,
    int& M1,
    int& M2,
    int& E1,
    int& E2,
    int& E3
)
{
    std::ifstream inp(filename);
    inp >> HP1 >> HP2 >> EXP1 >> EXP2 >> M1 >> M2 >> E1 >> E2 >> E3;
}

//Output file
void writeOutput(
    const std::string& filename,
    int& result1,
    int& result2,
    int& result3
)
{
    std::ofstream out(filename);
    out << result1 << " " << result2 << " " << result3;
}

/*
TỪ ĐÂY SẼ LÀ PHẦN CODE CẦN TEST
HOẶC DÁN CẢ PHẦN KHAI BÁO CỦA BẢN THÂN
HOẶC CHỈ DÁN MỖI CODE
*/

// Task 1
int firstMeet(int & exp1, int & exp2, int e1) 
{
    //Code
}

// Task 2
int traceLuggage(int & HP1, int & EXP1, int & M1, int E2) 
{
    //Code
}

// Task 3
int chaseTaxi(int & HP1, int & EXP1, int & HP2, int & EXP2, int E3) 
{
    //Code
}