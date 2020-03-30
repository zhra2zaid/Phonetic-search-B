#include "doctest.h"
#include "PhoneticFinder.hpp"


using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b and f,also lower-case and upper-case") {
    
  string text = "xxx happy yyy";
    CHECK(find(text, "hafpy") == string("happy"));
    CHECK(find(text, "hapfy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    CHECK(find(text, "Habpy") == string("happy"));
    CHECK(find(text, "habpY") == string("happy"));
}
TEST_CASE("Test replacement of g and j,also lower-case and upper-case") {
    
  string text = "xxx good jop yyy";
    CHECK(find(text, "good") == string("good"));
    CHECK(find(text, "gooD") == string("good"));
    CHECK(find(text, "Good") == string("good"));
    CHECK(find(text, "jop") == string("jop"));
    CHECK(find(text, "Jop") == string("jop"));
    CHECK(find(text, "jood") == string("good"));
    CHECK(find(text, "gop") == string("jop"));

}
TEST_CASE("Test replacement of c and k and q,also lower-case and upper-case") {
    
  string text = "cat queen kind";
    CHECK(find(text, "cat") == string("cat"));
        CHECK(find(text, "cAt") == string("cat"));
    CHECK(find(text, "qat") == string("cat"));
    CHECK(find(text, "kat") == string("cat"));
    CHECK(find(text, "queen") == string("queen"));
    CHECK(find(text, "queEn") == string("queen"));
    CHECK(find(text, "qUeen") == string("queen"));
    CHECK(find(text, "Queen") == string("queen"));
    CHECK(find(text, "cueen") == string("queen"));
    CHECK(find(text, "kueen") == string("queen"));
    CHECK(find(text, "kind") == string("kind"));
        CHECK(find(text, "Kind") == string("kind"));
    CHECK(find(text, "kiNd") == string("kind"));
    CHECK(find(text, "kinD") == string("kind"));
     CHECK(find(text, "cind") == string("kind"));
    CHECK(find(text, "qind") == string("kind"));

}
TEST_CASE("Test replacement of s and z,also lower-case and upper-case") {
    
  string text = "the suspect was eating pizza"
    CHECK(find(text, "suspect") == string("suspect"));
    CHECK(find(text, "SuSbEcT") == string("suspect"));
    CHECK(find(text, "zozbekt") == string("suspect"));
    CHECK(find(text, "SUSPECT") == string("suspect"));
    CHECK(find(text, "Vaz") == string("was"));
    CHECK(find(text, "Was") == string("was"));
    CHECK(find(text, "wAZ") == string("was"));
    CHECK(find(text, "BiZza") == string("pizza"));
    CHECK(find(text, "bissa") == string("pizza"));
    CHECK(find(text, "PyzZa") == string("pizza"));
    CHECK(find(text, "PIZZA") == string("pizza"));
}
TEST_CASE("Test replacement of d and t,also lower-case and upper-case") {
    string text = "i didnt mean that";
    CHECK(find(text, "didnd") == string("didnt"));
    CHECK(find(text, "Didnt") == string("didnt"));
    CHECK(find(text, "tidnt") == string("didnt"));
    CHECK(find(text, "Tidnt") == string("didnt"));
    CHECK(find(text, "that") == string("that"));
    CHECK(find(text, "dhat") == string("that"));
    CHECK(find(text, "Dhad") == string("that"));
    CHECK(find(text, "thad") == string("that"));
    CHECK(find(text, "That") == string("that"));
}
TEST_CASE("Test replacement of o and u,also lower-case and upper-case") {
    string text = "I found a flower by my house";
    CHECK(find(text, "found") == string("found"));
    CHECK(find(text, "fuund") == string("found"));
    CHECK(find(text, "fOund") == string("found"));
    CHECK(find(text, "foond") == string("found"));
    CHECK(find(text, "foUnd") == string("found"));
    CHECK(find(text, "flower") == string("flower"));
    CHECK(find(text, "fluwer") == string("flower"));
    CHECK(find(text, "flOwer") == string("flower"));
    CHECK(find(text, "flUwer") == string("flower"));
    CHECK(find(text, "house") == string("house"));
    CHECK(find(text, "hOuse") == string("house"));
    CHECK(find(text, "hoUse") == string("house"));
    CHECK(find(text, "huuse") == string("house"));
   CHECK(find(text, "hoOse") == string("house"));
   CHECK(find(text, "hoose") == string("house"));
}
TEST_CASE("Test replacement of i and y,also lower-case and upper-case") {
    string text = "get fit working out at the gym";
    CHECK(find(text, "gYm") == string("gym"));
    CHECK(find(text, "gim") == string("gym"));
    CHECK(find(text, "gym") == string("gym"));
    CHECK(find(text, "gIm") == string("gym"));
    CHECK(find(text, "fIt") == string("fit"));
    CHECK(find(text, "fyt") == string("fit"));
    CHECK(find(text, "workyng") == string("working"));
    CHECK(find(text, "working") == string("working"));
    CHECK(find(text, "workYng") == string("working"));
}
TEST_CASE("Test capital letters") {
    string text = "Test Capital Letters";
    CHECK(find(text, "test") == string("Test"));
    CHECK(find(text, "TEST") == string("Test"));
    CHECK(find(text, "tesT") == string("Test"));
    CHECK(find(text, "capital") == string("Capital"));
    CHECK(find(text, "CAPITAL") == string("Capital"));
    CHECK(find(text, "CapitaL") == string("Capital"));
    CHECK(find(text, "letters") == string("Letters"));
    CHECK(find(text, "LETTERS") == string("Letters"));
    CHECK(find(text, "letTers") == string("Letters"));
}
TEST_CASE("Test rendom letters letters") {
    string text = "VvvWn GggIgjjJ cCKkgq sSzSzf fjnGdDtrtT ounuUIO IyygyuYi";
    CHECK(find(text, "VVvWn") == string("VvvWn"));
    CHECK(find(text, "Vvvwn") == string("VvvWn"));
    CHECK(find(text, "VwvWn") == string("VvvWn"));
    CHECK(find(text, "WvvWn") == string("VvvWn"));
    CHECK(find(text, "GggIggjJ") == string("GggIgjjJ"));
    CHECK(find(text, "GgJIgjjJ") == string("GggIgjjJ"));
    CHECK(find(text, "GjgIgjjJ") == string("GggIgjjJ"));
    CHECK(find(text, "cCKkgq") == string("cCKkgq"));
    CHECK(find(text, "ccKkgq") == string("cCKkgq"));
     CHECK(find(text, "cCckgq") == string("cCKkgq"));
    CHECK(find(text, "cCKqgq") == string("cCKkgq"));
    CHECK(find(text, "kCKkgq") == string("cCKkgq"));
    CHECK(find(text, "sSzSzf") == string("sSzSzf"));
    CHECK(find(text, "sszSzf") == string("sSzSzf"));
    CHECK(find(text, "sSsSzf") == string("sSzSzf"));
    CHECK(find(text, "sSzzzf") == string("sSzSzf"));
    CHECK(find(text, "fjnGdDtrdT") == string("fjnGdDtrtT"));
    CHECK(find(text, "fjnGdDdrtT") == string("fjnGdDtrtT"));
    CHECK(find(text, "fjnGdttrtT") == string("fjnGdDtrtT"));
    CHECK(find(text, "fjnGtDtrtT") == string("fjnGdDtrtT"));
    CHECK(find(text, "ounoUIO") == string("ounuUIO"));
    CHECK(find(text, "uunuUIO") == string("ounuUIO"));
    CHECK(find(text, "ounuUIu") == string("ounuUIO"));
    CHECK(find(text, "ounuoIO") == string("ounuUIO"));
    

}