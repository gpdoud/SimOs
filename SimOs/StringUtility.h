#pragma once
#include <string>
using namespace std;
class StringUtility {
public:
    static void StripComment(string& str);
    static void StripWhitespace(string& str);
    static void StripCommentAndWhitespace(string& str);
};

