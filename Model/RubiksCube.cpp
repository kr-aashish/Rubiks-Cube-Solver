//
// Created by Aashish Kumar on 24/03/23.
//

#include "RubiksCube.h"
#include "vector"

void RubiksCube::print() const {

}

char RubiksCube::getColorLetter(RubiksCube::COLOR color) {
    switch (color) {
        case COLOR::WHITE:
            return 'w';
        case COLOR::RED:
            return 'r';
        case COLOR::BLUE:
            return 'b';
        case COLOR::GREEN:
            return 'g';
        case COLOR::YELLOW:
            return 'y';
        case COLOR::ORANGE:
            return 'o';
    }
}


string RubiksCube::getMove(RubiksCube::MOVE move) {
    switch (move) {
        case MOVE::F:
            return "F";
        case MOVE::FPRIME:
            return "F'";
        case MOVE::F2:
            return "F2";
        case MOVE::B:
            return "B";
        case MOVE::BPRIME:
            return "B'";
        case MOVE::B2:
            return "B2";
        case MOVE::L:
            return "L";
        case MOVE::LPRIME:
            return "L'";
        case MOVE::L2:
            return "L2";
        case MOVE::R:
            return "R";
        case MOVE::RPRIME:
            return "R'";
        case MOVE::R2:
            return "R2";
        case MOVE::U:
            return "U";
        case MOVE::UPRIME:
            return "U'";
        case MOVE::U2:
            return "U2";
        case MOVE::D:
            return "D";
        case MOVE::DPRIME:
            return "D'";
        case MOVE::D2:
            return "D2";
    }
}

vector<RubiksCube::MOVE> RubiksCube::randomShuffle(unsigned int times) {
    return vector<RubiksCube::MOVE>();
}

RubiksCube &RubiksCube::invertMove(RubiksCube::MOVE move) {
    return this->d();
}

string RubiksCube::getCornerColourString(uint8_t ind) const {
    return std::string();
}

string RubiksCube::getCornerIndex(uint8_t ind) const {
    return std::string();
}

string RubiksCube::getCornerOrientation(uint8_t ind) const {
    return std::string();
}
