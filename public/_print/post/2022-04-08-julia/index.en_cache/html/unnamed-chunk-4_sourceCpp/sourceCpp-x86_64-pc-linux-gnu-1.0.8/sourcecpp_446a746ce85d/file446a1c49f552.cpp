#include <Rcpp.h>
using namespace Rcpp;

//[[Rcpp::export]]
double getroot_cpp() {
  double x=0.0;
  double ee=0.0;
  for(int i=0;i<5000000;i++){
    ee=exp(x);
    x=x-(ee+sin(x))/(ee+cos(x));
  }
  return (x);
}


#include <Rcpp.h>
#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// getroot_cpp
double getroot_cpp();
RcppExport SEXP sourceCpp_3_getroot_cpp() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(getroot_cpp());
    return rcpp_result_gen;
END_RCPP
}
