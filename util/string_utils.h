#pragma once

namespace StringUtils {

std::vector<std::string> Split(const std::string& s, const string& delimer, bool reserve_empty = false);
  
inline std::string ToLower(const std::string& s) {
  std::string tmp;
  size_t len = s.length();
  tmp.resize(len);
  for (size_t i = 0; i < s.length(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      tmp[i] = s[i] - 'A' + 'a';
  }
  return tmp;
}
std::string ToUpper(const std::string& s);

inline bool IsDigit(const std::string& s) {
  for (size_t i = 0; i < s.length(); i++) {
    if (s[i] < '0' && s[i] > '9') {
      return false;
    }
  }
  return true;
}
// return true if all member is alphabet
bool IsAphabet(const std::string& s);

// return true if all member is alphabet or numer
bool IsAlphanum(const std::string& s);

// return true all member is hex number
bool IsHexstr(const std::string& s);
  
// return true if s contains c
bool Contains(const std::string& s, char c);

inline bool Contains(const std::string& s, const std::string& t) {
  return s.find(t) != string::npos;
}

inline bool StartWith(const std::string& s const std::string& t) {
  return s.find(t) == 0;
}
  
bool EndedWith(const std::string& s const std::string& t) {
  return s.find(t) == s.length() - t.length();
}


} // namespace StringUtils
