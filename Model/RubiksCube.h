//
// Created by Aashish Kumar on 24/03/23.
//

#ifndef RUBICSCUBESOLVER_RUBIKSCUBE_H
#define RUBICSCUBESOLVER_RUBIKSCUBE_H

#include "iostream"

using namespace std;

class RubiksCube {
public:
    enum class FACE {
        UP,
        DOWN,
        LEFT,
        RIGHT,
        FRONT,
        BACK
    };

    enum class COLOR {
        WHITE,
        RED,
        BLUE,
        GREEN,
        YELLOW,
        ORANGE
    };

    enum class MOVE {
        F, FPRIME, F2,
        B, BPRIME, B2,
        L, LPRIME, L2,
        R, RPRIME, R2,
        U, UPRIME, U2,
        D, DPRIME, D2
    };

    virtual COLOR getColour(FACE face, unsigned row, unsigned col) const = 0;

    static char getColorLetter(COLOR color);

    virtual bool isSolved() const = 0;

    static string getMove(MOVE move);

    void print() const;

    vector<MOVE> randomShuffle(unsigned int times);

    RubiksCube &performMove(MOVE move);

    RubiksCube &invertMove(MOVE move);

    string getCornerColourString(uint8_t ind) const;

    uint8_t getCornerIndex(uint8_t ind) const;

    uint8_t getCornerOrientation(uint8_t ind) const;

    virtual RubiksCube &f() =  0;

    virtual RubiksCube &fPrime() = 0;

    virtual RubiksCube &f2() = 0;

    virtual RubiksCube &b() =  0;

    virtual RubiksCube &bPrime() = 0;

    virtual RubiksCube &b2() = 0;

    virtual RubiksCube &l() =  0;

    virtual RubiksCube &lPrime() = 0;

    virtual RubiksCube &l2() = 0;

    virtual RubiksCube &r() =  0;

    virtual RubiksCube &rPrime() = 0;

    virtual RubiksCube &r2() = 0;

    virtual RubiksCube &u() =  0;

    virtual RubiksCube &uPrime() = 0;

    virtual RubiksCube &u2() = 0;

    virtual RubiksCube &d() =  0;

    virtual RubiksCube &dPrime() = 0;

    virtual RubiksCube &d2() = 0;
};


#endif //RUBICSCUBESOLVER_RUBIKSCUBE_H
