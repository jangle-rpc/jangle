#pragma once

namespace jangle::fiber {
} // namespace jangle::fiber

namespace jangle {

template<typename Func, typename ...Arg>
void go(Func&& f, Arg&& ...arg) {
}

} // namespace jangle
