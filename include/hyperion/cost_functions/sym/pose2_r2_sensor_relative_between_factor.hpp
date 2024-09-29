// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/pose2.h>

namespace sym_hyperion {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: pose2_r2_sensor_relative_between_factor
 *
 * Args:
 *     x: Pose2
 *     x_T_a: Pose2
 *     a_T_b: Matrix21
 *     y: Pose2
 *     y_T_b: Pose2
 *     sqrt_info: Matrix22
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix21
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 2, 1> Pose2R2SensorRelativeBetweenFactor(
    const sym::Pose2<Scalar>& x, const sym::Pose2<Scalar>& x_T_a,
    const Eigen::Matrix<Scalar, 2, 1>& a_T_b, const sym::Pose2<Scalar>& y,
    const sym::Pose2<Scalar>& y_T_b, const Eigen::Matrix<Scalar, 2, 2>& sqrt_info,
    const Scalar epsilon) {
  // Total ops: 44

  // Unused inputs
  (void)epsilon;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x = x.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x_T_a = x_T_a.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y = y.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y_T_b = y_T_b.Data();

  // Intermediate terms (8)
  const Scalar _tmp0 = _x[0] * _x_T_a[0] - _x[1] * _x_T_a[1];
  const Scalar _tmp1 = _x[0] * _x_T_a[2] - _x[1] * _x_T_a[3] + _x[2];
  const Scalar _tmp2 = _x[0] * _x_T_a[1] + _x[1] * _x_T_a[0];
  const Scalar _tmp3 = _x[0] * _x_T_a[3] + _x[1] * _x_T_a[2] + _x[3];
  const Scalar _tmp4 = _y[0] * _y_T_b[2] - _y[1] * _y_T_b[3] + _y[2];
  const Scalar _tmp5 = _y[0] * _y_T_b[3] + _y[1] * _y_T_b[2] + _y[3];
  const Scalar _tmp6 = -_tmp0 * _tmp1 + _tmp0 * _tmp4 - _tmp2 * _tmp3 + _tmp2 * _tmp5 - a_T_b(0, 0);
  const Scalar _tmp7 = -_tmp0 * _tmp3 + _tmp0 * _tmp5 + _tmp1 * _tmp2 - _tmp2 * _tmp4 - a_T_b(1, 0);

  // Output terms (1)
  Eigen::Matrix<Scalar, 2, 1> _res;

  _res(0, 0) = _tmp6 * sqrt_info(0, 0) + _tmp7 * sqrt_info(0, 1);
  _res(1, 0) = _tmp6 * sqrt_info(1, 0) + _tmp7 * sqrt_info(1, 1);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_hyperion
