// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/jiebaR.h"
#include <Rcpp.h>

using namespace Rcpp;

// filecoding
CharacterVector filecoding(CharacterVector file);
RcppExport SEXP jiebaR_filecoding(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type file(fileSEXP);
    __result = Rcpp::wrap(filecoding(file));
    return __result;
END_RCPP
}
// get_idf_cpp
List get_idf_cpp(List x, Nullable<CharacterVector> stop_);
RcppExport SEXP jiebaR_get_idf_cpp(SEXP xSEXP, SEXP stop_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< Nullable<CharacterVector> >::type stop_(stop_SEXP);
    __result = Rcpp::wrap(get_idf_cpp(x, stop_));
    return __result;
END_RCPP
}
// get_tuple_list
List get_tuple_list(ListOf<CharacterVector> x, unsigned int step);
RcppExport SEXP jiebaR_get_tuple_list(SEXP xSEXP, SEXP stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< ListOf<CharacterVector> >::type x(xSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type step(stepSEXP);
    __result = Rcpp::wrap(get_tuple_list(x, step));
    return __result;
END_RCPP
}
// get_tuple_vector
List get_tuple_vector(CharacterVector& x, unsigned int step);
RcppExport SEXP jiebaR_get_tuple_vector(SEXP xSEXP, SEXP stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type step(stepSEXP);
    __result = Rcpp::wrap(get_tuple_vector(x, step));
    return __result;
END_RCPP
}
// mp_ptr
XPtr<Seg<MPSegment>> mp_ptr(CharacterVector& dict, CharacterVector& user, Nullable<CharacterVector>& stop);
RcppExport SEXP jiebaR_mp_ptr(SEXP dictSEXP, SEXP userSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type user(userSEXP);
    Rcpp::traits::input_parameter< Nullable<CharacterVector>& >::type stop(stopSEXP);
    __result = Rcpp::wrap(mp_ptr(dict, user, stop));
    return __result;
END_RCPP
}
// mp_cut
CharacterVector mp_cut(CharacterVector& x, XPtr<Seg<MPSegment>> cutter);
RcppExport SEXP jiebaR_mp_cut(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<Seg<MPSegment>> >::type cutter(cutterSEXP);
    __result = Rcpp::wrap(mp_cut(x, cutter));
    return __result;
END_RCPP
}
// mix_ptr
XPtr<Seg<MixSegment>> mix_ptr(CharacterVector& dict, CharacterVector& model, CharacterVector& user, Nullable<CharacterVector>& stop);
RcppExport SEXP jiebaR_mix_ptr(SEXP dictSEXP, SEXP modelSEXP, SEXP userSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type user(userSEXP);
    Rcpp::traits::input_parameter< Nullable<CharacterVector>& >::type stop(stopSEXP);
    __result = Rcpp::wrap(mix_ptr(dict, model, user, stop));
    return __result;
END_RCPP
}
// mix_cut
CharacterVector mix_cut(CharacterVector& x, XPtr<Seg<MixSegment>> cutter);
RcppExport SEXP jiebaR_mix_cut(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<Seg<MixSegment>> >::type cutter(cutterSEXP);
    __result = Rcpp::wrap(mix_cut(x, cutter));
    return __result;
END_RCPP
}
// query_ptr
XPtr<Seg<QuerySegment>> query_ptr(CharacterVector& dict, CharacterVector& model, int& n, Nullable<CharacterVector>& stop);
RcppExport SEXP jiebaR_query_ptr(SEXP dictSEXP, SEXP modelSEXP, SEXP nSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< Nullable<CharacterVector>& >::type stop(stopSEXP);
    __result = Rcpp::wrap(query_ptr(dict, model, n, stop));
    return __result;
END_RCPP
}
// query_cut
CharacterVector query_cut(CharacterVector& x, XPtr<Seg<QuerySegment>> cutter);
RcppExport SEXP jiebaR_query_cut(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<Seg<QuerySegment>> >::type cutter(cutterSEXP);
    __result = Rcpp::wrap(query_cut(x, cutter));
    return __result;
END_RCPP
}
// hmm_ptr
XPtr<Seg<HMMSegment>> hmm_ptr(CharacterVector& model, Nullable<CharacterVector>& stop);
RcppExport SEXP jiebaR_hmm_ptr(SEXP modelSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< Nullable<CharacterVector>& >::type stop(stopSEXP);
    __result = Rcpp::wrap(hmm_ptr(model, stop));
    return __result;
END_RCPP
}
// hmm_cut
CharacterVector hmm_cut(CharacterVector& x, XPtr<Seg<HMMSegment>> cutter);
RcppExport SEXP jiebaR_hmm_cut(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<Seg<HMMSegment>> >::type cutter(cutterSEXP);
    __result = Rcpp::wrap(hmm_cut(x, cutter));
    return __result;
END_RCPP
}
// tag_ptr
XPtr<tagger> tag_ptr(CharacterVector& dict, CharacterVector& model, CharacterVector& user, Nullable<CharacterVector>& stop);
RcppExport SEXP jiebaR_tag_ptr(SEXP dictSEXP, SEXP modelSEXP, SEXP userSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type user(userSEXP);
    Rcpp::traits::input_parameter< Nullable<CharacterVector>& >::type stop(stopSEXP);
    __result = Rcpp::wrap(tag_ptr(dict, model, user, stop));
    return __result;
END_RCPP
}
// tag_tag
CharacterVector tag_tag(CharacterVector& x, XPtr<tagger> cutter);
RcppExport SEXP jiebaR_tag_tag(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<tagger> >::type cutter(cutterSEXP);
    __result = Rcpp::wrap(tag_tag(x, cutter));
    return __result;
END_RCPP
}
// tag_file
CharacterVector tag_file(CharacterVector& x, XPtr<tagger> cutter);
RcppExport SEXP jiebaR_tag_file(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<tagger> >::type cutter(cutterSEXP);
    __result = Rcpp::wrap(tag_file(x, cutter));
    return __result;
END_RCPP
}
// key_ptr
XPtr<keyword> key_ptr(unsigned int& n, CharacterVector& dict, CharacterVector& model, CharacterVector& idf, CharacterVector& stop);
RcppExport SEXP jiebaR_key_ptr(SEXP nSEXP, SEXP dictSEXP, SEXP modelSEXP, SEXP idfSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< unsigned int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type idf(idfSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type stop(stopSEXP);
    __result = Rcpp::wrap(key_ptr(n, dict, model, idf, stop));
    return __result;
END_RCPP
}
// key_tag
CharacterVector key_tag(CharacterVector& x, XPtr<keyword> cutter);
RcppExport SEXP jiebaR_key_tag(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<keyword> >::type cutter(cutterSEXP);
    __result = Rcpp::wrap(key_tag(x, cutter));
    return __result;
END_RCPP
}
// key_cut
CharacterVector key_cut(CharacterVector& x, XPtr<keyword> cutter);
RcppExport SEXP jiebaR_key_cut(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<keyword> >::type cutter(cutterSEXP);
    __result = Rcpp::wrap(key_cut(x, cutter));
    return __result;
END_RCPP
}
// key_keys
CharacterVector key_keys(vector<string>& x, XPtr<keyword> cutter);
RcppExport SEXP jiebaR_key_keys(SEXP xSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< vector<string>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< XPtr<keyword> >::type cutter(cutterSEXP);
    __result = Rcpp::wrap(key_keys(x, cutter));
    return __result;
END_RCPP
}
// sim_ptr
XPtr<sim> sim_ptr(CharacterVector& dict, CharacterVector& model, CharacterVector& idf, CharacterVector& stop);
RcppExport SEXP jiebaR_sim_ptr(SEXP dictSEXP, SEXP modelSEXP, SEXP idfSEXP, SEXP stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type idf(idfSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type stop(stopSEXP);
    __result = Rcpp::wrap(sim_ptr(dict, model, idf, stop));
    return __result;
END_RCPP
}
// sim_sim
List sim_sim(CharacterVector& code, int& topn, XPtr<sim> cutter);
RcppExport SEXP jiebaR_sim_sim(SEXP codeSEXP, SEXP topnSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type code(codeSEXP);
    Rcpp::traits::input_parameter< int& >::type topn(topnSEXP);
    Rcpp::traits::input_parameter< XPtr<sim> >::type cutter(cutterSEXP);
    __result = Rcpp::wrap(sim_sim(code, topn, cutter));
    return __result;
END_RCPP
}
// sim_vec
List sim_vec(vector<string>& code, int& topn, XPtr<sim> cutter);
RcppExport SEXP jiebaR_sim_vec(SEXP codeSEXP, SEXP topnSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< vector<string>& >::type code(codeSEXP);
    Rcpp::traits::input_parameter< int& >::type topn(topnSEXP);
    Rcpp::traits::input_parameter< XPtr<sim> >::type cutter(cutterSEXP);
    __result = Rcpp::wrap(sim_vec(code, topn, cutter));
    return __result;
END_RCPP
}
// sim_distance
List sim_distance(CharacterVector& lhs, CharacterVector& rhs, int& topn, XPtr<sim> cutter);
RcppExport SEXP jiebaR_sim_distance(SEXP lhsSEXP, SEXP rhsSEXP, SEXP topnSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type lhs(lhsSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type rhs(rhsSEXP);
    Rcpp::traits::input_parameter< int& >::type topn(topnSEXP);
    Rcpp::traits::input_parameter< XPtr<sim> >::type cutter(cutterSEXP);
    __result = Rcpp::wrap(sim_distance(lhs, rhs, topn, cutter));
    return __result;
END_RCPP
}
// sim_distance_vec
List sim_distance_vec(vector<string>& lcode, vector<string>& rcode, int& topn, XPtr<sim> cutter);
RcppExport SEXP jiebaR_sim_distance_vec(SEXP lcodeSEXP, SEXP rcodeSEXP, SEXP topnSEXP, SEXP cutterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< vector<string>& >::type lcode(lcodeSEXP);
    Rcpp::traits::input_parameter< vector<string>& >::type rcode(rcodeSEXP);
    Rcpp::traits::input_parameter< int& >::type topn(topnSEXP);
    Rcpp::traits::input_parameter< XPtr<sim> >::type cutter(cutterSEXP);
    __result = Rcpp::wrap(sim_distance_vec(lcode, rcode, topn, cutter));
    return __result;
END_RCPP
}
// u64tobin
CharacterVector u64tobin(CharacterVector& x);
RcppExport SEXP jiebaR_u64tobin(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector& >::type x(xSEXP);
    __result = Rcpp::wrap(u64tobin(x));
    return __result;
END_RCPP
}
// words_freq
IntegerVector words_freq(const CharacterVector& x);
RcppExport SEXP jiebaR_words_freq(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const CharacterVector& >::type x(xSEXP);
    __result = Rcpp::wrap(words_freq(x));
    return __result;
END_RCPP
}
