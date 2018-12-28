//
// Created by bazyli on 28.12.18.
//

#ifndef TSP_TSPGENSOLVER_H
#define TSP_TSPGENSOLVER_H

#include "TSPSolver.h"

/**
 * Genetic Algorithm solver for TSP.
 */
class TSPGenSolver : public TSPSolver {

    /** Size of the one population. */
    int populationSize = 100;

    /** Number of best individuals carried over to the next generation. */
    int eliteSize = 20;

    /** Rate at which mutations occur. */
    float mutationRate = 0.01;

    /** Number of generations to evolve. */
    int generations = 500;

public:

    using TSPSolver::TSPSolver;

    Path solve() override;

    void setPopulationSize(int populationSize);

    void setEliteSize(int eliteSize);

    void setMutationRate(float mutationRate);

    void setGenerations(int generations);

};


#endif //TSP_TSPGENSOLVER_H