/*Domonic Yarnall
CSC 134
M7Lab1
5/7/25
*/

#include <iostream>
#include <vector>
#include <random>
#include <ctime>
using namespace std;
// TODO: Add better comments

// Direction constants
enum Direction {
    NORTH = 1,
    SOUTH = 2,
    EAST = 4,
    WEST = 8
};

// Mapping of direction to cell offset
const std::pair<int, int> DIRECTION_OFFSETS[] = {
    {0, 0},     // Placeholder for index 0
    {0, -1},    // NORTH
    {0, 1},     // SOUTH
    {0, 0},     // Placeholder
    {1, 0},     // EAST
    {0, 0},     // Placeholder
    {0, 0},     // Placeholder
    {0, 0},     // Placeholder
    {-1, 0}     // WEST
};

// Mapping of directions to their opposites
const Direction OPPOSITES[] = {
    (Direction)0,     // Placeholder for index 0
    SOUTH,    // Opposite of NORTH is SOUTH
    NORTH,    // Opposite of SOUTH is NORTH
    (Direction)0,     // Placeholder
    WEST,     // Opposite of EAST is WEST
    (Direction)0,     // Placeholder
    (Direction)0,     // Placeholder
    (Direction)0,     // Placeholder
    EAST      // Opposite of WEST is EAST
};

// Cell class representing a single cell in the maze
class Cell {
private:
    int row;
    int col;
    int links;  // Bit flags for linked directions

public:
    Cell(int row, int col) : row(row), col(col), links(0) {}

    int getRow() const { return row; }
    int getCol() const { return col; }

    // Check if this cell is linked to another cell in the given direction
    bool linked(Direction direction) const {
        return (links & direction) != 0;
    }

    // Link this cell to another cell in the given direction
    void link(Direction direction) {
        links |= direction;
    }

    // Unlink this cell from another cell in the given direction
    void unlink(Direction direction) {
        links &= ~direction;
    }

    // Get all directions where this cell has links
    std::vector<Direction> getLinks() const {
        std::vector<Direction> result;
        if (linked(NORTH)) result.push_back(NORTH);
        if (linked(SOUTH)) result.push_back(SOUTH);
        if (linked(EAST)) result.push_back(EAST);
        if (linked(WEST)) result.push_back(WEST);
        return result;
    }
};

// Grid class representing the entire maze
class Grid {
private:
    int rows;
    int cols;
    std::vector<std::vector<Cell>> cells;
    std::mt19937 rng;

public:
    Grid(int rows, int cols) : rows(rows), cols(cols) {
        // Initialize random number generator
        rng.seed(static_cast<unsigned int>(std::time(nullptr)));
        
        // Initialize cells
        cells.resize(rows);
        for (int r = 0; r < rows; r++) {
            cells[r].reserve(cols);
            for (int c = 0; c < cols; c++) {
                cells[r].emplace_back(r, c);
            }
        }
    }

    int getRows() const { return rows; }
    int getCols() const { return cols; }

    // Check if the given position is within the grid
    bool isValid(int row, int col) const {
        return row >= 0 && row < rows && col >= 0 && col < cols;
    }

    // Get the cell at the given position
    Cell& at(int row, int col) {
        return cells[row][col];
    }

    const Cell& at(int row, int col) const {
        return cells[row][col];
    }

    // Get a random integer between min and max (inclusive)
    int random(int min, int max) {
        std::uniform_int_distribution<int> dist(min, max);
        return dist(rng);
    }

    // Link two cells in the grid by their positions and directions
    void linkCells(int row1, int col1, Direction dir) {
        if (!isValid(row1, col1)) return;

        // Calculate the coordinates of the second cell
        int row2 = row1 + DIRECTION_OFFSETS[dir].second;
        int col2 = col1 + DIRECTION_OFFSETS[dir].first;

        if (!isValid(row2, col2)) return;

        // Link the cells in both directions
        at(row1, col1).link(dir);
        at(row2, col2).link(OPPOSITES[dir]);
    }

    // Display the maze
    void display() const {
        // Display the top border
        std::cout << "+";
        for (int c = 0; c < cols; c++) {
            std::cout << "---+";
        }
        std::cout << std::endl;

        for (int r = 0; r < rows; r++) {
            // Display the western boundary and cell contents
            std::cout << "|";
            for (int c = 0; c < cols; c++) {
                std::cout << "   ";
                if (c < cols - 1 && cells[r][c].linked(EAST)) {
                    std::cout << " ";
                } else {
                    std::cout << "|";
                }
            }
            std::cout << std::endl;

            // Display the southern boundary
            std::cout << "+";
            for (int c = 0; c < cols; c++) {
                if (r < rows - 1 && cells[r][c].linked(SOUTH)) {
                    std::cout << "   +";
                } else {
                    std::cout << "---+";
                }
            }
            std::cout << std::endl;
        }
    }
};

// BinaryTree maze generator
class BinaryTreeMaze {
public:
    // Apply the Binary Tree algorithm to generate a maze
    static void on(Grid& grid) {
        for (int r = 0; r < grid.getRows(); r++) {
            for (int c = 0; c < grid.getCols(); c++) {
                std::vector<Direction> neighbors;
                
                // Consider linking north
                if (r > 0) {
                    neighbors.push_back(NORTH);
                }
                
                // Consider linking east
                if (c < grid.getCols() - 1) {
                    neighbors.push_back(EAST);
                }
                
                // If we have neighbors to link, choose one at random
                if (!neighbors.empty()) {
                    int index = grid.random(0, neighbors.size() - 1);
                    Direction direction = neighbors[index];
                    grid.linkCells(r, c, direction);
                }
            }
        }
    }
};

int main(int argc, char* argv[]) {
    // Default values for rows and columns
    int rows = 10;
    int cols = 10;
    
    // Parse command line arguments if provided
    if (argc > 1) {
        rows = std::atoi(argv[1]);
    }
    if (argc > 2) {
        cols = std::atoi(argv[2]);
    }
    
    // Create grid and generate maze
    Grid grid(rows, cols);
    BinaryTreeMaze::on(grid);
    
    // Display the maze
    grid.display();
    
    return 0;
}