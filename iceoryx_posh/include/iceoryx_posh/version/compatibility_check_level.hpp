// Copyright (c) 2020 by Robert Bosch GmbH. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef IOX_POSH_VERSION_COMPATIBILITY_CHECK_LEVEL_HPP
#define IOX_POSH_VERSION_COMPATIBILITY_CHECK_LEVEL_HPP

#include "iceoryx_utils/log/logstream.hpp"

namespace iox
{
namespace version
{
enum class CompatibilityCheckLevel
{
    OFF,
    MAJOR,
    MINOR,
    PATCH,
    COMMIT_ID,
    BUILD_DATE
};

inline iox::log::LogStream& operator<<(iox::log::LogStream& logstream, const version::CompatibilityCheckLevel& level)
{
    switch (level)
    {
    case CompatibilityCheckLevel::OFF:
        logstream << "OFF";
        break;
    case CompatibilityCheckLevel::MAJOR:
        logstream << "MAJOR";
        break;
    case CompatibilityCheckLevel::MINOR:
        logstream << "MINOR";
        break;
    case CompatibilityCheckLevel::PATCH:
        logstream << "PATCH";
        break;
    case CompatibilityCheckLevel::COMMIT_ID:
        logstream << "COMMIT_ID";
        break;
    case CompatibilityCheckLevel::BUILD_DATE:
        logstream << "BUILD_DATE";
        break;
    }
    return logstream;
}

} // namespace version
} // namespace iox
#endif // IOX_POSH_VERSION_COMPATIBILITY_CHECK_LEVEL_HPP
