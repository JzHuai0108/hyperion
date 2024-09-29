// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/pose2.h>

namespace sym_ceres {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: pose2_sensor_relative_angle_between_factor
 *
 * Args:
 *     x: Pose2
 *     x_T_a: Pose2
 *     a_d_b: Matrix11
 *     y: Pose2
 *     y_T_b: Pose2
 *     sqrt_info: Matrix11
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix11
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 1, 1> Pose2SensorRelativeAngleBetweenFactor(
    const sym::Pose2<Scalar>& x, const sym::Pose2<Scalar>& x_T_a,
    const Eigen::Matrix<Scalar, 1, 1>& a_d_b, const sym::Pose2<Scalar>& y,
    const sym::Pose2<Scalar>& y_T_b, const Eigen::Matrix<Scalar, 1, 1>& sqrt_info,
    const Scalar epsilon) {
  // Total ops: 28

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x = x.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x_T_a = x_T_a.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y = y.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y_T_b = y_T_b.Data();

  // Intermediate terms (5)
  const Scalar _tmp0 = _y[0] * _y_T_b[0] - _y[1] * _y_T_b[1];
  const Scalar _tmp1 = _x[0] * _x_T_a[1] + _x[1] * _x_T_a[0];
  const Scalar _tmp2 = _y[0] * _y_T_b[1] + _y[1] * _y_T_b[0];
  const Scalar _tmp3 = _x[0] * _x_T_a[0] - _x[1] * _x_T_a[1];
  const Scalar _tmp4 = _tmp0 * _tmp3 + _tmp1 * _tmp2;

  // Output terms (1)
  Eigen::Matrix<Scalar, 1, 1> _res;

  _res(0, 0) =
      sqrt_info(0, 0) *
      (-a_d_b(0, 0) +
       std::sqrt(Scalar(
           epsilon + std::pow(Scalar(std::atan2(-_tmp0 * _tmp1 + _tmp2 * _tmp3,
                                                _tmp4 + epsilon * ((((_tmp4) > 0) - ((_tmp4) < 0)) +
                                                                   Scalar(0.5)))),
                              Scalar(2)))));

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
