#ifndef __mmSignal__
#define __mmSignal__

#include <cmath>
#include <armadillo>

#ifndef M_PI
#define M_PI 3.14159265358979323846264338328
#endif /* PI as defined in gsl */
#ifndef M_2PI
#define M_2PI 6.28318530717958647692528676656
#endif /* 2*PI */
#ifndef M_PI_2
#define M_PI_2 1.57079632679489661923
#endif /* pi/2 */

namespace MoMa {
namespace Signal {
        
float mean( arma::vec feature );
    
float min( arma::vec feature );
    
float max( arma::vec feature );
    
arma::vec thresh( arma::vec feature, float high, float low, float min=0.0f, float max=1.0f );
    
arma::vec peaks( arma::vec feature, float width );
        
arma::vec hann( size_t size );


}
}

#endif
