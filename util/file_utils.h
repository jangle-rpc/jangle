#pragma once

#include "status.h"

namespace jungle::file_utils {

bool IsExist(const std::string& path);

Status CreateFile(const std::string& path);

} // namespace file_utils
