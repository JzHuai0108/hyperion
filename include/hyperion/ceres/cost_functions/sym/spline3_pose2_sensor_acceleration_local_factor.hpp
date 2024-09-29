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
Eigen::Matrix<Scalar, 3, 1> Spline3Pose2SensorAccelerationLocalFactor(
    const Scalar dt, const Eigen::Matrix<Scalar, 3, 3>& lambdas, const sym::Pose2<Scalar>& x0,
    const sym::Pose2<Scalar>& x1, const sym::Pose2<Scalar>& x2, const sym::Pose2<Scalar>& x3,
    const sym::Pose2<Scalar>& x_T_s, const Eigen::Matrix<Scalar, 3, 1>& acceleration,
    const Eigen::Matrix<Scalar, 3, 3>& sqrt_info, const Scalar epsilon) {
  // Total ops: 150

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _x0 = x0.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x1 = x1.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x2 = x2.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x3 = x3.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _x_T_s = x_T_s.Data();

  // Intermediate terms (41)
  const Scalar _tmp0 = _x0[0] * _x1[0] + _x0[1] * _x1[1];
  const Scalar _tmp1 =
      std::atan2(_x0[0] * _x1[1] - _x0[1] * _x1[0],
                 _tmp0 + epsilon * ((((_tmp0) > 0) - ((_tmp0) < 0)) + Scalar(0.5)));
  const Scalar _tmp2 = _tmp1 * lambdas(0, 0);
  const Scalar _tmp3 = std::cos(_tmp2);
  const Scalar _tmp4 = std::sin(_tmp2);
  const Scalar _tmp5 = _tmp3 * _x0[0] - _tmp4 * _x0[1];
  const Scalar _tmp6 = _x1[0] * _x2[0] + _x1[1] * _x2[1];
  const Scalar _tmp7 =
      std::atan2(_x1[0] * _x2[1] - _x1[1] * _x2[0],
                 _tmp6 + epsilon * ((((_tmp6) > 0) - ((_tmp6) < 0)) + Scalar(0.5)));
  const Scalar _tmp8 = _tmp7 * lambdas(1, 0);
  const Scalar _tmp9 = std::sin(_tmp8);
  const Scalar _tmp10 = _tmp3 * _x0[1] + _tmp4 * _x0[0];
  const Scalar _tmp11 = std::cos(_tmp8);
  const Scalar _tmp12 = _tmp10 * _tmp11 + _tmp5 * _tmp9;
  const Scalar _tmp13 = _x2[0] * _x3[0] + _x2[1] * _x3[1];
  const Scalar _tmp14 =
      std::atan2(_x2[0] * _x3[1] - _x2[1] * _x3[0],
                 _tmp13 + epsilon * ((((_tmp13) > 0) - ((_tmp13) < 0)) + Scalar(0.5)));
  const Scalar _tmp15 = _tmp14 * lambdas(2, 0);
  const Scalar _tmp16 = std::cos(_tmp15);
  const Scalar _tmp17 = -_tmp10 * _tmp9 + _tmp11 * _tmp5;
  const Scalar _tmp18 = std::sin(_tmp15);
  const Scalar _tmp19 = _tmp12 * _tmp16 + _tmp17 * _tmp18;
  const Scalar _tmp20 = -_x2[2] + _x3[2];
  const Scalar _tmp21 = -_x1[2] + _x2[2];
  const Scalar _tmp22 = -_x0[2] + _x1[2];
  const Scalar _tmp23 = _tmp20 * lambdas(2, 2) + _tmp21 * lambdas(1, 2) + _tmp22 * lambdas(0, 2);
  const Scalar _tmp24 = -_tmp12 * _tmp18 + _tmp16 * _tmp17;
  const Scalar _tmp25 = -_x2[3] + _x3[3];
  const Scalar _tmp26 = -_x1[3] + _x2[3];
  const Scalar _tmp27 = -_x0[3] + _x1[3];
  const Scalar _tmp28 = _tmp25 * lambdas(2, 2) + _tmp26 * lambdas(1, 2) + _tmp27 * lambdas(0, 2);
  const Scalar _tmp29 = _tmp20 * lambdas(2, 1) + _tmp21 * lambdas(1, 1) + _tmp22 * lambdas(0, 1);
  const Scalar _tmp30 = _tmp25 * lambdas(2, 1) + _tmp26 * lambdas(1, 1) + _tmp27 * lambdas(0, 1);
  const Scalar _tmp31 = _tmp1 * lambdas(0, 1) + _tmp14 * lambdas(2, 1) + _tmp7 * lambdas(1, 1);
  const Scalar _tmp32 =
      -_tmp19 * _tmp23 + _tmp24 * _tmp28 - _tmp31 * (_tmp19 * _tmp30 + _tmp24 * _tmp29);
  const Scalar _tmp33 = std::pow(dt, Scalar(-2));
  const Scalar _tmp34 = _tmp33 * _x_T_s[1];
  const Scalar _tmp35 =
      _tmp33 * (_tmp1 * lambdas(0, 2) + _tmp14 * lambdas(2, 2) + _tmp7 * lambdas(1, 2));
  const Scalar _tmp36 =
      _tmp19 * _tmp28 + _tmp23 * _tmp24 + _tmp31 * (-_tmp19 * _tmp29 + _tmp24 * _tmp30);
  const Scalar _tmp37 = _tmp33 * _x_T_s[0];
  const Scalar _tmp38 = _tmp32 * _tmp34 - _tmp35 * (_x_T_s[0] * _x_T_s[3] - _x_T_s[1] * _x_T_s[2]) +
                        _tmp36 * _tmp37 - acceleration(1, 0);
  const Scalar _tmp39 = _tmp32 * _tmp37 - _tmp34 * _tmp36 +
                        _tmp35 * (_x_T_s[0] * _x_T_s[2] + _x_T_s[1] * _x_T_s[3]) -
                        acceleration(2, 0);
  const Scalar _tmp40 = _tmp35 - acceleration(0, 0);

  // Output terms (1)
  Eigen::Matrix<Scalar, 3, 1> _res;

  _res(0, 0) = _tmp38 * sqrt_info(0, 1) + _tmp39 * sqrt_info(0, 2) + _tmp40 * sqrt_info(0, 0);
  _res(1, 0) = _tmp38 * sqrt_info(1, 1) + _tmp39 * sqrt_info(1, 2) + _tmp40 * sqrt_info(1, 0);
  _res(2, 0) = _tmp38 * sqrt_info(2, 1) + _tmp39 * sqrt_info(2, 2) + _tmp40 * sqrt_info(2, 0);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
