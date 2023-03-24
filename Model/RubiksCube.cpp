//
// Created by Aashish Kumar on 24/03/23.
//

#include "RubiksCube.h"
#include "vector"

void RubiksCube::print() const {

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
