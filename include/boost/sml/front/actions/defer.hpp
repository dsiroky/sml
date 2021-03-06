//
// Copyright (c) 2016-2018 Kris Jusiak (kris at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#ifndef BOOST_SML_FRONT_ACTIONS_DEFER_HPP
#define BOOST_SML_FRONT_ACTIONS_DEFER_HPP

#include "boost/sml/front/operators.hpp"

namespace front {
namespace actions {

struct defer : action_base {
  template <class TEvent, class TSM, class TDeps, class TSubs>
  void operator()(const TEvent &event, TSM &sm, TDeps &, TSubs &) {
    sm.defer_.push(event);
  }
};

}  // actions
}  // front::actions

#endif
