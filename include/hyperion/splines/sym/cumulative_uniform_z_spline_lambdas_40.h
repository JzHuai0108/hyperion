// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

namespace sym {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: cumulative_uniform_z_spline_lambdas
 *
 * Args:
 *     ut: Scalar
 *
 * Outputs:
 *     res: Matrix31
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 3, 1> CumulativeUniformZSplineLambdas40(const Scalar ut) {
  // Total ops: 13

  // Input arrays

  // Intermediate terms (4)
  const Scalar _tmp0 = (Scalar(1) / Scalar(2)) * ut;
  const Scalar _tmp1 = std::pow(ut, Scalar(2));
  const Scalar _tmp2 = [&]() {
    const Scalar base = ut;
    return base * base * base;
  }();
  const Scalar _tmp3 = (Scalar(1) / Scalar(2)) * _tmp2;

  // Output terms (1)
  Eigen::Matrix<Scalar, 3, 1> _res;

  _res(0, 0) = _tmp0 - _tmp1 + _tmp3 + 1;
  _res(1, 0) = _tmp0 + (Scalar(3) / Scalar(2)) * _tmp1 - _tmp2;
  _res(2, 0) = -Scalar(1) / Scalar(2) * _tmp1 + _tmp3;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
