#include <string>
#include "StringUtility.h"

using namespace std;

void StringUtility::StripComment(string& str) {
    string slashes = "//";
    auto pos = str.find(slashes);
    if(pos == string::npos) // not found
        return;
    str = str.substr(0, pos);
}
void StringUtility::StripWhitespace(string& str) {
    const char* ws = " \t\n\r\f\v";
    str.erase(0, str.find_first_not_of(ws));
    str.erase(str.find_last_not_of(ws) + 1);
}
void StringUtility::StripCommentAndWhitespace(string& str) {
    StringUtility::StripComment(str);
    StringUtility::StripWhitespace(str);
}