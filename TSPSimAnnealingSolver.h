//
// Created by bazyli on 12.11.18.
//

#ifndef TSP_TSPSIMANNEALINGSOLVER_H
#define TSP_TSPSIMANNEALINGSOLVER_H

#include "TSPSolver.h"

/**
 * Simulated Annealing solver for TSP.
 */
class TSPSimAnnealingSolver : public TSPSolver {

    /** Initial temperature. */
    double initTemp = 1000;

    /** Minimal temperature (stop condition). */
    double endTemp = 0.0001;

    /** Cooling rate. */
    double coolingRate = 0.001;

    /** Neighbourhood type: 0 - swap, 1 - insert, 2 - invert. */
    int neighbourhoodType = 0;

    /** Number of iterations for each temperature cycle. */
    int iterations = 20;

    Path randomPath();

    void move(Path &path, int x, int y);

    Path randomNeighbour(Path path);

    double randomProb();

public:

    using TSPSolver::TSPSolver;

    Path solve() override;

    void setInitTemp(double initTemp);

    void setEndTemp(double endTemp);

    void setCoolingRate(double coolingRate);

    void setNeighbourhoodType(int neighbourhoodType);

    void setIterations(int iterations);

};


#endif //TSP_TSPSIMANNEALINGSOLVER_H