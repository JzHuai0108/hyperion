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
 * Symbolic function: spline3_pose2_r2_sensor_delta_factor
 *
 * Args:
 *     lambdas: Matrix31
 *     x0: Pose2
 *     x1: Pose2
 *     x2: Pose2
 *     x3: Pose2
 *     x_T_y: Matrix21
 *     y: Pose2
 *     sqrt_info: Matrix22
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix21
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 2, 1> Spline3Pose2R2SensorDeltaFactor(
    const Eigen::Matrix<Scalar, 3, 1>& lambdas, const sym::Pose2<Scalar>& x0,
    const sym::Pose2<Scalar>& x1, const sym::Pose2<Scalar>& x2, const sym::Pose2<Scalar>& x3,
    const Eigen::Matrix<Scalar, 2, 1>& x_T_y, const sym::Pose2<Scalar>& y,
    const Eigen::Matrix<Scalar, 2, 2>& sqrt_info, const Scalar epsilon) {
  // Total ops: 100

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x3 = x3.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _y = y.Data();

  // Intermediate terms (22)
  const Scalar _tmp0 = _x2[0] * _x3[0] + _x2[1] * _x3[1];
  const Scalar _tmp1 =
      lambdas(2, 0) * std::atan2(_x2[0] * _x3[1] - _x2[1] * _x3[0],
                                 _tmp0 + epsilon * ((((_tmp0) > 0) - ((_tmp0) < 0)) + Scalar(0.5)));
  const Scalar _tmp2 = std::sin(_tmp1);
  const Scalar _tmp3 = _x1[0] * _x2[0] + _x1[1] * _x2[1];
  const Scalar _tmp4 =
      lambdas(1, 0) * std::atan2(_x1[0] * _x2[1] - _x1[1] * _x2[0],
                                 _tmp3 + epsilon * ((((_tmp3) > 0) - ((_tmp3) < 0)) + Scalar(0.5)));
  const Scalar _tmp5 = std::sin(_tmp4);
  const Scalar _tmp6 = std::cos(_tmp1);
  const Scalar _tmp7 = std::cos(_tmp4);
  const Scalar _tmp8 = -_tmp2 * _tmp5 + _tmp6 * _tmp7;
  const Scalar _tmp9 = _x0[0] * _x1[0] + _x0[1] * _x1[1];
  const Scalar _tmp10 =
      lambdas(0, 0) * std::atan2(_x0[0] * _x1[1] - _x0[1] * _x1[0],
                                 _tmp9 + epsilon * ((((_tmp9) > 0) - ((_tmp9) < 0)) + Scalar(0.5)));
  const Scalar _tmp11 = std::cos(_tmp10);
  const Scalar _tmp12 = _tmp2 * _tmp7 + _tmp5 * _tmp6;
  const Scalar _tmp13 = std::sin(_tmp10);
  const Scalar _tmp14 = _tmp11 * _tmp8 - _tmp12 * _tmp13;
  const Scalar _tmp15 = _tmp11 * _tmp12 + _tmp13 * _tmp8;
  const Scalar _tmp16 = _tmp14 * _x0[1] + _tmp15 * _x0[0];
  const Scalar _tmp17 = _x0[2] + lambdas(0, 0) * (-_x0[2] + _x1[2]) +
                        lambdas(1, 0) * (-_x1[2] + _x2[2]) + lambdas(2, 0) * (-_x2[2] + _x3[2]);
  const Scalar _tmp18 = _tmp14 * _x0[0] - _tmp15 * _x0[1];
  const Scalar _tmp19 = _x0[3] + lambdas(0, 0) * (-_x0[3] + _x1[3]) +
                        lambdas(1, 0) * (-_x1[3] + _x2[3]) + lambdas(2, 0) * (-_x2[3] + _x3[3]);
  const Scalar _tmp20 =
      _tmp16 * _tmp17 - _tmp16 * _y[2] - _tmp18 * _tmp19 + _tmp18 * _y[3] - x_T_y(1, 0);
  const Scalar _tmp21 =
      -_tmp16 * _tmp19 + _tmp16 * _y[3] - _tmp17 * _tmp18 + _tmp18 * _y[2] - x_T_y(0, 0);

  // Output terms (1)
  Eigen::Matrix<Scalar, 2, 1> _res;

  _res(0, 0) = _tmp20 * sqrt_info(0, 1) + _tmp21 * sqrt_info(0, 0);
  _res(1, 0) = _tmp20 * sqrt_info(1, 1) + _tmp21 * sqrt_info(1, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
