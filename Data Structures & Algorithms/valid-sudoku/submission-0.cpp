class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; ++i){ // lines
            unordered_set<char> line;
            for(int j=0; j<9; ++j){
                if(board[i][j] == '.') continue;
                if(line.count(board[i][j])) return false;
                line.insert(board[i][j]);
            }
        }
        for(int j=0; j<9; ++j){ // colums
            unordered_set<char> column;
            for(int i=0; i<9; ++i){
                if(board[i][j] == '.') continue;
                if(column.count(board[i][j])) return false;
                column.insert(board[i][j]);
            }
        }
        vector<unordered_set<char>> squares(9);
        for(int i=0; i<9; ++i){
            int i_square = i / 3, j_square = 0, square_nr = 0;
            for(int j=0; j<9; ++j){
                j_square = j / 3;
                square_nr = i_square * 3 + j_square;
                if(board[i][j] == '.') continue;
                if(squares[square_nr].count(board[i][j])) return false;
                squares[square_nr].insert(board[i][j]);
            }
        }
        return true;
    }
};

// valid sudoku
// la patrate incercam sa le numerotam unic astfel
// patratul din stanga sus are coordonatele (0,0)
// le obtinem din indexul liniei si al coloanei astfel:
// (line_index / 3, column_index / 3)
// acum daca vrem sa stim exact in ce spatiu din patrat suntem
// putem face si operatia inversa cu aceiasi formula doar 
// inlocuind impartirea cu restul:
// (line_index % 3, column_index % 3)