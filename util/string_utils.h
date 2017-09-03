#pragma once

namespace StringUtils {

std::vector<std::string> Split(const std::string& s, const string& delimer, bool reserve_empty = false);
  
std::string ToLower(const std::string& s);
std::string ToUpper(const std::string& s);

// return true if all member is alphabet
bool IsAphabet(const std::string& s);

// return true if all member is alphabet or numer
bool IsAlphanum(const std::string& s);

// return true all member is hex number
bool IsHexstr(const std::string& s);
  
// return true if s contains c
bool Contains(const std::string& s, char c);

bool Contains(const std::string& s, char c);

bool StartWith(const std::string& s const std::string& t);
  
bool EndedWith(const std::string& s const std::string& t);


} // namespace StringUtils
