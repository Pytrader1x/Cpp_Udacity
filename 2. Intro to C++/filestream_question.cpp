#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using std::cout;
using std::string;
using std::vector;
using std::ifstream;

// TODO: Add the ReadBoardFile function here.

void ReadBoardFile(string path){

  ifstream my_file;
  my_file.open(path);
  
  if(my_file){
  	cout << "The file stream has been created \n";
    string line;
    while(getline(my_file, line)){
    
      cout << line << "\n";
      
    }
  }
}

// PrintBoard not used in this exercise
void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

int main() {
  // TODO: Call the ReadBoardFile function here.
  
  // Leave the following line commented out.
  //PrintBoard(board);
  ReadBoardFile("1.board");
}