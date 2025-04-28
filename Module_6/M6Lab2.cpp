/*
CSC 134
Domonic Yarnall
M6Lab2
4/28/25
*/


#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Define constants for rooms
enum Room {
    FOYER= 0,
    HALLWAY = 1,
    BEDROOM = 2,
    BATHROOM = 3,
    CLOSET = 4,
    NUM_ROOMS = 5
};

int main() {
    // Room names array
    string roomNames[NUM_ROOMS] = {
        "Foyer",
        "Hallway",
        "Bedroom",
        "Bathroom",
        "Closet"
    };
    
    // Room descriptions array
    string roomDescriptions[NUM_ROOMS] = {
        "A grand entrance hall with a dusty chandelier hanging above.",
        "Walls lined with ancient books. The air smells of old paper.",
        "A spacious kitchen with an old stove and wooden counter.",
        "An overgrown garden with stone pathways and a small fountain.",
        "A dark, damp basement with cobwebs in the corners."
    };
    
    // Adjacency list using a 2D array
    // connections[from_room][direction] = to_room or -1 if no connection
    int connections[NUM_ROOMS][NUM_DIRECTIONS];
    
    // Initialize all connections to -1 (no connection)
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }
    
    // Define the connections between rooms using the Room enum
    // Entrance Hall connections
    connections[FOYER][NORTH] = HALLWAY;    // Entrance Hall -> North -> Library
    connections[FOYER][EAST] = BEDROOM;     // Entrance Hall -> East -> Kitchen
    connections[FOYER][SOUTH] = -1;         // No connection south
    connections[FOYER][WEST] = BATHROOM;      // Entrance Hall -> West -> Garden
    
    // Library connections
    connections[HALLWAY][NORTH] = -1;               // No connection north
    connections[HALLWAY][EAST] = -1;                // No connection east
    connections[HALLWAY][SOUTH] = FOYER;    // Library -> South -> Entrance Hall
    connections[HALLWAY][WEST] = -1;                // No connection west
    
    // Kitchen connections
    connections[BEDROOM][NORTH] = -1;               // No connection north
    connections[BEDROOM][EAST] = -1;                // No connection east
    connections[BEDROOM][SOUTH] = CLOSET;         // Kitchen -> South -> Basement
    connections[BEDROOM][WEST] = FOYER;     // Kitchen -> West -> Entrance Hall
    
    // Garden connections
    connections[BATHROOM][NORTH] = -1;                // No connection north
    connections[BATHROOM][EAST] = FOYER;      // Garden -> East -> Entrance Hall
    connections[BATHROOM][SOUTH] = -1;                // No connection south
    connections[BATHROOM][WEST] = -1;                 // No connection west
    
    // Basement connections
    connections[CLOSET][NORTH] = BATHROOM;         // Basement -> North -> Kitchen
    connections[CLOSET][EAST] = -1;               // No connection east
    connections[CLOSET][SOUTH] = -1;              // No connection south
    connections[CLOSET][WEST] = -1;               // No connection west
    
    // Game state
    int currentRoom = FOYER; // Start in the Entrance Hall
    bool gameRunning = true;
    
    // Game loop
    while (gameRunning) {
        // Display current room information
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;
        
        // Show available exits
        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "none";
        }
        cout << endl;
        
        // Get player input
        string command;
        cout << "\nWhat would you like to do? ";
        cin >> command;
        
        // Process movement commands
        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "quit" || command == "q") {
            gameRunning = false;
        } else {
            cout << "I don't understand that command." << endl;
        }
    }
    
    cout << "Thanks for playing!" << endl;
    return 0;
}