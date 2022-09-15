// add your code
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

std::string compare_basins(std::string date){
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }
  std::string junk;
  getline(fin, junk);
  std::string findDate;
  double eastSt;
  double eastEl;
  double westSt;
  double westEl;
  while(fin >> findDate >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    fin.ignore(INT_MAX, '\n');
    // prints East basin storage:
    if(findDate == date){
      std::string dte = std::to_string(eastEl);
      return dte;
    }
  }
  return "null";
}


double get_min_east(){
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if(fin.fail()){
    std::cerr << "FIle cannot be opened for reading." << std::endl;
    exit(1);
  }
  std::string junk;
  getline(fin, junk);
  std::string date;
  double eastSt;
  double eastEl;
  double westSt;
  double westEl;
  double eastMin = eastEl;
  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
    fin.ignore(INT_MAX, '\n');
    double eastTemp = eastEl;
    if(eastTemp < eastMin){
      eastMin = eastTemp;
    }
  }
  return eastMin;
}


double get_max_east(){
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if(fin.fail()){
    std::cerr << "FIle cannot be opened for reading." << std::endl;
    exit(1);
  }
  std::string junk;
  getline(fin, junk);
  std::string date;
  double eastSt;
  double eastEl;
  double westSt;
  double westEl;
  double eastMax = eastEl;
  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
    fin.ignore(INT_MAX, '\n');
    double eastTemp = eastEl;
    if(eastTemp > eastMax){
      eastMax = eastTemp;
    }
  }
  return eastMax;
}

std::string compare_basins(std::string date){
  //return East if the East basin was higher on the specified date and West if the West was higher. 
  //It should return Equal if the values were the same.
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if(fin.fail()){
    std::cerr << "FIle cannot be opened for reading." << std::endl;
    exit(1);
  }
  std::string junk;
  getline(fin, junk);
  std::string date;
  double eastSt;
  double eastEl;
  double westSt;
  double westEl;
  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
    fin.ignore(INT_MAX, '\n');
  }
}