// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/rot2.h>

namespace sym_hyperion {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: spline3_rot2_acceleration_factor
 *
 * Args:
 *     dt: Scalar
 *     lambdas: Matrix33
 *     x0: Rot2
 *     x1: Rot2
 *     x2: Rot2
 *     x3: Rot2
 *     acceleration: Matrix11
 *     sqrt_info: Matrix11
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix11
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 1, 1> Spline3Rot2AccelerationLocalFactor(
    const Scalar dt, const Eigen::Matrix<Scalar, 3, 3>& lambdas, const sym::Rot2<Scalar>& x0,
    const sym::Rot2<Scalar>& x1, const sym::Rot2<Scalar>& x2, const sym::Rot2<Scalar>& x3,
    const Eigen::Matrix<Scalar, 1, 1>& acceleration, const Eigen::Matrix<Scalar, 1, 1>& sqrt_info,
    const Scalar epsilon) {
  // Total ops: 42

  // Input arrays
  const Eigen::Matrix<Scalar, 2, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 2, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 2, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 2, 1>& _x3 = x3.Data();

  // Intermediate terms (3)
  const Scalar _tmp0 = _x2[0] * _x3[0] + _x2[1] * _x3[1];
  const Scalar _tmp1 = _x1[0] * _x2[0] + _x1[1] * _x2[1];
  const Scalar _tmp2 = _x0[0] * _x1[0] + _x0[1] * _x1[1];

  // Output terms (1)
  Eigen::Matrix<Scalar, 1, 1> _res;

  _res(0, 0) =
      sqrt_info(0, 0) *
      (-acceleration(0, 0) +
       (lambdas(0, 2) *
            std::atan2(_x0[0] * _x1[1] - _x0[1] * _x1[0],
                       _tmp2 + epsilon * ((((_tmp2) > 0) - ((_tmp2) < 0)) + Scalar(0.5))) +
        lambdas(1, 2) *
            std::atan2(_x1[0] * _x2[1] - _x1[1] * _x2[0],
                       _tmp1 + epsilon * ((((_tmp1) > 0) - ((_tmp1) < 0)) + Scalar(0.5))) +
        lambdas(2, 2) *
            std::atan2(_x2[0] * _x3[1] - _x2[1] * _x3[0],
                       _tmp0 + epsilon * ((((_tmp0) > 0) - ((_tmp0) < 0)) + Scalar(0.5)))) /
           std::pow(dt, Scalar(2)));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_hyperion
