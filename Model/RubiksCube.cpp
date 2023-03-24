//
// Created by Aashish Kumar on 24/03/23.
//

#include "RubiksCube.h"
#include "vector"

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

RubiksCube &RubiksCube::performMove(RubiksCube::MOVE move) {
    switch (move) {
        case MOVE::F:
            return this->f();
        case MOVE::FPRIME:
            return this->fPrime();
        case MOVE::F2:
            return this->f2();
        case MOVE::B:
            return this->b();
        case MOVE::BPRIME:
            return this->bPrime();
        case MOVE::B2:
            return this->b2();
        case MOVE::L:
            return this->l();
        case MOVE::LPRIME:
            return this->lPrime();
        case MOVE::L2:
            return this->l2();
        case MOVE::R:
            return this->r();
        case MOVE::RPRIME:
            return this->rPrime();
        case MOVE::R2:
            return this->r2();
        case MOVE::U:
            return this->u();
        case MOVE::UPRIME:
            return this->uPrime();
        case MOVE::U2:
            return this->u2();
        case MOVE::D:
            return this->d();
        case MOVE::DPRIME:
            return this->dPrime();
        case MOVE::D2:
            return this->d2();
    }
}

RubiksCube &RubiksCube::invertMove(RubiksCube::MOVE move) {
    switch (move) {
        case MOVE::F:
            return this->fPrime();
        case MOVE::FPRIME:
            return this->f();
        case MOVE::F2:
            return this->f2();
        case MOVE::B:
            return this->bPrime();
        case MOVE::BPRIME:
            return this->b();
        case MOVE::B2:
            return this->b2();
        case MOVE::L:
            return this->lPrime();
        case MOVE::LPRIME:
            return this->l();
        case MOVE::L2:
            return this->l2();
        case MOVE::R:
            return this->rPrime();
        case MOVE::RPRIME:
            return this->r();
        case MOVE::R2:
            return this->r2();
        case MOVE::U:
            return this->uPrime();
        case MOVE::UPRIME:
            return this->u();
        case MOVE::U2:
            return this->u2();
        case MOVE::D:
            return this->dPrime();
        case MOVE::DPRIME:
            return this->d();
        case MOVE::D2:
            return this->d2();
    }
}

void RubiksCube::print() const {
    cout << "RubiksCube: \n\n";

    for (int row = 0; row <= 2; ++row) {
        for (unsigned int i = 0; i <= 7; ++i) {
            cout << " ";
        }
        for (int col = 0; col <= 2; ++col) {
            cout << getColorLetter(getColour(FACE::UP, row, col)) << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    for (int row = 0; row <= 2; ++row) {
        for (int col = 0; col <= 2; ++col) {
            cout << getColorLetter(getColour(FACE::LEFT, row, col)) << " ";
        }
        cout << " ";
        for (int col = 0; col <= 2; ++col) {
            cout << getColorLetter(getColour(FACE::FRONT, row, col)) << " ";
        }
        cout << " ";
        for (int col = 0; col <= 2; ++col) {
            cout << getColorLetter(getColour(FACE::RIGHT, row, col)) << " ";
        }
        cout << " ";
        for (int col = 0; col <= 2; ++col) {
            cout << getColorLetter(getColour(FACE::BACK, row, col)) << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    for (int row = 0; row <= 2; ++row) {
        for (unsigned int i = 0; i <= 7; ++i) {
            cout << " ";
        }
        for (int col = 0; col <= 2; ++col) {
            cout << getColorLetter(getColour(FACE::DOWN, row, col)) << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

vector<RubiksCube::MOVE> RubiksCube::randomShuffle(unsigned int times) {
    vector<RubiksCube::MOVE> movePerformed;
    for (unsigned int i = 0; i < times; ++i) {
        unsigned int randomMove = std::rand() % 18;
        movePerformed.push_back(static_cast<RubiksCube::MOVE>(randomMove));
        this->performMove(static_cast<RubiksCube::MOVE>(randomMove));
    }
    return movePerformed;
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
