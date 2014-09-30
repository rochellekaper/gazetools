// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// distance_2_point
std::vector<double> distance_2_point(std::vector<double> x, std::vector<double> y, double rx, double ry, double sw, double sh, std::vector<double> ez, std::vector<double> ex, std::vector<double> ey);
RcppExport SEXP gazetools_distance_2_point(SEXP xSEXP, SEXP ySEXP, SEXP rxSEXP, SEXP rySEXP, SEXP swSEXP, SEXP shSEXP, SEXP ezSEXP, SEXP exSEXP, SEXP eySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP );
        Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP );
        Rcpp::traits::input_parameter< double >::type rx(rxSEXP );
        Rcpp::traits::input_parameter< double >::type ry(rySEXP );
        Rcpp::traits::input_parameter< double >::type sw(swSEXP );
        Rcpp::traits::input_parameter< double >::type sh(shSEXP );
        Rcpp::traits::input_parameter< std::vector<double> >::type ez(ezSEXP );
        Rcpp::traits::input_parameter< std::vector<double> >::type ex(exSEXP );
        Rcpp::traits::input_parameter< std::vector<double> >::type ey(eySEXP );
        std::vector<double> __result = distance_2_point(x, y, rx, ry, sw, sh, ez, ex, ey);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// subtended_angle
std::vector<double> subtended_angle(std::vector<double> x1, std::vector<double> y1, std::vector<double> x2, std::vector<double> y2, double rx, double ry, double sw, double sh, std::vector<double> ez, std::vector<double> ex, std::vector<double> ey);
RcppExport SEXP gazetools_subtended_angle(SEXP x1SEXP, SEXP y1SEXP, SEXP x2SEXP, SEXP y2SEXP, SEXP rxSEXP, SEXP rySEXP, SEXP swSEXP, SEXP shSEXP, SEXP ezSEXP, SEXP exSEXP, SEXP eySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector<double> >::type x1(x1SEXP );
        Rcpp::traits::input_parameter< std::vector<double> >::type y1(y1SEXP );
        Rcpp::traits::input_parameter< std::vector<double> >::type x2(x2SEXP );
        Rcpp::traits::input_parameter< std::vector<double> >::type y2(y2SEXP );
        Rcpp::traits::input_parameter< double >::type rx(rxSEXP );
        Rcpp::traits::input_parameter< double >::type ry(rySEXP );
        Rcpp::traits::input_parameter< double >::type sw(swSEXP );
        Rcpp::traits::input_parameter< double >::type sh(shSEXP );
        Rcpp::traits::input_parameter< std::vector<double> >::type ez(ezSEXP );
        Rcpp::traits::input_parameter< std::vector<double> >::type ex(exSEXP );
        Rcpp::traits::input_parameter< std::vector<double> >::type ey(eySEXP );
        std::vector<double> __result = subtended_angle(x1, y1, x2, y2, rx, ry, sw, sh, ez, ex, ey);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// uidvec
NumericVector uidvec(LogicalVector x);
RcppExport SEXP gazetools_uidvec(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP );
        NumericVector __result = uidvec(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
