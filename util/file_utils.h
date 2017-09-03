#pragma once

#include "status.h"

namespace jungle::file_utils {

bool IsExist(const std::string& path);

Status CreateFile(const std::string& path);

Status DeleteFile(const std::string& path);
  
Status ReadFile(const std::string& path, std::string* content);

Status WriteFile(const std::string& path, const std::string& content);

} // namespace file_utils
