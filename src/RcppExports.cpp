// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// expand_tkey
Rcpp::DataFrame expand_tkey(Rcpp::DataFrame tkey);
RcppExport SEXP rplexos_expand_tkey(SEXP tkeySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type tkey(tkeySEXP);
    rcpp_result_gen = Rcpp::wrap(expand_tkey(tkey));
    return rcpp_result_gen;
END_RCPP
}
// process_xml
Rcpp::List process_xml(Rcpp::CharacterVector xml);
RcppExport SEXP rplexos_process_xml(SEXP xmlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type xml(xmlSEXP);
    rcpp_result_gen = Rcpp::wrap(process_xml(xml));
    return rcpp_result_gen;
END_RCPP
}
