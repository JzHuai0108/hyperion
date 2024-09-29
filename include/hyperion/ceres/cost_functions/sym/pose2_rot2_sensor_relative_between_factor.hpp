// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/pose2.h>
#include <sym/rot2.h>

namespace sym_ceres {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: pose2_rot2_sensor_relative_between_factor
 *
 * Args:
 *     x: Pose2
 *     x_T_a: Pose2
 *     a_T_b: Rot2
 *     y: Pose2
 *     y_T_b: Pose2
 *     sqrt_info: Matrix11
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix11
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 1, 1> Pose2Rot2SensorRelativeBetweenFactor(
    const sym::Pose2<Scalar>& x, const sym::Pose2<Scalar>& x_T_a, const sym::Rot2<Scalar>& a_T_b,
    const sym::Pose2<Scalar>& y, const sym::Pose2<Scalar>& y_T_b,
    const Eigen::Matrix<Scalar, 1, 1>& sqrt_info, const Scalar epsilon) {
  // Total ops: 30

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x = x.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x_T_a = x_T_a.Data();
  const Eigen::Matrix<Scalar, 2, 1>& _a_T_b = a_T_b.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y = y.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y_T_b = y_T_b.Data();

  // Intermediate terms (7)
  const Scalar _tmp0 = _y[0] * _y_T_b[0] - _y[1] * _y_T_b[1];
  const Scalar _tmp1 = _x[0] * _x_T_a[1] + _x[1] * _x_T_a[0];
  const Scalar _tmp2 = _y[0] * _y_T_b[1] + _y[1] * _y_T_b[0];
  const Scalar _tmp3 = _x[0] * _x_T_a[0] - _x[1] * _x_T_a[1];
  const Scalar _tmp4 = -_tmp0 * _tmp1 + _tmp2 * _tmp3;
  const Scalar _tmp5 = _tmp0 * _tmp3 + _tmp1 * _tmp2;
  const Scalar _tmp6 = _a_T_b[0] * _tmp5 + _a_T_b[1] * _tmp4;

  // Output terms (1)
  Eigen::Matrix<Scalar, 1, 1> _res;

  _res(0, 0) = sqrt_info(0, 0) *
               std::atan2(_a_T_b[0] * _tmp4 - _a_T_b[1] * _tmp5,
                          _tmp6 + epsilon * ((((_tmp6) > 0) - ((_tmp6) < 0)) + Scalar(0.5)));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
