// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// tf_idf
NumericMatrix tf_idf(NumericMatrix raw_frequency, NumericVector tid);
RcppExport SEXP TFIDF_tf_idf(SEXP raw_frequencySEXP, SEXP tidSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type raw_frequency(raw_frequencySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tid(tidSEXP);
    __result = Rcpp::wrap(tf_idf(raw_frequency, tid));
    return __result;
END_RCPP
}