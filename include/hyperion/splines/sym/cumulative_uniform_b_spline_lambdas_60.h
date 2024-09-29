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
 *     res: Matrix51
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 5, 1> CumulativeUniformBSplineLambdas60(const Scalar ut) {
  // Total ops: 34

  // Input arrays

  // Intermediate terms (12)
  const Scalar _tmp0 = std::pow(ut, Scalar(2));
  const Scalar _tmp1 = (Scalar(1) / Scalar(12)) * _tmp0;
  const Scalar _tmp2 = std::pow(ut, Scalar(5));
  const Scalar _tmp3 = (Scalar(1) / Scalar(120)) * _tmp2;
  const Scalar _tmp4 = std::pow(ut, Scalar(4));
  const Scalar _tmp5 = (Scalar(1) / Scalar(24)) * _tmp4;
  const Scalar _tmp6 = (Scalar(1) / Scalar(12)) * [&]() {
    const Scalar base = ut;
    return base * base * base;
  }();
  const Scalar _tmp7 = _tmp6 + (Scalar(1) / Scalar(24)) * ut;
  const Scalar _tmp8 = (Scalar(1) / Scalar(4)) * _tmp0;
  const Scalar _tmp9 = -Scalar(1) / Scalar(30) * _tmp2;
  const Scalar _tmp10 = (Scalar(1) / Scalar(8)) * _tmp4;
  const Scalar _tmp11 = -_tmp6 + (Scalar(11) / Scalar(24)) * ut;

  // Output terms (1)
  Eigen::Matrix<Scalar, 5, 1> _res;

  _res(0, 0) = -_tmp1 + _tmp3 - _tmp5 + _tmp7 + Scalar(119) / Scalar(120);
  _res(1, 0) = _tmp10 + _tmp11 - _tmp8 + _tmp9 + Scalar(31) / Scalar(40);
  _res(2, 0) = -_tmp10 + _tmp11 + (Scalar(1) / Scalar(20)) * _tmp2 + _tmp8 + Scalar(9) / Scalar(40);
  _res(3, 0) = _tmp1 + _tmp5 + _tmp7 + _tmp9 + Scalar(1) / Scalar(120);
  _res(4, 0) = _tmp3;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
