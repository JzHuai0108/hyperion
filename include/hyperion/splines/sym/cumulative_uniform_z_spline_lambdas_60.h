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
 *     res: Matrix51
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 5, 1> CumulativeUniformZSplineLambdas60(const Scalar ut) {
  // Total ops: 58

  // Input arrays

  // Intermediate terms (10)
  const Scalar _tmp0 = std::pow(ut, Scalar(5));
  const Scalar _tmp1 = -Scalar(5) / Scalar(24) * _tmp0;
  const Scalar _tmp2 = [&]() {
    const Scalar base = ut;
    return base * base * base;
  }();
  const Scalar _tmp3 = std::pow(ut, Scalar(4));
  const Scalar _tmp4 = (Scalar(1) / Scalar(12)) * ut;
  const Scalar _tmp5 = std::pow(ut, Scalar(2));
  const Scalar _tmp6 = (Scalar(1) / Scalar(24)) * _tmp5;
  const Scalar _tmp7 = (Scalar(5) / Scalar(6)) * _tmp0;
  const Scalar _tmp8 = -Scalar(7) / Scalar(12) * ut;
  const Scalar _tmp9 = (Scalar(5) / Scalar(8)) * _tmp5;

  // Output terms (1)
  Eigen::Matrix<Scalar, 5, 1> _res;

  _res(0, 0) = _tmp1 - Scalar(7) / Scalar(24) * _tmp2 + (Scalar(1) / Scalar(2)) * _tmp3 + 1;
  _res(1, 0) = (Scalar(13) / Scalar(12)) * _tmp2 - Scalar(49) / Scalar(24) * _tmp3 + _tmp4 + _tmp6 +
               _tmp7 + 1;
  _res(2, 0) = -Scalar(5) / Scalar(4) * _tmp0 - Scalar(5) / Scalar(3) * _tmp2 +
               (Scalar(25) / Scalar(8)) * _tmp3 + _tmp8 - _tmp9 + 1;
  _res(3, 0) =
      (Scalar(5) / Scalar(4)) * _tmp2 - Scalar(17) / Scalar(8) * _tmp3 + _tmp7 + _tmp8 + _tmp9;
  _res(4, 0) =
      _tmp1 - Scalar(3) / Scalar(8) * _tmp2 + (Scalar(13) / Scalar(24)) * _tmp3 + _tmp4 - _tmp6;

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
