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
 * Symbolic function: cumulative_uniform_b_spline_lambdas
 *
 * Args:
 *     ut: Scalar
 *
 * Outputs:
 *     res: Matrix33
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 3, 3> CumulativeUniformBSplineLambdas42(const Scalar ut) {
  // Total ops: 19

  // Input arrays

  // Intermediate terms (5)
  const Scalar _tmp0 = (Scalar(1) / Scalar(2)) * ut;
  const Scalar _tmp1 = std::pow(ut, Scalar(2));
  const Scalar _tmp2 = (Scalar(1) / Scalar(2)) * _tmp1;
  const Scalar _tmp3 = [&]() {
    const Scalar base = ut;
    return base * base * base;
  }();
  const Scalar _tmp4 = (Scalar(1) / Scalar(6)) * _tmp3;

  // Output terms (1)
  Eigen::Matrix<Scalar, 3, 3> _res;

  _res(0, 0) = _tmp0 - _tmp2 + _tmp4 + Scalar(5) / Scalar(6);
  _res(1, 0) = _tmp0 + _tmp2 - Scalar(1) / Scalar(3) * _tmp3 + Scalar(1) / Scalar(6);
  _res(2, 0) = _tmp4;
  _res(0, 1) = _tmp2 - ut + Scalar(1) / Scalar(2);
  _res(1, 1) = -_tmp1 + ut + Scalar(1) / Scalar(2);
  _res(2, 1) = _tmp2;
  _res(0, 2) = ut - 1;
  _res(1, 2) = 1 - 2 * ut;
  _res(2, 2) = ut;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
