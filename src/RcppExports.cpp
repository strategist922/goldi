// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// match_min
arma::uword match_min(arma::uvec term_vector);
RcppExport SEXP mineR_match_min(SEXP term_vectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::uvec >::type term_vector(term_vectorSEXP);
    __result = Rcpp::wrap(match_min(term_vector));
    return __result;
END_RCPP
}
// match
Rcpp::CharacterMatrix match(arma::uvec term_vector, arma::mat pdf_tdm, arma::mat term_tdm, arma::vec thresholds, arma::uvec pdf_index, std::vector<std::string> terms, std::vector<std::string> sentences);
RcppExport SEXP mineR_match(SEXP term_vectorSEXP, SEXP pdf_tdmSEXP, SEXP term_tdmSEXP, SEXP thresholdsSEXP, SEXP pdf_indexSEXP, SEXP termsSEXP, SEXP sentencesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::uvec >::type term_vector(term_vectorSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type pdf_tdm(pdf_tdmSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type term_tdm(term_tdmSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type pdf_index(pdf_indexSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type terms(termsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type sentences(sentencesSEXP);
    __result = Rcpp::wrap(match(term_vector, pdf_tdm, term_tdm, thresholds, pdf_index, terms, sentences));
    return __result;
END_RCPP
}
