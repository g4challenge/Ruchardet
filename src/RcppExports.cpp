// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// getCharEncoding
CharacterVector getCharEncoding(StringVector str);
RcppExport SEXP Ruchardet_getCharEncoding(SEXP strSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< StringVector >::type str(strSEXP );
        CharacterVector __result = getCharEncoding(str);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
