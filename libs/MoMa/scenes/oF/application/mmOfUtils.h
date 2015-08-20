/**
 * @file mmOfUtils.h
 * @author Numediart
 * @date 2/04/15
 * @brief Utilitary functions to use MoMa in OF.
 *
 * Here go tools to use MoMa in OF@@.
 */

#ifndef __mmOfUtil__
#define __mmOfUtil__

#include <stdio.h>
#include <armadillo>
#include "ofMain.h"

namespace MoMa {

    struct MoMaBone {
        bool exists;
        ofVec3f head;
        ofVec3f tail;
    };
    
    /**
     * @brief Create a oF 3D vector from a 3-dim Armadillo vector
     *
     * Create a oF 3D vector from a 3-dim Armadillo vector
     *
     * @param data the arma vector
     * @return The ofVec3f with the input elements
     */
    ofVec3f toVec3f( arma::vec data );
    
    /**
     * @brief Create a oF Quaternion from a 4-dim Armadillo vector
     *
     * Create a oF Quaternion from a 4-dim Armadillo vector
     *
     * @param data the arma vector
     * @return The ofVec3f with the input elements
     */
    ofQuaternion toQuaternion( arma::vec data );
    
    ofVec3f getNodePosition( std::string nodename, Track &track, int frame );
    ofQuaternion getNodeRotation( std::string nodename, Track &track, int frame );
    MoMaBone getBoneByTail( std::string tailname, Track &track, int frame );
    
}

#endif
