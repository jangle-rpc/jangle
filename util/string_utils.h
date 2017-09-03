#pragma once

namespace StringUtils {

std::vector<std::string> split(const std::string& s, const string& delimer, bool reserve_empty = false);
  
std::string to_lower(const std::string& s);
std::string to_upper(const std::string& s);

} // namespace StringUtils
