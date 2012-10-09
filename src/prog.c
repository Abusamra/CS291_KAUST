#include <math.h>
#include "prog.h"

 static double calc1( double i ) { return i * i; }
  static double calc2( double i ) { return i + i; }
  static double calc3( double i ) { return pow( i, i ); }
//  static double calc4( double i ) { return i - i; }

double do_calc( double i ) { return calc3( calc2( calc1( i ) ) ); }


