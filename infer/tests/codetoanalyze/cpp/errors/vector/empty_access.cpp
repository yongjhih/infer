/*
 * Copyright (c) 2016 - present Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#include <vector>

int access_empty() {
  const std::vector<int> vec;
  return vec[0];
}

int access_nonempty() {
  const std::vector<int> vec(1);
  return vec[0];
}

int clear_empty() {
  std::vector<int> vec(1);
  vec.clear();
  return vec[0];
}

int resize0_empty() {
  std::vector<int> vec(1);
  vec.resize(0);
  return vec[0];
}

int resize1_nonempty() {
  std::vector<int> vec;
  vec.resize(1);
  return vec[0];
}

int push_back_nonempty() {
  std::vector<int> vec;
  vec.push_back(1);
  return vec[0];
}

int copy_empty() {
  std::vector<int> vec1;
  std::vector<int> vec2 = vec1;
  return vec2[0];
}

int copy_nonempty() {
  std::vector<int> vec1(10);
  std::vector<int> vec2 = vec1;
  return vec2[0];
}

int assign_empty() {
  std::vector<int> vec1;
  std::vector<int> vec2(1);
  vec2 = vec1;
  return vec2[0];
}

int assign_nonempty() {
  std::vector<int> vec1(1);
  std::vector<int> vec2;
  vec2 = vec1;
  return vec2[0];
}

int empty_check_nonempty() {
  std::vector<int> vec;
  if (vec.empty()) {
    return 1;
  }
  return vec[0];
}

int empty_check_nonempty2() {
  std::vector<int> vec;
  if (vec.empty()) {
    vec.push_back(1);
  }
  return vec[0];
}

int empty_check_access_empty() {
  std::vector<int> vec;
  if (vec.empty()) {
    return vec[0];
  }
  return 1;
}

int size_check0_empty() {
  std::vector<int> vec;
  if (vec.size() == 0) {
    return vec[0];
  }
  return 1;
}

int size_check1_nonempty() {
  std::vector<int> vec;
  if (vec.size() > 0) {
    return vec[0];
  }
  return 1;
}

int vector_param_access(std::vector<int>& v) {
  return v.back(); // shouldn't report anything here
}

/*
// FIXME: analyzer reports it as NULL_DEREFERENCE (B5) instead
// of EMPTY_VECTOR_ACCESS
int vector_as_param_empty() {
  std::vector<int> v;
  return vector_param_access(v);
}*/

int vector_as_param_nonempty() {
  std::vector<int> v(1);
  return vector_param_access(v);
}
