//
// Created by bazyli on 25.10.18.
//

#ifndef C_TSPDPSOLVER_H
#define C_TSPDPSOLVER_H


#include "TSPSolver.h"

class TSPDPSolver : public TSPSolver {

    /** Number of subproblems. */
    unsigned int spNum = 0;

    /** Full set bit mask. */
    unsigned int FULL_SET = 0;

    /** Memoization matrix. */
    int **mem = nullptr;

    /** Predecessors matrix. */
    int **pred = nullptr;

    void init();

    void clean();

    int HeldKarp(int start, unsigned int set);

public:

    using TSPSolver::TSPSolver;

    explicit TSPDPSolver(TSP tsp);

    virtual ~TSPDPSolver();

    void setTsp(TSP tsp) override;

    Path solve() override;

};


#endif //C_TSPDPSOLVER_H
