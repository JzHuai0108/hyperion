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
 * Symbolic function: spline3_pose2_sensor_acceleration_factor
 *
 * Args:
 *     dt: Scalar
 *     lambdas: Matrix33
 *     x0: Pose2
 *     x1: Pose2
 *     x2: Pose2
 *     x3: Pose2
 *     x_T_s: Pose2
 *     acceleration: Matrix31
 *     sqrt_info: Matrix33
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix31
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 3, 1> Spline3Pose2SensorAccelerationGlobalFactor(
    const Scalar dt, const Eigen::Matrix<Scalar, 3, 3>& lambdas, const sym::Pose2<Scalar>& x0,
    const sym::Pose2<Scalar>& x1, const sym::Pose2<Scalar>& x2, const sym::Pose2<Scalar>& x3,
    const sym::Pose2<Scalar>& x_T_s, const Eigen::Matrix<Scalar, 3, 1>& acceleration,
    const Eigen::Matrix<Scalar, 3, 3>& sqrt_info, const Scalar epsilon) {
  // Total ops: 111

  // Unused inputs
  (void)x_T_s;

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x3 = x3.Data();

  // Intermediate terms (18)
  const Scalar _tmp0 = std::pow(dt, Scalar(-2));
  const Scalar _tmp1 = -_x2[2] + _x3[2];
  const Scalar _tmp2 = -_x1[2] + _x2[2];
  const Scalar _tmp3 = -_x0[2] + _x1[2];
  const Scalar _tmp4 = _x2[0] * _x3[0] + _x2[1] * _x3[1];
  const Scalar _tmp5 =
      std::atan2(_x2[0] * _x3[1] - _x2[1] * _x3[0],
                 _tmp4 + epsilon * ((((_tmp4) > 0) - ((_tmp4) < 0)) + Scalar(0.5)));
  const Scalar _tmp6 = _x1[0] * _x2[0] + _x1[1] * _x2[1];
  const Scalar _tmp7 =
      std::atan2(_x1[0] * _x2[1] - _x1[1] * _x2[0],
                 _tmp6 + epsilon * ((((_tmp6) > 0) - ((_tmp6) < 0)) + Scalar(0.5)));
  const Scalar _tmp8 = _x0[0] * _x1[0] + _x0[1] * _x1[1];
  const Scalar _tmp9 =
      std::atan2(_x0[0] * _x1[1] - _x0[1] * _x1[0],
                 _tmp8 + epsilon * ((((_tmp8) > 0) - ((_tmp8) < 0)) + Scalar(0.5)));
  const Scalar _tmp10 = _tmp5 * lambdas(2, 2) + _tmp7 * lambdas(1, 2) + _tmp9 * lambdas(0, 2);
  const Scalar _tmp11 = -_x2[3] + _x3[3];
  const Scalar _tmp12 = -_x1[3] + _x2[3];
  const Scalar _tmp13 = -_x0[3] + _x1[3];
  const Scalar _tmp14 = _tmp5 * lambdas(2, 1) + _tmp7 * lambdas(1, 1) + _tmp9 * lambdas(0, 1);
  const Scalar _tmp15 =
      _tmp0 * (_tmp1 * lambdas(2, 2) +
               _tmp10 * (_tmp11 * lambdas(2, 0) + _tmp12 * lambdas(1, 0) + _tmp13 * lambdas(0, 0) +
                         _x0[3]) +
               _tmp14 * (_tmp11 * lambdas(2, 1) + _tmp12 * lambdas(1, 1) + _tmp13 * lambdas(0, 1)) +
               _tmp2 * lambdas(1, 2) + _tmp3 * lambdas(0, 2)) -
      acceleration(1, 0);
  const Scalar _tmp16 = _tmp0 * _tmp10 - acceleration(0, 0);
  const Scalar _tmp17 =
      _tmp0 * (-_tmp10 * (_tmp1 * lambdas(2, 0) + _tmp2 * lambdas(1, 0) + _tmp3 * lambdas(0, 0) +
                          _x0[2]) +
               _tmp11 * lambdas(2, 2) + _tmp12 * lambdas(1, 2) + _tmp13 * lambdas(0, 2) -
               _tmp14 * (_tmp1 * lambdas(2, 1) + _tmp2 * lambdas(1, 1) + _tmp3 * lambdas(0, 1))) -
      acceleration(2, 0);

  // Output terms (1)
  Eigen::Matrix<Scalar, 3, 1> _res;

  _res(0, 0) = _tmp15 * sqrt_info(0, 1) + _tmp16 * sqrt_info(0, 0) + _tmp17 * sqrt_info(0, 2);
  _res(1, 0) = _tmp15 * sqrt_info(1, 1) + _tmp16 * sqrt_info(1, 0) + _tmp17 * sqrt_info(1, 2);
  _res(2, 0) = _tmp15 * sqrt_info(2, 1) + _tmp16 * sqrt_info(2, 0) + _tmp17 * sqrt_info(2, 2);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
