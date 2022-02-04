#include <math.h>
#include "func_wraps.h"

// function decoration to unify signature;
// every function should have
complex double fadd(complex double a, complex double b) {return a + b;}
complex double fsub(complex double a, complex double b) {return a ? a - b : -b;}
complex double fmul(complex double a, complex double b) {return a * b;}
complex double fdev(complex double a, complex double b) {return a / b;}
complex double fpow(complex double a, complex double b) {return cpow(a, b);}
complex double fsin(complex double a, complex double b) {return csin(b);}
complex double fcos(complex double a, complex double b) {return ccos(b);}
complex double ftan(complex double a, complex double b) {return ctan(b);}
complex double flog(complex double a, complex double b) {return clog(a) / clog(b); }
complex double flgn(complex double a, complex double b) {return clog(b);}
complex double fsrt(complex double a, complex double b) {return csqrt(b);}
complex double abso(complex double a, complex double b) {return cabs(b);}
complex double expa(complex double a, complex double b) {return cexp(b);}
complex double rily(complex double a, complex double b) {return creal(b);}
complex double imar(complex double a, complex double b) {return cimag(b);}
complex double phas(complex double a, complex double b) {return carg(b);}
complex double econ(complex double a, complex double b) {return M_E;}
complex double picn(complex double a, complex double b) {return M_PI;}
complex double nofn(complex double a, complex double b) {return 0;}

// function pointer array to perform action by executing function by its id
complex double (*funcArray[]) (complex double, complex double) = {
        fadd, fsub, fmul, fdev, fpow, nofn, nofn, nofn, nofn,
        fsin, fcos, ftan, flog, flgn, fsrt, fpow, abso, expa, rily, imar, abso, phas,
        econ, picn };