/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <react/core/LocalData.h>
#include <react/core/Props.h>
#include <react/core/ReactPrimitives.h>
#include <react/core/ShadowNode.h>
#include <react/events/EventEmitter.h>

namespace facebook {
namespace react {

/*
 * An object which supposed to be used as a parameter specifying a shape
 * of created or cloned ShadowNode.
 * Note: Most of the fields are `const &` references (essentially just raw
 * pointers) which means that the Fragment does not copy/store them or
 * retain ownership of them.
 */
struct ShadowNodeFragment {
  Tag tag = 0;
  Tag rootTag = 0;
  const SharedProps &props = propsPlaceholder();
  const SharedEventEmitter &eventEmitter = eventEmitterPlaceholder();
  const SharedShadowNodeSharedList &children = childrenPlaceholder();
  const SharedLocalData &localData = localDataPlaceholder();

  static Tag tagPlaceholder();
  static Tag surfaceIdPlaceholder();
  static SharedProps &propsPlaceholder();
  static SharedEventEmitter &eventEmitterPlaceholder();
  static SharedShadowNodeSharedList &childrenPlaceholder();
  static SharedLocalData &localDataPlaceholder();
};

} // namespace react
} // namespace facebook
