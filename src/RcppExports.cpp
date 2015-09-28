// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// SEv
arma::vec SEv(arma::mat hessMat, int dimMat);
RcppExport SEXP iLaplace_SEv(SEXP hessMatSEXP, SEXP dimMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type hessMat(hessMatSEXP);
    Rcpp::traits::input_parameter< int >::type dimMat(dimMatSEXP);
    __result = Rcpp::wrap(SEv(hessMat, dimMat));
    return __result;
END_RCPP
}
// seq_C
arma::vec seq_C(double a, double cent, double b, int lengthOut);
RcppExport SEXP iLaplace_seq_C(SEXP aSEXP, SEXP centSEXP, SEXP bSEXP, SEXP lengthOutSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type cent(centSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< int >::type lengthOut(lengthOutSEXP);
    __result = Rcpp::wrap(seq_C(a, cent, b, lengthOut));
    return __result;
END_RCPP
}
// seqMat
List seqMat(arma::vec par, arma::vec se, int lengthOut, int q, double delta);
RcppExport SEXP iLaplace_seqMat(SEXP parSEXP, SEXP seSEXP, SEXP lengthOutSEXP, SEXP qSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type se(seSEXP);
    Rcpp::traits::input_parameter< int >::type lengthOut(lengthOutSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    __result = Rcpp::wrap(seqMat(par, se, lengthOut, q, delta));
    return __result;
END_RCPP
}
// ldetHessBlocks
arma::vec ldetHessBlocks(arma::mat hessMat, int dimMat);
RcppExport SEXP iLaplace_ldetHessBlocks(SEXP hessMatSEXP, SEXP dimMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type hessMat(hessMatSEXP);
    Rcpp::traits::input_parameter< int >::type dimMat(dimMatSEXP);
    __result = Rcpp::wrap(ldetHessBlocks(hessMat, dimMat));
    return __result;
END_RCPP
}