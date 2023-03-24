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
